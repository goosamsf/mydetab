### Program Name : detab

#### Things that you want to learn from this program:
  1. Usage of getchar and putchar
  2. How to write Makefile and the testing mechanism in Makefile

---

비록 README.md 라는 파일이 나의 배움의 공간을 위해 존재하는 것은 아니지만
난 이공간을 통해 내가 배워야할거리들에 대한 질문을 던져봄으로써
알아가야할것들을 알아보고자한다.

1. getchar 와 putchar의 사용법
 
  (1) getchar에 대하여
  - getchar의 정의에 대해 먼저 알아보자
  - man page 는 다음과 같이 정의하고 있다. 일단 getchar는 fgetc와 동일한
    기능을 제공하며 단지 인라인 매크로이다 라고 하고있으니 fgetc에
    적어져있는 내용을 둘러보기로하자. 
   
  > The fgetc() function obtains the next input character (if present) from
  > the stream pointed at by stream.
  > 다음은 리턴값에 대한내용이다.
  > "Character values are returned as an unsigned char converted to an int.
  > If the stream is at end-of-file or read error occurs, the routines
  > return EOF"
  
  - int fgetc(FILE \*stream)
  - 이 함수의 sysnopsis를 먼저 살펴보자. 일단 이 함수는 int를 반환한다.
    그리고 FILE 이라고 정의된 구조체를 가리키는 포인터 stream을 인수로 받는다.
  - 위의 사실과 함께 Description을 읽어보면 다음을 알수있다. fgetc는
    stream이라는 포인터가 가리키는 어떤 스트림의 다음 케릭터를 얻어낸다.
    리턴값의 경우, 성공시, 포인터가 가리키는 케릭터값을 unsigned int 로 
    변환하여 리턴해낸다.
    그리고 포인터가 스트림의 끝을 가리키거나 읽기 작업중 에러가 발생한다면,
    함수는 EOF 라고 정의된값이 반환된다.
  - 이쯤 읽었을때 스트림이 무엇인지 궁금할것이다. C언어에서 그리고
    일반적인 프로그래밍 환경에서 스트림이란 입력과 출력의 소스(원천)이다.
    즉 데이터이다. 이 함수의 관점에서 볼때, 어떠한 데이터가 있고 그
    데이터를 stream이라는 포인터가 가리키고 있는것이며, 이 함수가
    호출될때마다 포인터는 다음 케릭터를 가리키게되고 getchar는 그 포인터가
    가리키고 있는 값을 unsigned int로 변환하여 리턴하게되는것이다. 
  - 그래서 그런지, getchar는 loop과 함께 사용되기 마련이다. char를
    반환하는 함수이지만, 결국 입력받은 데이터가 무엇인지 알아야되기
    때문이다. 즉 loop을 통해getchar 가 eof값을 반환하는지 점검해가며
    입력받은 데이터를 캐릭터단위로 끝까지 읽어내는 것이다.
    
  (2) putchar에 대하여
  - putchar에 대한 설명은 putc와 동일하지만 명시된 값을 stdout에
    쓰는것이라고 되어있다. 즉 터미널 화면에 바로 써준다는 것.
  - 그렇다면 fputc(int c, FILE \*stream)는 getchar을 학습한 상태라면 더
    이해가 쉬울것이다. getchar가 포인터가 가리키는 겂을 읽어내는것이였다면,
    fputc는 명시된 값을 포인터가 가리키고 있는곳에 "쓰는" 것이다.

---

2. Makefile에 대하여
  - Makefile이 무엇인가?
    - Makefile 이 무엇인지 정의하려면 일단 Make이 무엇인지가 정의되어야
      할것 같다. Make을 정확히 정의하려면 그 양이 방대하겠지만, 간단하게
      내가 가진 얕은 지식선에서 정의를 해보자면 다음과 같다.
    - 리눅스 환경에서 소스코드를 컴파일 할땐, gcc라는 명령어와 함께 컴파일
      되어야할 소스코드들을 나열해줌으로써 컴파일시키는데, 프로그램이
      커짐에 따라 소스코드 파일들의 갯수도 늘어날것이고, 컴파일 과정이
      복잡해지게 된다.
    - 이 때 아주 유용하게 사용될수 있는것이 Make이라는 프로그램이다. Make은
      Makefile에 정의된 소스코드를 컴파일링 시키는 명령어나 일부 다른 shell
      script들을 execute 할수있게 해준다. 
      
    - 자세한 내용은 예제 Makefile을 보면서 더 배워나가는 것을 추천한다.

---
    
  




