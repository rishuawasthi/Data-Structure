@SpringBootApplication
public class Spring {
    public static void main(String[] args) {
        ApplicationContext context =    SpringApplication.run(Spring.class, args);
        context.getBean(Main.class).main(args);
        ((DefaultListableBeanFactory) context.getAutowireCapableBeanFactory()).getBean(Main.class).main(args);

    }
}