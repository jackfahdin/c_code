package com.jackfahdin.otaupdate;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.RecoverySystem;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.io.File;
import java.io.IOException;
import java.security.GeneralSecurityException;

/**
 * @author user
 */
public class MainActivity extends AppCompatActivity implements View.OnClickListener{
    private static final String TAG = "MainActivity";

    String[] needPermissions = new String[]{
    
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //checkPermission();
        buildVersionView();
        Button updateButton = (Button) findViewById(R.id.version_update);
        updateButton.setOnClickListener(this);
    }
    
    private void buildVersionView() {
        Log.d(TAG, "buildVersionView: " + Build.DISPLAY);
        TextView buildTextView = (TextView) findViewById(R.id.build_version);
        buildTextView.setText(Build.DISPLAY);
    }

    private void checkPermission() {
        requestPermissions(needPermissions, 1);
    }
    
    @Override
    public void onClick(View v) {
        if (v.getId() == R.id.version_update) {
            buildUpdateButton();
        }
    }
    
    /**
     * 获取升级包
     *
     * @return 升级包file
     */
    public File getUpdateFile() {
        File updateFile = null;
        if (Environment.getExternalStorageState().equals(Environment.MEDIA_MOUNTED)) {
            String updatePath = Environment.getExternalStorageDirectory().getAbsolutePath()
                    + File.separator + "update.zip";
            updateFile = new File(updatePath);
            boolean isExists = updateFile.exists();
            Log.d(TAG, "getUdapteFile: 是否存在升级包 " + isExists);
            if (isExists) {
                return updateFile;
            }
        }
        return updateFile;
    }
    
    /**
     * 系统升级
     */
    private void buildUpdateButton() {
        File updateFileInstall = getUpdateFile();
        try {
            //签名校验
            RecoverySystem.verifyPackage(updateFileInstall, new RecoverySystem.ProgressListener() {
                @Override
                public void onProgress(int progress) {
                    Log.d(TAG, "onProgress: 签名校验进度: " + progress);
                }
            }, null);
            //升级
            RecoverySystem.installPackage(this, updateFileInstall);
            
        } catch (GeneralSecurityException | IOException e) {
            e.printStackTrace();
        }
    }
}
