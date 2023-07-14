const {SerialPort} = require ('serialport');
const esp32 = new SerialPort({path:'COM4', baudRate: 115200});
let magnitudePWM = 0;

function enviarPWM()
{
    esp32.write('231902290')

}

setInterval(enviarPWM, 2000);