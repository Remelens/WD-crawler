VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Py-Crawler-GUI"
   ClientHeight    =   2580
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   5760
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   2580
   ScaleWidth      =   5760
   StartUpPosition =   3  '´°¿ÚÈ±Ê¡
   Begin VB.Frame Frame1 
      Caption         =   "State"
      Height          =   615
      Left            =   480
      TabIndex        =   10
      Top             =   1320
      Width           =   4815
      Begin VB.Label Label4 
         Caption         =   "Ready"
         BeginProperty Font 
            Name            =   "Courier New"
            Size            =   9
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   11
         Top             =   240
         Width           =   4575
      End
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Exit"
      Height          =   375
      Left            =   3840
      TabIndex        =   9
      Top             =   2040
      Width           =   1335
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Help"
      Height          =   375
      Left            =   2160
      TabIndex        =   8
      Top             =   2040
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "About"
      Height          =   375
      Left            =   480
      TabIndex        =   7
      Top             =   2040
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Crawler"
      Height          =   375
      Left            =   4320
      TabIndex        =   6
      Top             =   840
      Width           =   1095
   End
   Begin VB.TextBox Text3 
      BackColor       =   &H8000000F&
      Height          =   375
      Left            =   3000
      Locked          =   -1  'True
      MousePointer    =   3  'I-Beam
      TabIndex        =   5
      Text            =   "5"
      Top             =   840
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   960
      TabIndex        =   3
      Text            =   "1"
      Top             =   840
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   960
      TabIndex        =   0
      Top             =   240
      Width           =   4455
   End
   Begin VB.Label Label3 
      Caption         =   "threads"
      Height          =   255
      Left            =   2280
      TabIndex        =   4
      Top             =   840
      Width           =   855
   End
   Begin VB.Label Label2 
      Caption         =   "pages"
      Height          =   255
      Left            =   360
      TabIndex        =   2
      Top             =   840
      Width           =   495
   End
   Begin VB.Label Label1 
      Caption         =   "URL"
      Height          =   255
      Left            =   360
      TabIndex        =   1
      Top             =   360
      Width           =   615
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    If Form1.Text2.Text = "" Or Form1.Text2.Text = "0" Then
        MsgBox ("Failed:pages need a number!")
    Else
        Form1.Text1.Locked = True
        Form1.Text1.BackColor = &H8000000F
        Form1.Text2.Locked = True
        Form1.Text2.BackColor = &H8000000F
        Form1.Command1.Enabled = False
        Form1.Label4.Caption = "Crawlering..."
        Set ws = CreateObject("Wscript.Shell")
        ws.run "main.exe " + Form1.Text1.Text + " " + Form1.Text2.Text, 0, True
        Form1.Text1.Locked = False
        Form1.Text1.BackColor = &H80000005
        Form1.Text2.Locked = False
        Form1.Text2.BackColor = &H80000005
        Form1.Command1.Enabled = True
        Form1.Label4.Caption = "Finished"
        MsgBox "Done.", vbOKOnly, "Info"
        Form1.Label4.Caption = "Ready"
    End If
End Sub

Private Sub Command2_Click()
    frmAbout.Show
End Sub

Private Sub Command3_Click()
    Set ws = CreateObject("Wscript.Shell")
    ws.run "cmd.exe /k start """" ""https://github.com/HelloOSMe/Py-crawler"" ", 0
End Sub

Private Sub Command4_Click()
    Unload frmAbout
    Unload Form1
End Sub


Private Sub Text2_KeyPress(KeyAscii As Integer)
    If KeyAscii = 8 Then
        KeyAscii = 8
    ElseIf KeyAscii < 48 Or KeyAscii > 57 Then
        KeyAscii = 0
    End If
End Sub
Private Sub Text3_KeyPress(KeyAscii As Integer)
    If KeyAscii = 8 Then
        KeyAscii = 8
    ElseIf KeyAscii < 48 Or KeyAscii > 57 Then
        KeyAscii = 0
    End If
End Sub
