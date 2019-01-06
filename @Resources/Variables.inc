; This file contains all variables that you should change

[Variables]
; -----------
; Taskbar setup
; -----------

TaskbarW=74
TaskbarH=1440


; -----------
; Colors
; -----------

colorText=255,255,255,255
;colorBackground=16,16,16,255
colorBackground=0,0,0,1
colorHoverBackground=255,255,255,25

colorBar=255,255,255,255
colorBarBackground=51,51,51,255

; -----------
; Clock
; -----------

;More info: https://docs.rainmeter.net/manual/measures/time/#FormatCodes
dateFormat=%y.%m.%d.
timeFormat=%H:%M
weekdayFormat=%A

; -----------
; Weather
; -----------

weatherClickUrl=https://www.idokep.hu
;Search for your weather code here: https://weather.codes/
weatherCode=HUXX0002
weatherUnit=c
WindUnit=kph

; -----------
; NowPlaying
; -----------

;change this according to documentation: https://docs.rainmeter.net/manual/plugins/nowplaying/#playerlist
playerName=CAD
playerClick="C:\Program Files (x86)\foobar2000\foobar2000.exe"

; -----------
; VOL
; -----------

volumeClick="C:\Users\gyetp\Documents\batch\node\bat\changeSoundOut.bat"

; -----------
; CPU
; -----------

HWiNFO-CPU0-DTS-SensorId=0xf0000501
HWiNFO-CPU0-DTS-SensorInstance=0x0
HWiNFO-CPU0-DTS-Core0temp=0x1000000
speedfanCpuTempNumber=2
speedfanCpuTempUnit=C
cpuClick="taskmgr.exe"

; -----------
; VGA
; -----------

HWiNFO-GPU0-Usage-SensorId=0xe0001800
HWiNFO-GPU0-Usage-SensorInstance=0x0
HWiNFO-GPU0-Usage=0x7000000
HWiNFO-GPU0-Temp-SensorId=0xe0001800
HWiNFO-GPU0-Temp-SensorInstance=0x0
HWiNFO-GPU0-Temp=0x1000000
vgaClick="C:\Program Files (x86)\GPU-Z\GPU-Z.exe"

; -----------
; VRM
; -----------

HWiNFO-GPU0-MemUse-SensorId=0xe0001800
HWiNFO-GPU0-MemUse-SensorInstance=0x0
HWiNFO-GPU0-MemUse=0x8000004

Max-VRM-In-GB=8

; -----------
; Disks
; -----------

disk1=C:
disk2=D:
disk3=E:
disk4=X:
disk5=Y:
disk6=Z:

; -----------
; LAN
; -----------

;Max values are in bits! Gigabit: 1073741824 Megabit:1048576
maxInValue=1073741824
maxOutValue=1073741824
lanClick=control.exe /name Microsoft.NetworkAndSharingCenter

; -----------
; Coins
; -----------

;The skin parses coinmarketcap.com for cryptocurrency values. You have to write here the coinmarketcap id of the coins. 
;Most of the times it's the same as the name of the coin. You can find the id in the ending of the url of the respective coinmarketcap page. 
;The coinmarketcap api updates in every 5 mins

coinCode1=bitcoin
coinCode2=bytecoin-bcn
coinCode3=storj
coinCode4=litecoin


; -----------
; Buttons
; -----------

;Button settings are in their respective ini files e.g. Buttons-8-1\Buttons.ini
;There are 4 skins, 2 with 8 buttons and 2 with 4, you can set different functions to any button.
