object NewTypeForm: TNewTypeForm
  Left = 0
  Top = 0
  Caption = #1053#1086#1074#1099#1081' '#1090#1080#1087' '#1057#1048
  ClientHeight = 209
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 619
    Height = 201
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1085#1086#1074#1086#1075#1086' '#1090#1080#1087#1072' '#1057#1048' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 37
      Width = 143
      Height = 20
      Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1090#1080#1087#1072' '#1057#1048
    end
    object Label2: TLabel
      Left = 16
      Top = 80
      Width = 113
      Height = 20
      Caption = #1054#1073#1086#1079#1085#1072#1095#1077#1085#1080#1077' '#1090#1080#1087#1072
    end
    object Label3: TLabel
      Left = 16
      Top = 128
      Width = 139
      Height = 20
      Caption = #1053#1086#1084#1077#1088' '#1074' '#1043#1086#1089'. '#1088#1077#1077#1089#1090#1088#1077
    end
    object NewTypeNameEdit: TEdit
      Left = 208
      Top = 29
      Width = 401
      Height = 28
      TabOrder = 0
    end
    object NewTypeDesignationEdit: TEdit
      Left = 208
      Top = 72
      Width = 401
      Height = 28
      TabOrder = 1
    end
    object NewTypeRegistryNumberEdit: TEdit
      Left = 208
      Top = 120
      Width = 401
      Height = 28
      TabOrder = 2
    end
    object SaveButton: TButton
      Left = 208
      Top = 160
      Width = 401
      Height = 33
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      TabOrder = 3
      OnClick = SaveButtonClick
    end
  end
end
