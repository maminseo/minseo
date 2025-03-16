import openai

openai.api_key = "YOUR_OPENAI_API_KEY"

def get_love_advice(user_input):
    response = openai.ChatCompletion.create(
        model="gpt-4",
        messages=[{"role": "system", "content": "당신은 연애 상담 전문가입니다."},
                  {"role": "user", "content": user_input}]
    )
    return response["choices"][0]["message"]["content"]

user_message = input("연애 고민을 입력하세요: ")
print("AI 카운셀러:", get_love_advice(user_message))
