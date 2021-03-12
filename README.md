# 패스트캠퍼스와 함께하는 알고리즘 공부
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
  