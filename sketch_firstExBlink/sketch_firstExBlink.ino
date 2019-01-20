/* Jfr File-Examples-Basic-Blink

Arduino: 1.8.8 (Linux), Board: "Arduino/Genuino Uno"

Sketch uses 930 bytes (2%) of program storage space. Maximum is 32256 bytes.
Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.
avrdude: ser_open(): can't open device "/dev/ttyACM0": Permission denied
Problem uploading to board.  See http://www.arduino.cc/en/Guide/Troubleshooting#upload for suggestions.

This report would have more information with
"Show verbose output during compilation"
option enabled in File -> Preferences.

https://www.youtube.com/watch?v=kztOYM3TjlE
https://bbs.archlinux.org/viewtopic.php?id=222093

anders@manjaro17 ~/c-prog/kandr (master)> stat /dev/ttyACM0
  File: /dev/ttyACM0
  Size: 0               Blocks: 0          IO Block: 4096   character special file
Device: 6h/6d   Inode: 437         Links: 1     Device type: a6,0
Access: (0660/crw-rw----)  Uid: (    0/    root)   Gid: (   14/    uucp)
Access: 2019-01-19 18:51:36.092244077 +0100
Modify: 2019-01-19 18:51:54.092244077 +0100
Change: 2019-01-19 18:51:36.092244077 +0100
 Birth: -
anders@manjaro17 ~/c-prog/kandr (master)> cut -d: -f1 /etc/group | sort | less
anders@manjaro17 ~/c-prog/kandr (master)> sudo usermod -a -G uucp anders
[sudo] password for anders: 
anders@manjaro17 ~/c-prog/kandr (master)> sudo chmod a+rw /dev/ttyACM0

Nu kunde jag ladda upp koden!!!
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  delay(1000);

}
