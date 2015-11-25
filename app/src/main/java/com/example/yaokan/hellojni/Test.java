package com.example.yaokan.hellojni;


/**
 * Created by yaokan on 15/11/24.
 */
public class Test {
    static {
        System.loadLibrary("HelloJni");
    }

    public native String test();
}