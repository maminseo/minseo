from setuptools import setup

with open('README.md', encoding='utf-8') as f: # README.md 내용 읽어오기
	  long_description = f.read()

setup(
	name='min1129', #module 이름
	version='0.0.0.1', # 버전 등록
	long_description    = long_description, # readme.md 등록
	long_description_content_type = 'text/markdown',  # readme.md 포맷
	description='hello world 패키지이다.', # 패키지 설명
	author='maminseo', # 참여자 등록
	author_email='', # 이메일 등록
	url='', # url 등록
	license='MIT', # 라이센스 등록
	python_requires='>=3.4', #파이썬 버전 등록
	install_requires=[ 'boto3', 'pymongo'], 
	packages=['min1129']
)