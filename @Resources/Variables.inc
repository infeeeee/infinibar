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
; register on https://openweathermap.org to get your free api key. This is mine, if it's not working, request your own!
openweathermapApiKey=f876d352020c6490d27b248538c6d261
; city name and country code divided by comma, use ISO 3166 country codes:
weatherCode=Budapest,hu
; use metric or imperial
weatherUnitSystem=metric
; use C or F
weatherUnit=C


; -----------
; VOL
; -----------

volumeClick="C:\Users\gyetpet\Documents\_git\batch2\changeSoundOut.bat"

; -----------
; CPU
; -----------

hwinfoCpuTempRegistryIndex=0
speedfanCpuTempNumber=2
cpuTempUnit=C
cpuClick="taskmgr.exe"

; -----------
; VGA
; -----------

hwinfoVgaTempRegistryIndex=1
hwinfoVgaUsageRegistryIndex=2
vgaTempUnit=C
vgaClick="C:\Program Files (x86)\GPU-Z\GPU-Z.exe"

; -----------
; VRM
; -----------

hwinfoVrmUsageRegistryIndex=3

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

