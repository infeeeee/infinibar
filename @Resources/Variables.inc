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
; VOL
; -----------

volumeClick="C:\Users\gyetpet\Documents\_gitea\batch2\changeSoundOut.bat"

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

HWiNFO-GPU0-Usage-SensorId=0xe0002000
HWiNFO-GPU0-Usage-SensorInstance=0x0
HWiNFO-GPU0-Usage=0x7000000
HWiNFO-GPU0-Temp-SensorId=0xe0002000
HWiNFO-GPU0-Temp-SensorInstance=0x0
HWiNFO-GPU0-Temp=0x1000000
vgaClick="C:\Program Files (x86)\GPU-Z\GPU-Z.exe"

; -----------
; VRM
; -----------

HWiNFO-GPU0-MemUse-SensorId=0xe0002000
HWiNFO-GPU0-MemUse-SensorInstance=0x0
HWiNFO-GPU0-MemUse=0x7000008

;If your GPU doesn't report VRAM usage in percents, but in bytes, use the VRM-MB-variant, and write here your max VRAM in GBs:
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
; Buttons
; -----------

;Button settings are in their respective ini files

