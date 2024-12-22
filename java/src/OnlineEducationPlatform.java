import java.util.ArrayList;
import java.util.List;

interface Enrollable {
	void enrollStudent(String studentName);
	void showEnrolledStudents();
}

abstract class Course {
	String courseName;
	String instructor;
	List<String> enrolledStudents;
	List<Integer> ratings;
	
	Course(String courseName, String instructor)
	{
		this.courseName = courseName;
		this.instructor = instructor;
		
		enrolledStudents = new ArrayList<String>();
		ratings = new ArrayList<Integer>();
	}
	
	void showCourseDetails()
	{
		System.out.println("강의 이름: " + this.courseName);
		System.out.println("강사 : " + instructor);		
	}
	void rateCourse(int rating)
	{
		ratings.add(rating);
		System.out.printf("%s 강의를 %d점으로 평가했습니다.\n",  courseName, rating);
	}
	double averageRating()
	{
		double avgRating = 0.0;
		if(ratings.size() == 0) // 평점이 하나도 없는 경우(isEmpty())
		{
			return avgRating;
		}
		else
		{
			for(int r : ratings)
			{
				avgRating += r;
			}
			return avgRating / ratings.size();
		}
	}
	abstract void startCourse();
	abstract void issueCertificate(String studentName);
}

class VideoCourse extends Course implements Enrollable {
	List<Boolean> progress;
	
	VideoCourse(String courseName, String instructor)
	{
		super(courseName, instructor);
		progress = new ArrayList<Boolean>();
	}
	
	@Override
	public void enrollStudent(String studentName) {
		enrolledStudents.add(studentName); // Course 클래스에서 선언된 변수
		progress.add(false);               // VideoCourse 클래스에서 선언된 변수
		System.out.println(studentName + "님이 동영상 강의에 등록되었습니다.");
	}

	@Override
	public void showEnrolledStudents() {
		System.out.println(courseName + "에 등록된 학생들:");
		for(String s : enrolledStudents)
		{
			System.out.println("- " + s);
		}			
	}

	@Override
	void startCourse() {
		System.out.println("동영상 강의가 시작되었습니다.");
	}

	@Override
	void issueCertificate(String studentName) {
		// enrolledStudents : 수강생 (같은 인덱스)
		// progress : 수료정보 (같은 인덱스)
		int idx = enrolledStudents.indexOf(studentName);
		if(progress.get(idx))
		{
			System.out.println(studentName + "님이 강의를 완료하고 수료증을 받았습니다.");
		}
		else
		{
			System.out.println(studentName + "님은 강의를 완료하지 않았습니다.");
		}
	}
	
	void markAsCompleted(String studentName) {
		int idx = enrolledStudents.indexOf(studentName);
		progress.set(idx, true);
	}
}

class QuizCourse extends Course implements Enrollable {
	List<Boolean> quizCompletion;
	
	QuizCourse(String courseName, String instructor){
		super(courseName, instructor);
		quizCompletion = new ArrayList<Boolean>();
	}
	
	@Override
	public void enrollStudent(String studentName) {
		enrolledStudents.add(studentName);
		quizCompletion.add(false);               
		System.out.println(studentName + "님이 퀴즈 강의에 등록되었습니다.");
	}

	@Override
	public void showEnrolledStudents() {
		System.out.println(courseName + "에 등록된 학생들:");
		for(String s : enrolledStudents)
		{
			System.out.println("- " + s);
		}	
	}

	@Override
	void startCourse() {
		System.out.println("퀴즈 강의가 시작되었습니다.");
	}

	@Override
	void issueCertificate(String studentName) {
		int idx = enrolledStudents.indexOf(studentName);
		if(quizCompletion.get(idx))
		{
			System.out.println(studentName + "님이 강의를 완료하고 수료증을 받았습니다.");
		}
		else
		{
			System.out.println(studentName + "님은 강의를 완료하지 않았습니다.");
		}
	}
	
	void markQuizCompleted(String studentName)
	{
		int idx = enrolledStudents.indexOf(studentName);
		quizCompletion.set(idx, true);
	}	
}




public class OnlineEducationPlatform {
	public static void main(String[] args) {
		// VideoCourse 객체 생성
		VideoCourse videoCourse = new VideoCourse("Java 프로그래밍", "홍동진");
		videoCourse.showCourseDetails();
		videoCourse.startCourse();
		videoCourse.enrollStudent("최경숙");
		videoCourse.enrollStudent("김민교");
		videoCourse.markAsCompleted("최경숙"); // 최경숙은 강의를 완료
		videoCourse.showEnrolledStudents();
		videoCourse.issueCertificate("최경숙"); // 최경숙은 수료증을 받음
		videoCourse.rateCourse(5); // 강의를 평가
		System.out.println("평균 평가 점수: " + videoCourse.averageRating() + "점.\n");
		System.out.println();
		
		// QuizCourse 객체 생성
		QuizCourse quizCourse = new QuizCourse("자바 퀴즈", "김동진");
		quizCourse.showCourseDetails();
		quizCourse.startCourse();
		quizCourse.enrollStudent("정다훈");
		quizCourse.enrollStudent("이옥자");
		quizCourse.markQuizCompleted("정다훈"); // 정다훈은 퀴즈를 완료
		quizCourse.showEnrolledStudents();
		quizCourse.issueCertificate("정다훈"); // 정다훈은 수료증을 받음
		quizCourse.rateCourse(4); // 강의를 평가
		System.out.println("평균 평가 점수: " + quizCourse.averageRating() + "점.");
	}
}
