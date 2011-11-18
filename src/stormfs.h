#ifndef stormfs_H
#define stormfs_H

#define FIVE_GB 5368709120LL

static int stormfs_create(const char *path, mode_t mode, struct fuse_file_info *fi);
static int stormfs_chmod(const char *path, mode_t mode);
static int stormfs_chown(const char *path, uid_t uid, gid_t gid);
static void stormfs_destroy(void *data);
static int stormfs_flush(const char *path, struct fuse_file_info *fi);
static int stormfs_getattr(const char *path, struct stat *stbuf);
static void *stormfs_init(struct fuse_conn_info *conn);
static int stormfs_mkdir(const char *path, mode_t mode);
static int stormfs_mknod(const char *path, mode_t mode, dev_t rdev);
static int stormfs_open(const char *path, struct fuse_file_info *fi);
static int stormfs_read(const char *path, char *buf, size_t size, off_t offset,
                        struct fuse_file_info *fi);
static int stormfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler, 
                           off_t offset, struct fuse_file_info *fi);
static int stormfs_readlink(const char *path, char *buf, size_t size);
static int stormfs_rmdir(const char *path);
static int stormfs_release(const char *path, struct fuse_file_info *fi);
static int stormfs_rename(const char *from, const char *to);
static int stormfs_rename_file(const char *from, const char *to);
static int stormfs_rename_directory(const char *from, const char *to);
static int stormfs_truncate(const char *path, off_t size);
static int stormfs_symlink(const char *from, const char *to);
static int stormfs_unlink(const char *path);
static int stormfs_utimens(const char *path, const struct timespec ts[2]);
static int stormfs_write(const char *path, const char *buf, 
                         size_t size, off_t offset, struct fuse_file_info *fi);

char *stormfs_virtual_url(char *url, char *bucket);
static int stormfs_opt_proc(void *data, const char *arg, int key,
                            struct fuse_args *outargs);
static int stormfs_fuse_main(struct fuse_args *args);

#endif // stormfs_H
