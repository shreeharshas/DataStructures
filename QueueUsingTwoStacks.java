import java.util.Stack;

/**
 * @author ShreeHarsha
 *
 */
public class QueueUsingTwoStacks {

	/**
	 * private variables
	 */
	private Stack s1, s2;
	private Integer count;
	
	public queueUsingTwoStacks() {
		this.s1 = new Stack();
		this.s2 = new Stack();
		this.count = new Integer(0);
	}

	public int size(){
		return this.count.intValue();
	}
	
	public void append(int x){
		if(s2.isEmpty()){
			this.s1.push(new Integer(x));
		}
		else{
			while(!this.s2.isEmpty()){//for(int i=0;i<s2.size(); i++)
				s1.push(s2.pop());
			}
			s1.push(new Integer(x));
		}
		int z = this.count.intValue();
		this.count = new Integer(++z);
	}

	public Integer extract(){
		int z = this.count.intValue();
		this.count = new Integer(--z);
		if(!this.s1.isEmpty()){
			while(!this.s1.isEmpty()){
				s2.push(s1.pop());
			}
			Integer temp = (Integer) s2.pop();
			return temp;
			//return (Integer)this.s2.pop();
		}
		else{
			if(this.s2.size()>0){
				Integer temp = (Integer) this.s2.pop();
				return temp;
			}
			return null;
		}
		/*return null;*/
	}
	
	private void disp(){
		if(s2.isEmpty()){
			System.out.println("Queue Empty");
		}
		else{
			Stack tempDisplay = new Stack();
			while(!this.s2.isEmpty()){
				Integer intg = (Integer)s2.pop();
				System.out.println(intg);
				tempDisplay.push(intg);
				s1.push(intg);
			}
		}
	}
	
	public void display(){
		System.out.println("Size: " + this.size()+"\nContents:");
		if(this.s1.isEmpty())
			this.disp();
		
		else{
			while(!this.s1.isEmpty()){
				s2.push(s1.pop());
			}
			this.disp();
		}
		System.out.println("");
	}
	
	/**
	 * program start
	 */
	public static void main(String[] args) {
		queueUsingTwoStacks q = new queueUsingTwoStacks();
		q.append(10);
		q.append(14);
		q.append(13);
		q.append(1700);
		q.append(1650);
		q.append(67);
		q.append(99);
		q.append(787);
		q.append(-456);
		
		q.display();
		
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		System.out.println(q.extract());
		
		
		q.append(77777);
		q.append(88888);
		q.display();
		
		q.extract();
		q.display();
		q.extract();
		q.display();
	}
}
