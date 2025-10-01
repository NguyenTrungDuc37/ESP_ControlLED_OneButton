## PROJECT_1 : PRJ1_PushBTN ##
## Bài toán
**Phần cứng:**  
- 1 nút bấm nhả (push button)  
- 1 đèn LED hiển thị tích hợp sẵn trên các dev board điển hình  

**Yêu cầu:**  
- Bấm nút **một lần (single click)** → LED bật/tắt (đảo trạng thái).  
- Nhấn giữ **>2 giây (hold)** → LED chuyển sang trạng thái nhấp nháy liên tục (blink 200ms một lần).  
- Nếu tiếp tục nhấn **single click** → LED quay lại trạng thái bật/tắt bình thường.  
- **Lưu ý:** Có khử rung phím bấm (debounce). 
## Mục đích DEMO
Project này sử dụng thư viện mã mở **OneButton**:
- [OneButton](https://github.com/mathertel/OneButton) của tác giả *Matthias Hertel*.  
Việc gom các chức năng đọc phím bấm và điều khiển LED như trên vào thư viện giúp:  
- Tái sử dụng dễ dàng trong nhiều project vi điều khiển khác nhau.  
- Mã nguồn gọn gàng, dễ hiểu, dễ bảo trì.  

Project cũng minh họa điểm mạnh của **PlatformIO (PIO)** là có thể dùng chung mã nguồn cho nhiều nền tảng phần cứng:  
- ESP32 (kiến trúc Xtensa lõi kép)  
- ESP32-C3 (kiến trúc RISC-V lõi đơn)  


## PROJECT_2 : PRJ2_PushBTN ##
## Bài toán
**Phần cứng:**  
- 1 nút bấm nhả (push button)  
- 1 đèn LED hiển thị tích hợp sẵn trên các dev board điển hình
- 1 đèn LED nối chân GPIO bên ngoài
  
**Yêu cầu:**  
- Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
- Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)
- Khi giữ nút nhấn sẽ làm cái LED đang được điều khiển nhấp nháy 200ms một lần. 
