#ifndef __SYMPHONY_H__
#define __SYMPHONY_H__

struct task_t {
    void *ud;
    void (*task_f)(void *ud);
};

typedef struct task_t task_t;
typedef struct sch
void scheduler_init(int thread_count);
void scheduler_start();
void scheduler_stop();

void scheduler_run(task_t *task);

#endif // __SYMPHONY_H__
