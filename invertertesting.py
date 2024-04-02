import time
import can

torque = 0
        
while True:
    user_input = input("Enter desired torque (0-3276.7 N-m): ")
        
    try:
        torque = int(user_input)
        if 0 <= torque <= 3276.7:
            print ("Torque: ", torque)
        else:
            print("Invalid input. Value must be between 0 and 3276.7.")
            break
    except ValueError:
        print("Invalid input. Please enter a number.")
        break
    torque = torque*10
    x = torque // 256   
    y = torque % 256  
    print("Byte 0:", x , " Byte 1:", y)
    msg = can.Message(arbitration_id = 0x0C0,
                      data = [x, y, 0, 0, 0, 0, 0, 0],
                      is_extended_id = False)
    print(msg)
    time.sleep(0.5)
    

    



