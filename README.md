# FarmPlot
คือ ระบบดูแลแปลงผักด้วยเทคโนโลยีระบบอัตโนมัติที่เชื่อมต่อระบบอินเตอร์เน็ตไร้สาย เพื่อการตั้งค่าระบบรดน้ำอัติโนมัติตามเวลาและ ตำแหน่งที่ต้องการในทุกๆวัน รวมถึงสามารถตรวจสอบ อุณหภูมิ ความชื้นในอากาศ และปริมาณน้ำภายในถังเก็บน้ำที่คงเหลืออยู่ ได้ตลอดเวลา

## ที่มาและความสำคัญ
ในการดูแลระบบแปลงปลูกพืชผักทางการเกษตรเพื่อนำผลผลิตมาใช้ในครัวเรือนหรือเพื่อการค้าขายทำธุรกิจพบว่าในการดูแลแปลงผักนั้นมักจะพบปัญหาในการที่จะต้องคอยติดตามดูแลพืชผักอยู่ในสถานที่โรงเรือนหรือแปลงผักตลอดเวลาเนื่องจากต้นไม้และพืชต่างๆต้องการน้ำ ซึ่งน้ำเป็นปัจจัยที่สำคัญต่อการเจริญเติบโตของพืช โดยถ้าพืชนั้นได้รับน้ำมาเกินไปก็จะทำให้พืชนั้นตายได้หรือถ้าหากพืชนั้นได้รับน้ำที่น้อยเกินไปก็จะทำให้พืชนั้นไม่เจริญเติบโตทำให้เกิดความไม่สะดวกในการดูแลแปลงผักเมื่อมีเหตุจำเป็นที่ต้องละการดูแลในสถานที่นั้นแล้วออกไปทำอย่างอื่น 

ด้วยเหตุนี้และในปัจจุบันสภาพแวดล้อมอันประกอบด้วยสรรพสิ่งที่สามารถสื่อสารและเชื่อมต่อกันได้ผ่านโพรโทคอลการสื่อสารทั้งแบบใช้สายและไร้สาย ทำให้ทางผู้จัดทำได้เล็งเห็นการประยุกต์ใช้ การควบคุมระบบด้วย Microcontroller ร่วมกับ Smartphone Application และระบบอินเตอร์เน็ต โดยนำมาประมวลผล สั่งการให้มีการรดน้ำต้นไม้ในทุกๆวันตามการตั้งค่าของผู้ใช้งาน และสามารถสตรวจสอบอุณหภูมิ ความชื้นสัมพันธ์ในอากาศ และระดับน้ำภายในถังเก็บน้ำได้ตลอดเวลา

## กลุ่มเป้าหมาย
+ เกษตรกรยุคใหม่ที่ต้องการเพิ่มรายได้
+ เกษตรกรที่มีความต้องการใช้ระบบอัตโนมัติร่วมกับระบบอินเตอร์เน็ตเพื่อดูแลแปลงผัก
+ บุคคลทั่วไปที่ต้องการระบบช่วยดูแลแปลงผักสำหรับพืชผักสวนครัวภายในบ้าน

## รายละเอียดโปรเจค 

### Perception Module
- Digital Temperature & Humidity Sensor
- Water Level Sensor
- Soil Moisture Sensor

### Behavior (Blynk App) *ถ้ามี
1. ตั้งเวลารดน้ำต้นไม้
2. กดเลือกตำแหน่งที่ต้องการให้รดน้ำในแอพ

### Behavior
1. อ่านค่า อุณหภูมิ ความชื้นในดิน ระดับน้ำจากเซ็นเซอร์ และส่งไปยัง Server
2. รับข้อมูลเวลารดน้ำ และตำแหน่งที่ต้องการรดน้ำ
3. รดน้ำทุกตำแหน่ง ให้มีความชื้นในดินจะเพียงพอ

### Manipulation Module
- LCD I2C Display
- Stepper Motor + Driver 3 ชุด
- Relay + Brushless Submersible Pumps

### โครงสร้างพื้นฐาน
![diagram picture][diagram]

[diagram]: https://github.com/ruangrith-ri/FarmPlot/blob/master/image/flowchart.jpg "Diagram"

### ระบบการทำงาน 
![flowchart picture][flowchart]

[flowchart]: https://github.com/ruangrith-ri/FarmPlot/blob/master/image/diagram.jpg "flowchart"
