/* https://github.com/khirds/powertalkz
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * https://github.com/programmer131/ESP8266_ESP32_SelfUpdate/issues/8
 * Thanks
Based on the timemage answer via the other question, I have changed the address of bin and TXT file by finding the download link of those files form the GitHub. And it has been working by changing the blob part of address to raw, so the bin address changed form
https://github.com/soheilpaper/ota_github_blink/blob/main/BlinkWithoutDelay_ino_esp8285.bin to
https://github.com/soheilpaper/ota_github_blink/raw/main/BlinkWithoutDelay_ino_esp8285.bin And the 
https://github.com/soheilpaper/ota_github_blink/blob/main/version.txt
to
https://raw.githubusercontent.com/soheilpaper/ota_github_blink/main/version.txt
















rough
//#define URL_fw_Version "https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/bin_version.txt"
//#define URL_fw_Bin "https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/fw.bin"

//#define URL_fw_Version "https://github.com/khirds/powertalkz/blob/khirds-patch-2/bin_version.txt"
//#define URL_fw_Bin "https://github.com/khirds/powertalkz/blob/khirds-patch-2/fw.bin"

//
//https://github.com/soheilpaper/ota_github_blink/blob/main/BlinkWithoutDelay_ino_esp8285.bin to
//https://github.com/soheilpaper/ota_github_blink/raw/main/BlinkWithoutDelay_ino_esp8285.bin And the 
//https://github.com/soheilpaper/ota_github_blink/blob/main/version.txt
//to
//https://raw.githubusercontent.com/soheilpaper/ota_github_blink/main/version.txt

//#define URL_fw_Bin "https://github.com/khirds/powertalkz/raw/main/fw.bin"
//#define URL_fw_Version "https://raw.github.com/khirds/powertalkz/main/bin_version.txt"

//raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/bin_version.txt"
//#define URL_fw_Bin "https://github.com/khirds/powertalkz/raw/main/bin_version.txt"
//#define URL_fw_Version "https://raw.githubusercontent.com/khirds/powertalkz/main/bin_version.txt"

//#define URL_fw_Version "http://cade-make.000webhostapp.com/version.txt"
//#define URL_fw_Bin "http://cade-make.000webhostapp.com/firmware.bin"

//#define URL_fw_Version "https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/bin_version.txt"
//#define URL_fw_Bin "https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/fw.bin"

https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/fw.bin
https://github.com/khirds/powertalkz/blob/main/fw.bin

https://raw.githubusercontent.com/khirds/powertalkz/main/bin_version.txt
https://raw.githubusercontent.com/khirds/powertalkz/main/fw.bin

https://raw.githubusercontent.com/khirds/powertalkz/blob/main/fw.bin
https://raw.githubusercontent.com/programmer131/ESP8266_ESP32_SelfUpdate/master/esp32_ota/bin_version.txt


#define URL_fw_Bin "https://github.com/khirds/powertalkz/blob/main/fw.bin"
#define URL_fw_Version "https://raw.githubusercontent.com/khirds/powertalkz/main/bin_version.txt"
 */
