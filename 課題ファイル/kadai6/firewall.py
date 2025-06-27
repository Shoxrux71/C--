SAFE_IPS = ["192.168.1.101"]     
BLOCKED_IPS = ["192.168.1.100"]  

def check_access(ip):
    if ip in BLOCKED_IPS:
        return "User block qilindi! Firewall uni to‘sib qo‘ydi."
    elif ip in SAFE_IPS:
        return "Welcome! Firewall ruxsat berdi."
    else:
        return "Noma'lum IP. Iltimos, tizim administratoriga murojaat qiling."

# Foydalanuvchidan IP so‘raymiz
user_ip = input("IP manzilingizni kiriting: ")
natija = check_access(user_ip)
print(natija)
