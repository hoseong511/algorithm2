[패스트캠퍼스 알고리즘](https://fastcampus.co.kr/dev_online_algo)

## **개발환경**
- pyCharm 이용한 가상환경 -> jupyterlab설치
    ```
    pip install jupyterlab # 아나콘다 설치 대신 jupyterlab만 이용하기
    jupyter lab # 실행 명령어
    ```
  <p align="center">
    <img src="https://user-images.githubusercontent.com/62678380/109888251-8617af00-7cc6-11eb-94d9-7c2fdc154299.png" width="500"/>
  </p>

- pip 패키지 관리
    - 현재 설치되어있는 패키지 정보를 저장하기
    ```
    pip freeze > version.txt # version.txt라는 파일에 버전정보를 기록함
    pip uninstall -r version.txt -y # 모든 패키지를 삭제함
    ```
    - **컴포넌트 > 라이브러리 > 패키지 > 모듈**
- VS code input/output
  1. Python 플러그인을 추가해줍니다. (디버그 모드를 이용하려면 필요합니다)   
    1.1 플러그인을 설치가 완료되면 
  2. 실행 및 디버그를 눌러줍니다.
  3. launch.json 파일만들기를 수행 후 ```args```를 추가해주면 됩니다.
      ```json
        {
          // IntelliSense를 사용하여 가능한 특성에 대해 알아보세요.
          // 기존 특성에 대한 설명을 보려면 가리킵니다.
          // 자세한 내용을 보려면 https://go.microsoft.com/fwlink/?linkid=830387을(를) 방문하세요.
          "version": "0.2.0",
          "configurations": [{
            "name": "Python: Current File",
            "type": "python",
            "request": "launch",
            "program": "${file}",
            "console": "integratedTerminal",
            "args": ["<", "input.txt", ">", "output.txt"]
          }]
        }
      ```
  4. 완료   
       <img width="1285" alt="스크린샷 2021-06-07 오전 1 21 49" src="https://user-images.githubusercontent.com/62678380/120931946-bd1ab800-c72e-11eb-82c9-d65aebf927db.png">   
       control + f5   
        ![ScreenRecorderProject5_2](https://user-images.githubusercontent.com/62678380/120931861-55fd0380-c72e-11eb-9629-bbaa74260461.gif)

### Queue
### Stack
### LinkedList
- node(data+pointer)
  - data  
  - pointer는 노드 안에서 다음이나 이전의 노드와의 연결 정보를 갖고있음
- node의 주소를 구하는 법, 데이터와 pointer를 붙이는 법
  - 객체를 이용해서 데이터와 pointer를 붙이기
    ```python
    class Node:
      def __init__(self, data, next=None):
        self.data = data
        self.next = next
        
    node1 = Node(1) # 노드객체생성
    node2 = Node(2)
    node1.next = node2
    node1 = head # 첫 노드를 head로 관리
    ```    
  - 현재 노드의 주소정보와 데이터, 포인터(다음주소)
  <p align="center"><img src="https://user-images.githubusercontent.com/62678380/110879947-3158e180-8321-11eb-8076-834580380419.png">
    </p>
  
  - 자료 구조 해쉬 테이블의 장단점과 주요 용도
    장점: 데이터 저장/읽기가 빠르다 