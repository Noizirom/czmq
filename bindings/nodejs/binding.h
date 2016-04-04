/*  =========================================================================
    CZMQ Node.js binding header file

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef CZMQ_BINDING_H_INCLUDED
#define CZMQ_BINDING_H_INCLUDED

#define CZMQ_BUILD_DRAFT_API

#include "czmq.h"
#include "nan.h"

using namespace v8;
using namespace Nan;

class Zarmour: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zarmour (void);
        explicit Zarmour (zarmour_t *self);
        zarmour_t *self;
    private:
        ~Zarmour ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_encode);
    static NAN_METHOD (_decode);
    static NAN_METHOD (_mode);
    static NAN_METHOD (_mode_str);
    static NAN_METHOD (_pad);
    static NAN_METHOD (_pad_char);
    static NAN_METHOD (_line_breaks);
    static NAN_METHOD (_line_length);
};

class Zcert: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zcert (void);
        explicit Zcert (zcert_t *self);
        zcert_t *self;
    private:
        ~Zcert ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_public_key);
    static NAN_METHOD (_secret_key);
    static NAN_METHOD (_public_txt);
    static NAN_METHOD (_secret_txt);
    static NAN_METHOD (_meta);
    static NAN_METHOD (_meta_keys);
    static NAN_METHOD (_save);
    static NAN_METHOD (_save_public);
    static NAN_METHOD (_save_secret);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_eq);
};

class Zcertstore: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zcertstore (const char *location);
        explicit Zcertstore (zcertstore_t *self);
        zcertstore_t *self;
    private:
        ~Zcertstore ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_lookup);
};

class Zchunk: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zchunk (const void *data, size_t size);
        explicit Zchunk (zchunk_t *self);
        zchunk_t *self;
    private:
        ~Zchunk ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_max_size);
    static NAN_METHOD (_data);
    static NAN_METHOD (_set);
    static NAN_METHOD (_append);
    static NAN_METHOD (_extend);
    static NAN_METHOD (_consume);
    static NAN_METHOD (_exhausted);
    static NAN_METHOD (_slurp);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_strhex);
    static NAN_METHOD (_strdup);
    static NAN_METHOD (_streq);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_unpack);
    static NAN_METHOD (_digest);
};

class Zclock: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zclock ();
    private:
        ~Zclock ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (_time);
    static NAN_METHOD (_mono);
    static NAN_METHOD (_usecs);
    static NAN_METHOD (_timestr);
};

class Zconfig: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zconfig (const char *name, zconfig_t *parent);
        explicit Zconfig (zconfig_t *self);
        zconfig_t *self;
    private:
        ~Zconfig ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_name);
    static NAN_METHOD (_value);
    static NAN_METHOD (_get);
    static NAN_METHOD (_child);
    static NAN_METHOD (_next);
    static NAN_METHOD (_locate);
    static NAN_METHOD (_at_depth);
    static NAN_METHOD (_comments);
    static NAN_METHOD (_save);
    static NAN_METHOD (_savef);
    static NAN_METHOD (_filename);
    static NAN_METHOD (_reload);
    static NAN_METHOD (_chunk_load);
    static NAN_METHOD (_chunk_save);
    static NAN_METHOD (_str_load);
    static NAN_METHOD (_str_save);
    static NAN_METHOD (_has_changed);
};

class Zdigest: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zdigest (void);
        explicit Zdigest (zdigest_t *self);
        zdigest_t *self;
    private:
        ~Zdigest ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_data);
    static NAN_METHOD (_size);
    static NAN_METHOD (_string);
};

class Zdir: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zdir (const char *path, const char *parent);
        explicit Zdir (zdir_t *self);
        zdir_t *self;
    private:
        ~Zdir ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_path);
    static NAN_METHOD (_modified);
    static NAN_METHOD (_cursize);
    static NAN_METHOD (_count);
    static NAN_METHOD (_list);
    static NAN_METHOD (_diff);
    static NAN_METHOD (_resync);
    static NAN_METHOD (_cache);
};

class ZdirPatch: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZdirPatch (const char *path, zfile_t *file, int op, const char *alias);
        explicit ZdirPatch (zdir_patch_t *self);
        zdir_patch_t *self;
    private:
        ~ZdirPatch ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_path);
    static NAN_METHOD (_file);
    static NAN_METHOD (_op);
    static NAN_METHOD (_vpath);
    static NAN_METHOD (_digest);
};

class Zfile: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zfile (const char *path, const char *name);
        explicit Zfile (zfile_t *self);
        zfile_t *self;
    private:
        ~Zfile ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_filename);
    static NAN_METHOD (_modified);
    static NAN_METHOD (_cursize);
    static NAN_METHOD (_is_directory);
    static NAN_METHOD (_is_regular);
    static NAN_METHOD (_is_readable);
    static NAN_METHOD (_is_writeable);
    static NAN_METHOD (_is_stable);
    static NAN_METHOD (_has_changed);
    static NAN_METHOD (_input);
    static NAN_METHOD (_output);
    static NAN_METHOD (_read);
    static NAN_METHOD (_eof);
    static NAN_METHOD (_write);
    static NAN_METHOD (_readln);
    static NAN_METHOD (_digest);
};

class Zframe: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zframe (const void *data, size_t size);
        explicit Zframe (zframe_t *self);
        zframe_t *self;
    private:
        ~Zframe ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_data);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_strhex);
    static NAN_METHOD (_strdup);
    static NAN_METHOD (_streq);
    static NAN_METHOD (_more);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_group);
    static NAN_METHOD (_set_group);
    static NAN_METHOD (_eq);
};

class Zhash: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zhash (void);
        explicit Zhash (zhash_t *self);
        zhash_t *self;
    private:
        ~Zhash ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_rename);
    static NAN_METHOD (_size);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_keys);
    static NAN_METHOD (_cursor);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_save);
    static NAN_METHOD (_load);
    static NAN_METHOD (_refresh);
};

class Zhashx: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zhashx (void);
        explicit Zhashx (zhashx_t *self);
        zhashx_t *self;
    private:
        ~Zhashx ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_keys);
    static NAN_METHOD (_values);
    static NAN_METHOD (_save);
    static NAN_METHOD (_load);
    static NAN_METHOD (_refresh);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_dup_v2);
};

class Ziflist: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Ziflist (void);
        explicit Ziflist (ziflist_t *self);
        ziflist_t *self;
    private:
        ~Ziflist ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_first);
    static NAN_METHOD (_next);
    static NAN_METHOD (_address);
    static NAN_METHOD (_broadcast);
    static NAN_METHOD (_netmask);
};

class Zlist: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zlist (void);
        explicit Zlist (zlist_t *self);
        zlist_t *self;
    private:
        ~Zlist ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_size);
};

class Zlistx: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zlistx (void);
        explicit Zlistx (zlistx_t *self);
        zlistx_t *self;
    private:
        ~Zlistx ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_dup);
};

class Zloop: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zloop (void);
        explicit Zloop (zloop_t *self);
        zloop_t *self;
    private:
        ~Zloop ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_timer_end);
    static NAN_METHOD (_start);
};

class Zmsg: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zmsg (void);
        explicit Zmsg (zmsg_t *self);
        zmsg_t *self;
    private:
        ~Zmsg ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_content_size);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_prepend);
    static NAN_METHOD (_append);
    static NAN_METHOD (_pop);
    static NAN_METHOD (_pushstr);
    static NAN_METHOD (_addstr);
    static NAN_METHOD (_pushstrf);
    static NAN_METHOD (_addstrf);
    static NAN_METHOD (_popstr);
    static NAN_METHOD (_addmsg);
    static NAN_METHOD (_popmsg);
    static NAN_METHOD (_first);
    static NAN_METHOD (_next);
    static NAN_METHOD (_last);
    static NAN_METHOD (_encode);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_signal);
};

class Zproc: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zproc ();
    private:
        ~Zproc ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (_czmq_version);
    static NAN_METHOD (_interrupted);
    static NAN_METHOD (_has_curve);
    static NAN_METHOD (_hostname);
    static NAN_METHOD (_biface);
};

class Zsock: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zsock (int type);
        explicit Zsock (zsock_t *self);
        zsock_t *self;
    private:
        ~Zsock ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_bind);
    static NAN_METHOD (_endpoint);
    static NAN_METHOD (_unbind);
    static NAN_METHOD (_connect);
    static NAN_METHOD (_disconnect);
    static NAN_METHOD (_attach);
    static NAN_METHOD (_type_str);
    static NAN_METHOD (_send);
    static NAN_METHOD (_recv);
    static NAN_METHOD (_bsend);
    static NAN_METHOD (_brecv);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_wait);
    static NAN_METHOD (_join);
    static NAN_METHOD (_leave);
    static NAN_METHOD (_heartbeat_ivl);
    static NAN_METHOD (_heartbeat_ttl);
    static NAN_METHOD (_heartbeat_timeout);
    static NAN_METHOD (_use_fd);
    static NAN_METHOD (_tos);
    static NAN_METHOD (_zap_domain);
    static NAN_METHOD (_mechanism);
    static NAN_METHOD (_plain_server);
    static NAN_METHOD (_plain_username);
    static NAN_METHOD (_plain_password);
    static NAN_METHOD (_curve_server);
    static NAN_METHOD (_curve_publickey);
    static NAN_METHOD (_curve_secretkey);
    static NAN_METHOD (_curve_serverkey);
    static NAN_METHOD (_gssapi_server);
    static NAN_METHOD (_gssapi_plaintext);
    static NAN_METHOD (_gssapi_principal);
    static NAN_METHOD (_gssapi_service_principal);
    static NAN_METHOD (_ipv6);
    static NAN_METHOD (_immediate);
    static NAN_METHOD (_ipv4only);
    static NAN_METHOD (_type);
    static NAN_METHOD (_sndhwm);
    static NAN_METHOD (_rcvhwm);
    static NAN_METHOD (_affinity);
    static NAN_METHOD (_identity);
    static NAN_METHOD (_rate);
    static NAN_METHOD (_recovery_ivl);
    static NAN_METHOD (_sndbuf);
    static NAN_METHOD (_rcvbuf);
    static NAN_METHOD (_linger);
    static NAN_METHOD (_reconnect_ivl);
    static NAN_METHOD (_reconnect_ivl_max);
    static NAN_METHOD (_backlog);
    static NAN_METHOD (_maxmsgsize);
    static NAN_METHOD (_multicast_hops);
    static NAN_METHOD (_rcvtimeo);
    static NAN_METHOD (_sndtimeo);
    static NAN_METHOD (_tcp_keepalive);
    static NAN_METHOD (_tcp_keepalive_idle);
    static NAN_METHOD (_tcp_keepalive_cnt);
    static NAN_METHOD (_tcp_keepalive_intvl);
    static NAN_METHOD (_tcp_accept_filter);
    static NAN_METHOD (_rcvmore);
    static NAN_METHOD (_events);
    static NAN_METHOD (_last_endpoint);
};

class Zstr: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zstr ();
    private:
        ~Zstr ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
};

class Ztrie: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Ztrie (char delimiter);
        explicit Ztrie (ztrie_t *self);
        ztrie_t *self;
    private:
        ~Ztrie ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_remove_route);
    static NAN_METHOD (_matches);
    static NAN_METHOD (_hit_parameter_count);
    static NAN_METHOD (_hit_parameters);
    static NAN_METHOD (_hit_asterisk_match);
};

class Zuuid: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zuuid (void);
        explicit Zuuid (zuuid_t *self);
        zuuid_t *self;
    private:
        ~Zuuid ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_set_str);
    static NAN_METHOD (_data);
    static NAN_METHOD (_size);
    static NAN_METHOD (_str);
    static NAN_METHOD (_str_canonical);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_neq);
    static NAN_METHOD (_dup);
};

#endif