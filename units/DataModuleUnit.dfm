object DataModule1: TDataModule1
  OldCreateOrder = False
  Height = 512
  Width = 804
  object AttenuatorsverificatorConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=AttenuatorsVerificator')
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    LoginPrompt = False
    Left = 338
    Top = 27
  end
  object TypesTable: TFDQuery
    Connection = AttenuatorsverificatorConnection
    SQL.Strings = (
      'SELECT * FROM types')
    Left = 338
    Top = 83
    object TypesTableid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
    end
    object TypesTablename: TWideMemoField
      FieldName = 'name'
      Origin = 'name'
      BlobType = ftWideMemo
    end
    object TypesTabledesignation: TWideMemoField
      FieldName = 'designation'
      Origin = 'designation'
      BlobType = ftWideMemo
    end
    object TypesTableregistryNumber: TWideMemoField
      FieldName = 'registryNumber'
      Origin = 'registryNumber'
      BlobType = ftWideMemo
    end
    object TypesTableconnectorTYpe: TWideMemoField
      FieldName = 'connectorTYpe'
      Origin = 'connectorTYpe'
      BlobType = ftWideMemo
    end
    object TypesTablestartFreq: TFloatField
      FieldName = 'startFreq'
      Origin = 'startFreq'
    end
    object TypesTablestopFreq: TFloatField
      FieldName = 'stopFreq'
      Origin = 'stopFreq'
    end
    object TypesTablecomment: TWideMemoField
      FieldName = 'comment'
      Origin = 'comment'
      BlobType = ftWideMemo
    end
  end
  object FDPhysSQLiteDriverLink1: TFDPhysSQLiteDriverLink
    Left = 336
    Top = 144
  end
end
