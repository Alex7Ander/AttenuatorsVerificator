object NewTypeForm: TNewTypeForm
  Left = 0
  Top = 0
  BorderStyle = bsSizeToolWin
  Caption = #1053#1086#1074#1099#1081' '#1090#1080#1087' '#1057#1048
  ClientHeight = 478
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
  object mainGroupBox: TGroupBox
    Left = 8
    Top = 8
    Width = 619
    Height = 465
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1085#1086#1074#1086#1075#1086' '#1090#1080#1087#1072' '#1057#1048' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object typeNameLabel: TLabel
      Left = 16
      Top = 37
      Width = 143
      Height = 20
      Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1090#1080#1087#1072' '#1057#1048
    end
    object typeDesignationLabel: TLabel
      Left = 16
      Top = 80
      Width = 113
      Height = 20
      Caption = #1054#1073#1086#1079#1085#1072#1095#1077#1085#1080#1077' '#1090#1080#1087#1072
    end
    object typeRegistryNumberEditLabel: TLabel
      Left = 16
      Top = 128
      Width = 139
      Height = 20
      Caption = #1053#1086#1084#1077#1088' '#1074' '#1043#1086#1089'. '#1088#1077#1077#1089#1090#1088#1077
    end
    object connectorTypeLabel: TLabel
      Left = 16
      Top = 176
      Width = 99
      Height = 20
      Caption = #1058#1080#1087' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1103
    end
    object freqRangeLabel: TLabel
      Left = 16
      Top = 232
      Width = 130
      Height = 20
      Caption = #1063#1072#1089#1090#1086#1090#1085#1099#1081' '#1076#1080#1072#1087#1072#1079#1086#1085':'
    end
    object fromLabel: TLabel
      Left = 208
      Top = 232
      Width = 17
      Height = 20
      Caption = #1086#1090' '
    end
    object toLabel: TLabel
      Left = 367
      Top = 232
      Width = 50
      Height = 20
      Caption = #1043#1043#1094', '#1076#1086' '
    end
    object gHzLabel: TLabel
      Left = 575
      Top = 232
      Width = 22
      Height = 20
      Caption = #1043#1043#1094
    end
    object commentLabel: TLabel
      Left = 16
      Top = 280
      Width = 83
      Height = 20
      Caption = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1081
    end
    object typeNameEdit: TEdit
      Left = 208
      Top = 29
      Width = 401
      Height = 28
      TabOrder = 0
      Text = #1040#1090#1090#1077#1085#1102#1072#1090#1086#1088
    end
    object typeDesignationEdit: TEdit
      Left = 208
      Top = 72
      Width = 401
      Height = 28
      TabOrder = 1
      Text = #1040#1055'-19'
    end
    object typeRegistryNumberEdit: TEdit
      Left = 208
      Top = 120
      Width = 401
      Height = 28
      TabOrder = 2
    end
    object saveButton: TButton
      Left = 208
      Top = 422
      Width = 401
      Height = 33
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      TabOrder = 3
      OnClick = saveButtonClick
    end
    object connectorTypeComboBox: TComboBox
      Left = 208
      Top = 168
      Width = 401
      Height = 28
      ItemIndex = 1
      TabOrder = 4
      Text = #1042#1086#1083#1085#1086#1074#1086#1076
      Items.Strings = (
        #1050#1086#1072#1082#1089#1080#1072#1083
        #1042#1086#1083#1085#1086#1074#1086#1076)
    end
    object startFreqEdit: TEdit
      Left = 231
      Top = 224
      Width = 130
      Height = 28
      TabOrder = 5
      Text = '118.1'
    end
    object stopFreqEdit: TEdit
      Left = 416
      Top = 224
      Width = 153
      Height = 28
      TabOrder = 6
      Text = '178.3'
    end
    object commentMemo: TMemo
      Left = 208
      Top = 280
      Width = 401
      Height = 129
      Lines.Strings = (
        '')
      TabOrder = 7
    end
  end
end
