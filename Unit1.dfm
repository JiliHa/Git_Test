object Form1: TForm1
  Left = 1146
  Top = 113
  Width = 370
  Height = 640
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 72
    Width = 49
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = 'V1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label2: TLabel
    Left = 24
    Top = 168
    Width = 49
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = 'V2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label3: TLabel
    Left = 88
    Top = 8
    Width = 50
    Height = 50
    Alignment = taCenter
    AutoSize = False
    Caption = 'x'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label4: TLabel
    Left = 152
    Top = 8
    Width = 50
    Height = 50
    Alignment = taCenter
    AutoSize = False
    Caption = 'y'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label5: TLabel
    Left = 216
    Top = 8
    Width = 50
    Height = 50
    Alignment = taCenter
    AutoSize = False
    Caption = 'z'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object lbeRes: TLabel
    Left = 88
    Top = 272
    Width = 177
    Height = 50
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label6: TLabel
    Left = 152
    Top = 216
    Width = 49
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = '='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object lbeOpr: TLabel
    Left = 152
    Top = 120
    Width = 49
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label7: TLabel
    Left = 24
    Top = 272
    Width = 49
    Height = 49
    Alignment = taCenter
    AutoSize = False
    Caption = 'V3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object edtx1: TEdit
    Left = 88
    Top = 72
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '0'
    OnClick = edtx1Click
  end
  object edty1: TEdit
    Left = 152
    Top = 72
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '0'
    OnClick = edty1Click
  end
  object edtz1: TEdit
    Left = 216
    Top = 72
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Text = '0'
    OnClick = edtz1Click
  end
  object edtx2: TEdit
    Left = 88
    Top = 168
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    Text = '0'
    OnClick = edtx2Click
  end
  object edty2: TEdit
    Left = 152
    Top = 168
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    Text = '0'
    OnClick = edty2Click
  end
  object edtz2: TEdit
    Left = 216
    Top = 168
    Width = 49
    Height = 49
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Text = '0'
    OnClick = edtz2Click
  end
  object btnAdd: TButton
    Left = 216
    Top = 336
    Width = 49
    Height = 49
    Caption = '+'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    TabStop = False
    OnClick = btnAddClick
  end
  object btnSub: TButton
    Left = 216
    Top = 400
    Width = 49
    Height = 49
    Caption = '-'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    TabStop = False
    OnClick = btnSubClick
  end
  object btnDot: TButton
    Left = 216
    Top = 528
    Width = 49
    Height = 49
    Caption = #9679
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    TabStop = False
    OnClick = btnDotClick
  end
  object btnCro: TButton
    Left = 216
    Top = 464
    Width = 49
    Height = 49
    Caption = 'x'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    TabStop = False
    OnClick = btnCroClick
  end
  object btnNum7: TButton
    Left = 24
    Top = 336
    Width = 49
    Height = 49
    Caption = '7'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    TabStop = False
    OnClick = btnNum7Click
  end
  object btnNum8: TButton
    Left = 88
    Top = 336
    Width = 49
    Height = 49
    Caption = '8'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    TabStop = False
    OnClick = btnNum8Click
  end
  object btnNum9: TButton
    Left = 152
    Top = 336
    Width = 49
    Height = 49
    Caption = '9'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    TabStop = False
    OnClick = btnNum9Click
  end
  object btnNum4: TButton
    Left = 24
    Top = 400
    Width = 49
    Height = 49
    Caption = '4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    TabStop = False
    OnClick = btnNum4Click
  end
  object btnNum5: TButton
    Left = 88
    Top = 400
    Width = 49
    Height = 49
    Caption = '5'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    TabStop = False
    OnClick = btnNum5Click
  end
  object btnNum6: TButton
    Left = 152
    Top = 400
    Width = 49
    Height = 49
    Caption = '6'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
    TabStop = False
    OnClick = btnNum6Click
  end
  object btnNum1: TButton
    Left = 24
    Top = 464
    Width = 49
    Height = 49
    Caption = '1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
    TabStop = False
    OnClick = btnNum1Click
  end
  object btnNum2: TButton
    Left = 88
    Top = 464
    Width = 49
    Height = 49
    Caption = '2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
    TabStop = False
    OnClick = btnNum2Click
  end
  object btnNum3: TButton
    Left = 152
    Top = 464
    Width = 49
    Height = 49
    Caption = '3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 18
    TabStop = False
    OnClick = btnNum3Click
  end
  object btnPM: TButton
    Left = 24
    Top = 528
    Width = 49
    Height = 49
    Caption = #177
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 19
    TabStop = False
    OnClick = btnPMClick
  end
  object btnNum0: TButton
    Left = 88
    Top = 528
    Width = 49
    Height = 49
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 20
    TabStop = False
    OnClick = btnNum0Click
  end
  object btnPoint: TButton
    Left = 152
    Top = 528
    Width = 49
    Height = 49
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 21
    TabStop = False
  end
  object btnTab: TButton
    Left = 280
    Top = 336
    Width = 49
    Height = 49
    Caption = #8594
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 22
    OnClick = btnTabClick
  end
  object btnBack: TButton
    Left = 280
    Top = 400
    Width = 49
    Height = 49
    Caption = #8592
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 23
    OnClick = btnBackClick
  end
  object btnCln: TButton
    Left = 280
    Top = 464
    Width = 49
    Height = 49
    Caption = 'Clean'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 24
    OnClick = btnClnClick
  end
end
