object Form4: TForm4
  Left = 314
  Top = 294
  Width = 750
  Height = 481
  Caption = #1052#1085#1086#1075#1086#1095#1083#1077#1085' '#1089' '#1082#1086#1101#1092#1080#1094#1080#1077#1085#1090#1072#1084#1080' '#1090#1080#1087#1072' double'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 104
    Top = 144
    Width = 26
    Height = 24
    Caption = '*x^'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 152
    Top = 144
    Width = 33
    Height = 24
    Caption = '*e^('
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 8
    Width = 27
    Height = 24
    Caption = 'P1:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 56
    Width = 27
    Height = 24
    Caption = 'P2:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 336
    Width = 98
    Height = 24
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 112
    Top = 336
    Width = 6
    Height = 20
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 208
    Top = 144
    Width = 23
    Height = 24
    Caption = '*x)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 80
    Top = 144
    Width = 25
    Height = 21
    TabOrder = 0
    OnChange = Edit1Change
  end
  object Edit2: TEdit
    Left = 128
    Top = 144
    Width = 25
    Height = 21
    TabOrder = 1
    OnChange = Edit2Change
  end
  object Edit3: TEdit
    Left = 184
    Top = 144
    Width = 25
    Height = 21
    TabOrder = 2
    OnChange = Edit3Change
  end
  object Add1: TButton
    Left = 32
    Top = 120
    Width = 33
    Height = 25
    Caption = 'P1+='
    TabOrder = 3
    OnClick = Add1Click
  end
  object Add2: TButton
    Left = 32
    Top = 160
    Width = 33
    Height = 25
    Caption = 'P2+='
    TabOrder = 4
    OnClick = Add2Click
  end
  object Edit4: TEdit
    Left = 40
    Top = 8
    Width = 521
    Height = 28
    Color = cl3DLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 5
    OnChange = Edit4Change
  end
  object Edit5: TEdit
    Left = 40
    Top = 56
    Width = 521
    Height = 28
    Color = cl3DLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 6
    OnChange = Edit5Change
  end
  object Sum: TButton
    Left = 88
    Top = 224
    Width = 33
    Height = 25
    Caption = '+'
    TabOrder = 7
    OnClick = SumClick
  end
  object Proizv: TButton
    Left = 128
    Top = 224
    Width = 33
    Height = 25
    Caption = '*'
    TabOrder = 8
    OnClick = ProizvClick
  end
  object Clear: TButton
    Left = 336
    Top = 128
    Width = 97
    Height = 41
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
    TabOrder = 9
    OnClick = ClearClick
  end
  object Edit7: TEdit
    Left = 231
    Top = 224
    Width = 41
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnChange = Edit7Change
  end
  object ProNum1: TButton
    Left = 192
    Top = 224
    Width = 41
    Height = 25
    Caption = #1056'1*='
    TabOrder = 11
    OnClick = ProNum1Click
  end
  object Edit8: TEdit
    Left = 231
    Top = 264
    Width = 41
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    OnChange = Edit8Change
  end
  object ProNum2: TButton
    Left = 192
    Top = 264
    Width = 41
    Height = 25
    Caption = #1056'2*='
    TabOrder = 13
    OnClick = ProNum2Click
  end
  object Delit: TButton
    Left = 88
    Top = 264
    Width = 33
    Height = 25
    Caption = '/'
    TabOrder = 14
    OnClick = DelitClick
  end
  object Sravn: TButton
    Left = 128
    Top = 264
    Width = 33
    Height = 25
    Caption = '=='
    TabOrder = 15
    OnClick = SravnClick
  end
end
