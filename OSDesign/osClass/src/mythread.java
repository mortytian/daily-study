public class mythread {
    private final static String LOCK = "lock";
    private int count = 0;
    private int limit = 100;

    public static void main(String[] args) {
        mythread mythread = new mythread();
        for (int i = 1; i < 5; i++){
            new Thread(mythread.new Producer(),"生产者-"+i ).start();
            new Thread(mythread.new Consumer(),"消费者-"+i ).start();


        }
    }


    class Producer implements Runnable {

        @Override
        public void run() {
            produce();
        }

        public  void produce() {

            while (true) {

                try {
                    Thread.sleep(300);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                synchronized (LOCK) {
                    try {
                        while (count > limit-1){
                            LOCK.wait();
                        }
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }

                    count += 1;
                    System.out.println( Thread.currentThread().getName() + "生产了1个资源,总共有" + count + "个资源。");
                    LOCK.notifyAll();
                }
            }
        }
    }

    class Consumer implements Runnable {

        @Override
        public void run() {
            consume();
        }

        public void consume() {
            while (true) {
                try {
                    Thread.sleep(300);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                synchronized (LOCK) {

                    try {
                        Thread.sleep(3);
                        while (count < 1) {
                            LOCK.wait();
                        }
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    count -= 1;
                    System.out.println(Thread.currentThread().getName() + "消耗了1个资源,总共有" + count + "个资源。");
                    LOCK.notifyAll();
                }
            }
        }
    }
}