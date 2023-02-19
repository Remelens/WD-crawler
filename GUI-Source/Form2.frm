VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Py-Crawler: ERROR"
   ClientHeight    =   1860
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   4290
   ControlBox      =   0   'False
   Icon            =   "Form2.frx":0000
   LinkTopic       =   "Form2"
   ScaleHeight     =   1860
   ScaleWidth      =   4290
   StartUpPosition =   3  '´°¿ÚÈ±Ê¡
   Begin VB.CommandButton Command1 
      Caption         =   "OK"
      Height          =   375
      Left            =   1560
      TabIndex        =   1
      Top             =   1320
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "ERROR: Pages need a number!"
      BeginProperty Font 
         Name            =   "ËÎÌå"
         Size            =   10.5
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   1440
      TabIndex        =   0
      Top             =   360
      Width           =   2535
   End
   Begin VB.Image Image1 
      Height          =   960
      Left            =   240
      Picture         =   "Form2.frx":10CA
      Top             =   120
      Width           =   960
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Form1.Enabled = True
    frmAbout.Enabled = True
    Unload Form2
End Sub
