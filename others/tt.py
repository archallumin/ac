import string
import random
for i in range(10):
  _LENGTH: int = random.randint(5, 5)
  exam_string: str = string.digits
  result: str = ''.join(random.choices(exam_string,k=_LENGTH))
  print(result)