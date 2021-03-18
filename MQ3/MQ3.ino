
//
// MQ3：酒精傳感器
//
// int TIME_UNTIL_WARMUP = 900;
//無符號的很長一段時間；
國際鋁業公司
無效 設置（）{
  序列號。開始（115200）;
  pinMode（A3，INPUT）;

  //將MQ-3預熱15分鐘
  //時間= millis（）/ 1000;
  // while（時間<= TIME_UNTIL_WARMUP）;
  
  //預熱MQ-3直到讀數<600
  而（analogRead（A3）> 600）;
}

無效 循環（）{
  alco = AnalogRead（A3）;
  序列號。println（alco）;
  延遲（100）;
  }
