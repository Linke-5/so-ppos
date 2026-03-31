// GRR20242288 Eduardo Munaretto Majczak
// GRR20242306 João Pedro Oliveira Lazari
// GRR20206889 Daniel Henrique Vieira
// PingPongOS - PingPong Operating System

// Este arquivo PODE/DEVE ser alterado.

// Dispatcher: gerencia os estados das tarefas.

#include <stdio.h>

#include "task.h"

void user_main(void *arg);



void dispatcher_init() {
}

void dispatcher() {
    struct task_t * task_user;

    task_user = task_create("user", user_main, 0);
    task_switch(task_user);
    task_destroy(task_user->task_pai);
    task_destroy(task_user);
}
