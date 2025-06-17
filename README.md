# Moon Hotel Management System

Moon Hotel Management System is a simple C++ console application that simulates basic hotel management operations. It allows administrators to log in and perform core functions such as viewing available rooms, booking rooms, displaying booked rooms, and printing bills.

## 💻 Features

- **Admin Login**
  - Secure login using hardcoded credentials (`admin/admin`).
- **Room Availability Check**
  - Displays types of rooms along with prices.
- **Book a Room**
  - Enter room number, customer name, check-in and check-out dates.
  - Saves booking information to `Booking.txt`.
- **Display Booked Rooms**
  - Reads and displays saved booking information from `Booking.txt`.
- **Print Bill**
  - Calculates total bill based on the number of nights and price per night.
  - Accepts payment and calculates balance.
- **Exit**

## 📂 File Structure

- `Moon Hottel Management System.cpp` – Main source code file.
- `Moon Hottel Management System.exe` – Compiled executable for Windows.
- `Booking.txt` – Stores booking records created by the system.

## 🛠️ How to Run

### Option 1: Compile and Run (Using g++)
```bash
g++ "Moon Hottel Management System.cpp" -o HotelSystem
./HotelSystem
