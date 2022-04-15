#ifndef __WALKFASTER_OS_API_H__
#define __WALKFASTER_OS_API_H__

#define WF_RET_OK 0
#define WF_RET_FAIL -1

/** FILE IO **/
int wf_open(const char *file, int option, int *fdesc);
int wf_close(int fdesc);
int wf_read(int fdesc, void *buf, size_t nsize, size_t *nread);
int wf_write(int fdesc, void *buf, size_t nsize, size_t *nwrite);
int wf_lseek(int fdesc, off_t offset, int whence);

/** Thread **/
int wf_task_create(void *(*start_routine)(void *),void *restrict arg, void *task_id, const void *attr);
int wf_task_wait_exit(void *task_id, void **retval);
int wf_task_detach(void *task_id);
int wf_task_exit(void *retval);


#endif
