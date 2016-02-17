package com.example.ajust.myapplication;

import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.util.Log;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        //button

        Button btn1 = (Button) findViewById(R.id.buttonUn);
        Button btn2 = (Button) findViewById(R.id.buttonDeux);
        Button btn3 = (Button) findViewById(R.id.buttonTrois);
        Button btn4 = (Button) findViewById(R.id.buttonQuatre);
        Button btn5 = (Button) findViewById(R.id.buttonCinq);

        //listener

        btn1.setOnClickListener(myhandler0);
        btn2.setOnClickListener(myhandler0);
        btn3.setOnClickListener(myhandler0);
        btn4.setOnClickListener(myhandler0);
        btn5.setOnClickListener(myhandler0);


        FloatingActionButton fab = (FloatingActionButton) findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
                        .setAction("Action", null).show();
            }
        });

    }

    View.OnClickListener myhandler0 = new View.OnClickListener(){

        public void onClick(View v) {
            Log.w("coucou", "c'est moi");
        }
    };

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

}
