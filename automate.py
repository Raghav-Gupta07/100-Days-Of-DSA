import requests
from bs4 import BeautifulSoup

base_url = "https://100-days-of-dsa.vercel.app/day-{}"

for day in range(5, 61):
    url = base_url.format(day)
    
    try:
        res = requests.get(url)
        soup = BeautifulSoup(res.text, "html.parser")

        code_block = soup.find("code")
        
        if code_block:
            code = code_block.text
            
            with open(f"Day{day}a.c", "w", encoding="utf-8") as f:
                f.write(code)
            
            print(f"Saved Day{day}a.c")
        else:
            print(f"No code found for Day {day}")

    except Exception as e:
        print(f"Error Day {day}: {e}")