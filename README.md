# Ambient_Wio_LTE_lib

[Ambient](https://ambidata.io)はIoTクラウドサービスです。 マイコンから送られたデーターを受信し、蓄積し、可視化(グラフ化)します。

![Ambient structure](https://ambidata.io/wp/wp-content/uploads/2016/09/AmbientStructure.jpg)

Ambientにユーザー登録(無料)し、マイコンからデーターを送ると、こんな感じでグラフ表示させることができます。

![Ambient chart](https://ambidata.io/wp/wp-content/uploads/2016/09/fig3-1024x651.jpg)

ここではArduino ESP8266用のライブラリーとサンプルを示しています。サンプルには次のプログラムがあります。

* サンプル(examples/Ambient_Wio_LTE): カウンタ値をAmbientに送信する。
* Grove 温湿度センサー(examples/Ambient_Wio_LTE-grove-sensor): Grove 温湿度センサーから取得した温度、湿度の値をAmbientに送信する。

## 材料

* Ambient.h: Ambient用のヘッダーファイル
* Ambient.cpp: Ambientライブラリーのソースファイル
* examples/Ambient_Wio_LTE: サンプルのソースファイル
* examples/Ambient_Wio_LTE-grove-sensor: Grove 温湿度センサーのソースファイル
