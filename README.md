# WT32
Some attempts to use the WT32-SC01-Plus module using arduino-IDE.

<p>As destination you should (and must) select "ESP32S3 Dev Module" - NOT "ESP32C3" !!! </p>

<p>01 - 1st step ... simple "Hello World"</p>
<p>02 - usage of LVGL to test the display</p>
<p>03 - (very) simple Web-Radio using AudiotTools from pschatzmann</p>
<p>04 - same like #03 but using schreibfauls audio</p>
<p>05 - much more with GUI, generated with Squareline Studio</p>


You should 1st copy the file "lv_conf.h" from this Repo (in "lvgl") to your Arduino/libraries folder 

Used (arduiono libraries:

<p>lvgl</p>
<p>LoyanGFX</p>
<p>ArduinoJson</p>
<p>SD</p>
<p>Audio-tools (from Schreibfaul1)</p>

For the examples using SD-Card for reading the configuration (like WiFi, Password, stations), I'm using the file "config.json" in  "JSON" 

