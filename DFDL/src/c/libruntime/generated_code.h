#ifndef GENERATED_CODE_H
#define GENERATED_CODE_H

// auto-maintained by iwyu
// clang-format off
#include <stdbool.h>  // for bool
#include <stddef.h>   // for size_t
#include <stdint.h>   // for uint8_t, int16_t, int32_t, int64_t, uint32_t, int8_t, uint16_t, uint64_t
#include "infoset.h"  // for InfosetBase, HexBinary
// clang-format on

// Define schema version (will be empty if schema did not define any version string)

extern const char *schema_version;

// Define infoset structures

typedef struct recfragment_entry_point_
{
    InfosetBase _base;
    uint8_t     fragmentIndicator;
    uint32_t    dataSize;
} recfragment_entry_point_;

typedef struct authlen_authnone_
{
    InfosetBase _base;
    HexBinary   opaque;
} authlen_authnone_;

typedef struct auth_none_auth_dispatch_opaque_auth_
{
    InfosetBase _base;
    authlen_authnone_ authlen;
} auth_none_auth_dispatch_opaque_auth_;

typedef struct machineName_authunix_
{
    InfosetBase _base;
    HexBinary   strValue;
} machineName_authunix_;

typedef struct auth_unix_auth_dispatch_opaque_auth_
{
    InfosetBase _base;
    uint32_t    authlen;
    uint32_t    stamp;
    machineName_authunix_ machineName;
    uint32_t    uid;
    uint32_t    gid;
    uint32_t    auxGIDElements;
    uint32_t    GIDValues[16];
} auth_unix_auth_dispatch_opaque_auth_;

typedef struct auth_dispatch_opaque_auth_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        auth_none_auth_dispatch_opaque_auth_ auth_none;
        auth_unix_auth_dispatch_opaque_auth_ auth_unix;
    };
} auth_dispatch_opaque_auth_;

typedef struct cred_call_body_
{
    InfosetBase _base;
    uint32_t    auth_type;
    auth_dispatch_opaque_auth_ auth_dispatch;
} cred_call_body_;

typedef struct verf_call_body_
{
    InfosetBase _base;
    uint32_t    auth_type;
    auth_dispatch_opaque_auth_ auth_dispatch;
} verf_call_body_;

typedef struct mountd_null_mountd_
{
    InfosetBase _base;

} mountd_null_mountd_;

typedef struct mountPath_mountd_mt_
{
    InfosetBase _base;
    HexBinary   strValue;
} mountPath_mountd_mt_;

typedef struct mountd_mt_mountd_
{
    InfosetBase _base;
    mountPath_mountd_mt_ mountPath;
} mountd_mt_mountd_;

typedef struct mountd_dump_mountd_
{
    InfosetBase _base;

} mountd_dump_mountd_;

typedef struct unmountPath_mountd_umt_
{
    InfosetBase _base;
    HexBinary   strValue;
} unmountPath_mountd_umt_;

typedef struct mountd_umt_mountd_
{
    InfosetBase _base;
    unmountPath_mountd_umt_ unmountPath;
} mountd_umt_mountd_;

typedef struct mountd_umntall_mountd_
{
    InfosetBase _base;

} mountd_umntall_mountd_;

typedef struct mountd_export_mountd_
{
    InfosetBase _base;

} mountd_export_mountd_;

typedef struct mountd_v3_dispatch_call_dispatch_call_body_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        mountd_null_mountd_ mountd_null;
        mountd_mt_mountd_ mountd_mt;
        mountd_dump_mountd_ mountd_dump;
        mountd_umt_mountd_ mountd_umt;
        mountd_umntall_mountd_ mountd_umntall;
        mountd_export_mountd_ mountd_export;
    };
} mountd_v3_dispatch_call_dispatch_call_body_;

typedef struct v3_dispatch_call_dispatch_call_body_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        mountd_v3_dispatch_call_dispatch_call_body_ mountd;
    };
} v3_dispatch_call_dispatch_call_body_;

typedef struct null_nfsv4_
{
    InfosetBase _base;

} null_nfsv4_;

typedef struct tag_compound_
{
    InfosetBase _base;
    HexBinary   opaque;
} tag_compound_;

typedef struct access_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    check_access;
} access_op_dispatch_nfsv4_ops_;

typedef struct open_stateid_close_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} open_stateid_close_;

typedef struct close_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    seqid;
    open_stateid_close_ open_stateid;
} close_op_dispatch_nfsv4_ops_;

typedef struct commit_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint64_t    offset;
    uint32_t    count;
} commit_op_dispatch_nfsv4_ops_;

typedef struct linkdata_create_dispatch_createtype4_
{
    InfosetBase _base;
    HexBinary   strValue;
} linkdata_create_dispatch_createtype4_;

typedef struct devdata_create_dispatch_createtype4_
{
    InfosetBase _base;
    uint32_t    specdata1;
    uint32_t    specdata2;
} devdata_create_dispatch_createtype4_;

typedef struct create_dispatch_createtype4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        int32_t     createvoid;
        linkdata_create_dispatch_createtype4_ linkdata;
        devdata_create_dispatch_createtype4_ devdata;
    };
} create_dispatch_createtype4_;

typedef struct objtype_create_
{
    InfosetBase _base;
    uint32_t    mode;
    create_dispatch_createtype4_ create_dispatch;
} objtype_create_;

typedef struct objname_create_
{
    InfosetBase _base;
    HexBinary   opaque;
} objname_create_;

typedef struct attr_vals_fattr4_
{
    InfosetBase _base;
    HexBinary   opaque;
} attr_vals_fattr4_;

typedef struct createattrs_create_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} createattrs_create_;

typedef struct create_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    objtype_create_ objtype;
    objname_create_ objname;
    createattrs_create_ createattrs;
} create_op_dispatch_nfsv4_ops_;

typedef struct delegpurge_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} delegpurge_op_dispatch_nfsv4_ops_;

typedef struct delegreturn_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} delegreturn_op_dispatch_nfsv4_ops_;

typedef struct getattr_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attr_request[16];
} getattr_op_dispatch_nfsv4_ops_;

typedef struct getfh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} getfh_op_dispatch_nfsv4_ops_;

typedef struct link_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} link_op_dispatch_nfsv4_ops_;

typedef struct owner_lockt_
{
    InfosetBase _base;
    uint64_t    clientid;
    HexBinary   owner;
    uint8_t     _a_owner[1024];
} owner_lockt_;

typedef struct lockt_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    locktype;
    uint64_t    offset;
    uint64_t    length;
    owner_lockt_ owner;
} lockt_op_dispatch_nfsv4_ops_;

typedef struct lock_stateid_locku_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} lock_stateid_locku_;

typedef struct locku_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    locktype;
    uint32_t    seqid;
    lock_stateid_locku_ lock_stateid;
    uint64_t    offset;
    uint64_t    length;
} locku_op_dispatch_nfsv4_ops_;

typedef struct lock_stateid_exist_lock_owner4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} lock_stateid_exist_lock_owner4_;

typedef struct lock_owner_lock_dispatch_locker4_
{
    InfosetBase _base;
    lock_stateid_exist_lock_owner4_ lock_stateid;
    uint32_t    lock_seqid;
} lock_owner_lock_dispatch_locker4_;

typedef struct open_stateid_open_to_lock_owner4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} open_stateid_open_to_lock_owner4_;

typedef struct lock_owner_open_to_lock_owner4_
{
    InfosetBase _base;
    uint64_t    clientid;
    HexBinary   owner;
    uint8_t     _a_owner[1024];
} lock_owner_open_to_lock_owner4_;

typedef struct open_owner_lock_dispatch_locker4_
{
    InfosetBase _base;
    uint32_t    open_seqid;
    open_stateid_open_to_lock_owner4_ open_stateid;
    uint32_t    lock_seqid;
    lock_owner_open_to_lock_owner4_ lock_owner;
} open_owner_lock_dispatch_locker4_;

typedef struct lock_dispatch_locker4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        lock_owner_lock_dispatch_locker4_ lock_owner;
        open_owner_lock_dispatch_locker4_ open_owner;
    };
} lock_dispatch_locker4_;

typedef struct locker_lock_
{
    InfosetBase _base;
    int32_t     new_lock_owner;
    lock_dispatch_locker4_ lock_dispatch;
} locker_lock_;

typedef struct lock_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    locktype;
    bool        reclaim;
    uint64_t    offset;
    uint64_t    length;
    locker_lock_ locker;
} lock_op_dispatch_nfsv4_ops_;

typedef struct name_lookup_
{
    InfosetBase _base;
    HexBinary   opaque;
} name_lookup_;

typedef struct lookup_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    name_lookup_ name;
} lookup_op_dispatch_nfsv4_ops_;

typedef struct lookupp_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} lookupp_op_dispatch_nfsv4_ops_;

typedef struct obj_attributes_nverify_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} obj_attributes_nverify_;

typedef struct nverify_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    obj_attributes_nverify_ obj_attributes;
} nverify_op_dispatch_nfsv4_ops_;

typedef struct owner_open_owner4_
{
    InfosetBase _base;
    HexBinary   opaque;
} owner_open_owner4_;

typedef struct owner_open_
{
    InfosetBase _base;
    uint64_t    clientid;
    owner_open_owner4_ owner;
} owner_open_;

typedef struct createattrs_create_dispatch_createhow4_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} createattrs_create_dispatch_createhow4_;

typedef struct create_dispatch_createhow4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        createattrs_create_dispatch_createhow4_ createattrs;
        HexBinary   createverf;
        uint8_t     _a_createverf[8];
    };
} create_dispatch_createhow4_;

typedef struct how_open_dispatch_openflag4_
{
    InfosetBase _base;
    uint32_t    mode;
    create_dispatch_createhow4_ create_dispatch;
} how_open_dispatch_openflag4_;

typedef struct open_dispatch_openflag4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        how_open_dispatch_openflag4_ how;
    };
} open_dispatch_openflag4_;

typedef struct openhow_open_
{
    InfosetBase _base;
    uint32_t    mode;
    open_dispatch_openflag4_ open_dispatch;
} openhow_open_;

typedef struct file_claim_dispatch_open_claim4_
{
    InfosetBase _base;
    HexBinary   strValue;
} file_claim_dispatch_open_claim4_;

typedef struct delegate_stateid_open_claim_delegate_cur4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} delegate_stateid_open_claim_delegate_cur4_;

typedef struct file_open_claim_delegate_cur4_
{
    InfosetBase _base;
    HexBinary   opaque;
} file_open_claim_delegate_cur4_;

typedef struct delegate_cur_info_claim_dispatch_open_claim4_
{
    InfosetBase _base;
    delegate_stateid_open_claim_delegate_cur4_ delegate_stateid;
    file_open_claim_delegate_cur4_ file;
} delegate_cur_info_claim_dispatch_open_claim4_;

typedef struct claim_dispatch_open_claim4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        file_claim_dispatch_open_claim4_ file;
        uint32_t    delegate_type;
        delegate_cur_info_claim_dispatch_open_claim4_ delegate_cur_info;
    };
} claim_dispatch_open_claim4_;

typedef struct claim_open_
{
    InfosetBase _base;
    uint32_t    mode;
    claim_dispatch_open_claim4_ claim_dispatch;
} claim_open_;

typedef struct open_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    seqid;
    uint32_t    share_access;
    uint32_t    share_deny;
    owner_open_ owner;
    openhow_open_ openhow;
    claim_open_ claim;
} open_op_dispatch_nfsv4_ops_;

typedef struct openattr_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    bool        createdir;
} openattr_op_dispatch_nfsv4_ops_;

typedef struct open_confirm_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} open_confirm_op_dispatch_nfsv4_ops_;

typedef struct open_stateid_open_downgrade_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} open_stateid_open_downgrade_;

typedef struct open_downgrade_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    open_stateid_open_downgrade_ open_stateid;
    uint32_t    seqid;
    uint32_t    share_access;
    uint32_t    share_deny;
} open_downgrade_op_dispatch_nfsv4_ops_;

typedef struct object_putfh_
{
    InfosetBase _base;
    HexBinary   opaque;
} object_putfh_;

typedef struct putfh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    object_putfh_ object;
} putfh_op_dispatch_nfsv4_ops_;

typedef struct putpubfh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} putpubfh_op_dispatch_nfsv4_ops_;

typedef struct putrootfh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} putrootfh_op_dispatch_nfsv4_ops_;

typedef struct stateid_read_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_read_;

typedef struct read_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    stateid_read_ stateid;
    uint64_t    offset;
    uint32_t    count;
} read_op_dispatch_nfsv4_ops_;

typedef struct attr_request_readdir_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    bitmap[16];
} attr_request_readdir_;

typedef struct readdir_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint64_t    cookie;
    HexBinary   cookieverf;
    uint8_t     _a_cookieverf[8];
    uint32_t    dircount;
    uint32_t    maxcount;
    attr_request_readdir_ attr_request;
} readdir_op_dispatch_nfsv4_ops_;

typedef struct readlink_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} readlink_op_dispatch_nfsv4_ops_;

typedef struct component_component4_
{
    InfosetBase _base;
    HexBinary   opaque;
} component_component4_;

typedef struct target_remove_
{
    InfosetBase _base;
    component_component4_ component;
} target_remove_;

typedef struct remove_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    target_remove_ target;
} remove_op_dispatch_nfsv4_ops_;

typedef struct oldname_rename_
{
    InfosetBase _base;
    component_component4_ component;
} oldname_rename_;

typedef struct newname_rename_
{
    InfosetBase _base;
    component_component4_ component;
} newname_rename_;

typedef struct rename_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    oldname_rename_ oldname;
    newname_rename_ newname;
} rename_op_dispatch_nfsv4_ops_;

typedef struct renew_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} renew_op_dispatch_nfsv4_ops_;

typedef struct restorefh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} restorefh_op_dispatch_nfsv4_ops_;

typedef struct savefh_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} savefh_op_dispatch_nfsv4_ops_;

typedef struct name_secinfo_
{
    InfosetBase _base;
    component_component4_ component;
} name_secinfo_;

typedef struct secinfo_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    name_secinfo_ name;
} secinfo_op_dispatch_nfsv4_ops_;

typedef struct stateid_setattr_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_setattr_;

typedef struct obj_attributes_setattr_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} obj_attributes_setattr_;

typedef struct setattr_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    stateid_setattr_ stateid;
    obj_attributes_setattr_ obj_attributes;
} setattr_op_dispatch_nfsv4_ops_;

typedef struct setclientid_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} setclientid_op_dispatch_nfsv4_ops_;

typedef struct setclientid_confirm_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} setclientid_confirm_op_dispatch_nfsv4_ops_;

typedef struct obj_attributes_verify_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} obj_attributes_verify_;

typedef struct verify_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    obj_attributes_verify_ obj_attributes;
} verify_op_dispatch_nfsv4_ops_;

typedef struct stateid_write_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_write_;

typedef struct data_write_
{
    InfosetBase _base;
    HexBinary   opaque;
} data_write_;

typedef struct write_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    stateid_write_ stateid;
    uint64_t    offset;
    uint32_t    stable;
    data_write_ data;
} write_op_dispatch_nfsv4_ops_;

typedef struct release_lockowner_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} release_lockowner_op_dispatch_nfsv4_ops_;

typedef struct backchannel_ctl_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} backchannel_ctl_op_dispatch_nfsv4_ops_;

typedef struct bind_conn_to_session_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} bind_conn_to_session_op_dispatch_nfsv4_ops_;

typedef struct co_ownerid_client_owner4_
{
    InfosetBase _base;
    HexBinary   opaque;
} co_ownerid_client_owner4_;

typedef struct eia_clientowner_exchange_id_
{
    InfosetBase _base;
    HexBinary   co_verifier;
    uint8_t     _a_co_verifier[8];
    co_ownerid_client_owner4_ co_ownerid;
} eia_clientowner_exchange_id_;

typedef struct spa_void_protect_dispatch_state_protect4_a_
{
    InfosetBase _base;

} spa_void_protect_dispatch_state_protect4_a_;

typedef struct spa_mach_ops_protect_dispatch_state_protect4_a_
{
    InfosetBase _base;
    HexBinary   opaque;
} spa_mach_ops_protect_dispatch_state_protect4_a_;

typedef struct spa_ssv_params_protect_dispatch_state_protect4_a_
{
    InfosetBase _base;
    HexBinary   opaque;
} spa_ssv_params_protect_dispatch_state_protect4_a_;

typedef struct protect_dispatch_state_protect4_a_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        spa_void_protect_dispatch_state_protect4_a_ spa_void;
        spa_mach_ops_protect_dispatch_state_protect4_a_ spa_mach_ops;
        spa_ssv_params_protect_dispatch_state_protect4_a_ spa_ssv_params;
    };
} protect_dispatch_state_protect4_a_;

typedef struct eia_state_protect_exchange_id_
{
    InfosetBase _base;
    uint32_t    mode;
    protect_dispatch_state_protect4_a_ protect_dispatch;
} eia_state_protect_exchange_id_;

typedef struct nii_domain_nfs_impl_id4_
{
    InfosetBase _base;
    HexBinary   opaque;
} nii_domain_nfs_impl_id4_;

typedef struct nii_name_nfs_impl_id4_
{
    InfosetBase _base;
    HexBinary   opaque;
} nii_name_nfs_impl_id4_;

typedef struct nii_date_nfs_impl_id4_
{
    InfosetBase _base;
    int64_t     seconds;
    uint32_t    nseconds;
} nii_date_nfs_impl_id4_;

typedef struct eia_client_impl_id_exchange_id_
{
    InfosetBase _base;
    nii_domain_nfs_impl_id4_ nii_domain;
    nii_name_nfs_impl_id4_ nii_name;
    nii_date_nfs_impl_id4_ nii_date;
} eia_client_impl_id_exchange_id_;

typedef struct exchange_id_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    eia_clientowner_exchange_id_ eia_clientowner;
    uint32_t    eia_flags;
    eia_state_protect_exchange_id_ eia_state_protect;
    uint32_t    exchval;
    eia_client_impl_id_exchange_id_ eia_client_impl_id;
} exchange_id_op_dispatch_nfsv4_ops_;

typedef struct csa_fore_chan_attrs_create_session_
{
    InfosetBase _base;
    uint32_t    ca_headerpadsize;
    uint32_t    ca_maxrequestsize;
    uint32_t    ca_maxresponsesize;
    uint32_t    ca_maxresponsesize_cached;
    uint32_t    ca_maxoperations;
    uint32_t    ca_maxrequests;
    uint32_t    ca_rdma_ird;
} csa_fore_chan_attrs_create_session_;

typedef struct csa_back_chan_attrs_create_session_
{
    InfosetBase _base;
    uint32_t    ca_headerpadsize;
    uint32_t    ca_maxrequestsize;
    uint32_t    ca_maxresponsesize;
    uint32_t    ca_maxresponsesize_cached;
    uint32_t    ca_maxoperations;
    uint32_t    ca_maxrequests;
    uint32_t    ca_rdma_ird;
} csa_back_chan_attrs_create_session_;

typedef struct auth_void_callback_dispatch_callback_sec_parms4_
{
    InfosetBase _base;

} auth_void_callback_dispatch_callback_sec_parms4_;

typedef struct machinename_authsys_parms_
{
    InfosetBase _base;
    HexBinary   opaque;
} machinename_authsys_parms_;

typedef struct gids_authsys_parms_
{
    InfosetBase _base;
    HexBinary   opaque;
} gids_authsys_parms_;

typedef struct cbsp_sys_cred_callback_dispatch_callback_sec_parms4_
{
    InfosetBase _base;
    uint32_t    authlen;
    uint32_t    stamp;
    machinename_authsys_parms_ machinename;
    uint32_t    uid;
    uint32_t    gid;
    gids_authsys_parms_ gids;
} cbsp_sys_cred_callback_dispatch_callback_sec_parms4_;

typedef struct gcbp_handle_from_server_gss_cb_handles4_
{
    InfosetBase _base;
    HexBinary   opaque;
} gcbp_handle_from_server_gss_cb_handles4_;

typedef struct gcbp_handle_from_client_gss_cb_handles4_
{
    InfosetBase _base;
    HexBinary   opaque;
} gcbp_handle_from_client_gss_cb_handles4_;

typedef struct cbsp_gss_handles_callback_dispatch_callback_sec_parms4_
{
    InfosetBase _base;
    uint32_t    gcbp_service;
    gcbp_handle_from_server_gss_cb_handles4_ gcbp_handle_from_server;
    gcbp_handle_from_client_gss_cb_handles4_ gcbp_handle_from_client;
} cbsp_gss_handles_callback_dispatch_callback_sec_parms4_;

typedef struct callback_dispatch_callback_sec_parms4_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        auth_void_callback_dispatch_callback_sec_parms4_ auth_void;
        cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ cbsp_sys_cred;
        cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ cbsp_gss_handles;
    };
} callback_dispatch_callback_sec_parms4_;

typedef struct csa_sec_parms_create_session_
{
    InfosetBase _base;
    uint32_t    mode;
    callback_dispatch_callback_sec_parms4_ callback_dispatch;
} csa_sec_parms_create_session_;

typedef struct create_session_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint64_t    csa_clientid;
    uint32_t    csa_sequence;
    uint32_t    csa_flags;
    csa_fore_chan_attrs_create_session_ csa_fore_chan_attrs;
    csa_back_chan_attrs_create_session_ csa_back_chan_attrs;
    uint32_t    csa_cb_program;
    csa_sec_parms_create_session_ csa_sec_parms;
} create_session_op_dispatch_nfsv4_ops_;

typedef struct destroy_session_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    HexBinary   dsa_sessionid;
    uint8_t     _a_dsa_sessionid[16];
} destroy_session_op_dispatch_nfsv4_ops_;

typedef struct fsa_stateid_free_stateid_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} fsa_stateid_free_stateid_;

typedef struct free_stateid_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    fsa_stateid_free_stateid_ fsa_stateid;
} free_stateid_op_dispatch_nfsv4_ops_;

typedef struct get_dir_delegation_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} get_dir_delegation_op_dispatch_nfsv4_ops_;

typedef struct getdeviceinfo_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} getdeviceinfo_op_dispatch_nfsv4_ops_;

typedef struct getdevicelist_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} getdevicelist_op_dispatch_nfsv4_ops_;

typedef struct layoutcommit_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} layoutcommit_op_dispatch_nfsv4_ops_;

typedef struct layoutget_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} layoutget_op_dispatch_nfsv4_ops_;

typedef struct stateid_layoutreturn_file4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_layoutreturn_file4_;

typedef struct body_layoutreturn_file4_
{
    InfosetBase _base;
    HexBinary   opaque;
} body_layoutreturn_file4_;

typedef struct filelayout_layoutreturn4sw_
{
    InfosetBase _base;
    uint64_t    offset;
    uint64_t    length;
    stateid_layoutreturn_file4_ stateid;
    body_layoutreturn_file4_ body;
} filelayout_layoutreturn4sw_;

typedef struct br2_layoutreturn4sw_
{
    InfosetBase _base;

} br2_layoutreturn4sw_;

typedef struct br3_layoutreturn4sw_
{
    InfosetBase _base;

} br3_layoutreturn4sw_;

typedef struct lora_layoutreturn_layoutreturn_
{
    InfosetBase _base;
    uint32_t    return_type;
    filelayout_layoutreturn4sw_ filelayout;
    br2_layoutreturn4sw_ br2;
    br3_layoutreturn4sw_ br3;
} lora_layoutreturn_layoutreturn_;

typedef struct layoutreturn_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    bool        lora_reclaim;
    uint32_t    lora_layout_type;
    uint32_t    lora_iomode;
    lora_layoutreturn_layoutreturn_ lora_layoutreturn;
} layoutreturn_op_dispatch_nfsv4_ops_;

typedef struct secinfo_no_name_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    args;
} secinfo_no_name_op_dispatch_nfsv4_ops_;

typedef struct sequence_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    HexBinary   sa_sessionid;
    uint8_t     _a_sa_sessionid[16];
    uint32_t    sa_sequenceid;
    uint32_t    sa_slotid;
    uint32_t    sa_highest_slotid;
    bool        sa_cachethis;
} sequence_op_dispatch_nfsv4_ops_;

typedef struct set_ssv_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} set_ssv_op_dispatch_nfsv4_ops_;

typedef struct ts_stateids_test_stateid_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} ts_stateids_test_stateid_;

typedef struct test_stateid_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint32_t    numargs;
    ts_stateids_test_stateid_ ts_stateids[16];
} test_stateid_op_dispatch_nfsv4_ops_;

typedef struct want_delegation_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} want_delegation_op_dispatch_nfsv4_ops_;

typedef struct destroy_clientid_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    uint64_t    dca_clientid;
} destroy_clientid_op_dispatch_nfsv4_ops_;

typedef struct reclaim_complete_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    bool        rca_one_fs;
} reclaim_complete_op_dispatch_nfsv4_ops_;

typedef struct allocate_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} allocate_op_dispatch_nfsv4_ops_;

typedef struct copy_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} copy_op_dispatch_nfsv4_ops_;

typedef struct copy_notify_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} copy_notify_op_dispatch_nfsv4_ops_;

typedef struct deallocate_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} deallocate_op_dispatch_nfsv4_ops_;

typedef struct io_advise_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} io_advise_op_dispatch_nfsv4_ops_;

typedef struct layouterror_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} layouterror_op_dispatch_nfsv4_ops_;

typedef struct layoutstats_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} layoutstats_op_dispatch_nfsv4_ops_;

typedef struct offload_cancel_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} offload_cancel_op_dispatch_nfsv4_ops_;

typedef struct offload_status_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} offload_status_op_dispatch_nfsv4_ops_;

typedef struct read_plus_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} read_plus_op_dispatch_nfsv4_ops_;

typedef struct seek_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} seek_op_dispatch_nfsv4_ops_;

typedef struct write_same_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} write_same_op_dispatch_nfsv4_ops_;

typedef struct clone_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} clone_op_dispatch_nfsv4_ops_;

typedef struct illegal_op_dispatch_nfsv4_ops_
{
    InfosetBase _base;

} illegal_op_dispatch_nfsv4_ops_;

typedef struct op_dispatch_nfsv4_ops_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        access_op_dispatch_nfsv4_ops_ access;
        close_op_dispatch_nfsv4_ops_ close;
        commit_op_dispatch_nfsv4_ops_ commit;
        create_op_dispatch_nfsv4_ops_ create;
        delegpurge_op_dispatch_nfsv4_ops_ delegpurge;
        delegreturn_op_dispatch_nfsv4_ops_ delegreturn;
        getattr_op_dispatch_nfsv4_ops_ getattr;
        getfh_op_dispatch_nfsv4_ops_ getfh;
        link_op_dispatch_nfsv4_ops_ link;
        lockt_op_dispatch_nfsv4_ops_ lockt;
        locku_op_dispatch_nfsv4_ops_ locku;
        lock_op_dispatch_nfsv4_ops_ lock;
        lookup_op_dispatch_nfsv4_ops_ lookup;
        lookupp_op_dispatch_nfsv4_ops_ lookupp;
        nverify_op_dispatch_nfsv4_ops_ nverify;
        open_op_dispatch_nfsv4_ops_ open;
        openattr_op_dispatch_nfsv4_ops_ openattr;
        open_confirm_op_dispatch_nfsv4_ops_ open_confirm;
        open_downgrade_op_dispatch_nfsv4_ops_ open_downgrade;
        putfh_op_dispatch_nfsv4_ops_ putfh;
        putpubfh_op_dispatch_nfsv4_ops_ putpubfh;
        putrootfh_op_dispatch_nfsv4_ops_ putrootfh;
        read_op_dispatch_nfsv4_ops_ read;
        readdir_op_dispatch_nfsv4_ops_ readdir;
        readlink_op_dispatch_nfsv4_ops_ readlink;
        remove_op_dispatch_nfsv4_ops_ remove;
        rename_op_dispatch_nfsv4_ops_ rename;
        renew_op_dispatch_nfsv4_ops_ renew;
        restorefh_op_dispatch_nfsv4_ops_ restorefh;
        savefh_op_dispatch_nfsv4_ops_ savefh;
        secinfo_op_dispatch_nfsv4_ops_ secinfo;
        setattr_op_dispatch_nfsv4_ops_ setattr;
        setclientid_op_dispatch_nfsv4_ops_ setclientid;
        setclientid_confirm_op_dispatch_nfsv4_ops_ setclientid_confirm;
        verify_op_dispatch_nfsv4_ops_ verify;
        write_op_dispatch_nfsv4_ops_ write;
        release_lockowner_op_dispatch_nfsv4_ops_ release_lockowner;
        backchannel_ctl_op_dispatch_nfsv4_ops_ backchannel_ctl;
        bind_conn_to_session_op_dispatch_nfsv4_ops_ bind_conn_to_session;
        exchange_id_op_dispatch_nfsv4_ops_ exchange_id;
        create_session_op_dispatch_nfsv4_ops_ create_session;
        destroy_session_op_dispatch_nfsv4_ops_ destroy_session;
        free_stateid_op_dispatch_nfsv4_ops_ free_stateid;
        get_dir_delegation_op_dispatch_nfsv4_ops_ get_dir_delegation;
        getdeviceinfo_op_dispatch_nfsv4_ops_ getdeviceinfo;
        getdevicelist_op_dispatch_nfsv4_ops_ getdevicelist;
        layoutcommit_op_dispatch_nfsv4_ops_ layoutcommit;
        layoutget_op_dispatch_nfsv4_ops_ layoutget;
        layoutreturn_op_dispatch_nfsv4_ops_ layoutreturn;
        secinfo_no_name_op_dispatch_nfsv4_ops_ secinfo_no_name;
        sequence_op_dispatch_nfsv4_ops_ sequence;
        set_ssv_op_dispatch_nfsv4_ops_ set_ssv;
        test_stateid_op_dispatch_nfsv4_ops_ test_stateid;
        want_delegation_op_dispatch_nfsv4_ops_ want_delegation;
        destroy_clientid_op_dispatch_nfsv4_ops_ destroy_clientid;
        reclaim_complete_op_dispatch_nfsv4_ops_ reclaim_complete;
        allocate_op_dispatch_nfsv4_ops_ allocate;
        copy_op_dispatch_nfsv4_ops_ copy;
        copy_notify_op_dispatch_nfsv4_ops_ copy_notify;
        deallocate_op_dispatch_nfsv4_ops_ deallocate;
        io_advise_op_dispatch_nfsv4_ops_ io_advise;
        layouterror_op_dispatch_nfsv4_ops_ layouterror;
        layoutstats_op_dispatch_nfsv4_ops_ layoutstats;
        offload_cancel_op_dispatch_nfsv4_ops_ offload_cancel;
        offload_status_op_dispatch_nfsv4_ops_ offload_status;
        read_plus_op_dispatch_nfsv4_ops_ read_plus;
        seek_op_dispatch_nfsv4_ops_ seek;
        write_same_op_dispatch_nfsv4_ops_ write_same;
        clone_op_dispatch_nfsv4_ops_ clone;
        illegal_op_dispatch_nfsv4_ops_ illegal;
    };
} op_dispatch_nfsv4_ops_;

typedef struct nfscmd_compound_
{
    InfosetBase _base;
    uint32_t    opcode;
    op_dispatch_nfsv4_ops_ op_dispatch;
} nfscmd_compound_;

typedef struct compound_nfsv4_
{
    InfosetBase _base;
    tag_compound_ tag;
    uint32_t    minorversion;
    uint32_t    numargs;
    nfscmd_compound_ nfscmd[16];
} compound_nfsv4_;

typedef struct nfsv4_call_dispatch_call_body_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        null_nfsv4_ null;
        compound_nfsv4_ compound;
    };
} nfsv4_call_dispatch_call_body_;

typedef struct call_dispatch_call_body_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        v3_dispatch_call_dispatch_call_body_ v3_dispatch;
        nfsv4_call_dispatch_call_body_ nfsv4;
    };
} call_dispatch_call_body_;

typedef struct call_body_entry_dispatch_entry_point_
{
    InfosetBase _base;
    uint32_t    rpcvers;
    uint32_t    prog;
    uint32_t    vers;
    uint32_t    proc;
    cred_call_body_ cred;
    verf_call_body_ verf;
    call_dispatch_call_body_ call_dispatch;
} call_body_entry_dispatch_entry_point_;

typedef struct verf_accept_reply_
{
    InfosetBase _base;
    uint32_t    auth_type;
    auth_dispatch_opaque_auth_ auth_dispatch;
} verf_accept_reply_;

typedef struct tag_nfsv4reply_
{
    InfosetBase _base;
    HexBinary   opaque;
} tag_nfsv4reply_;

typedef struct access_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint32_t    supported;
    uint32_t    access;
} access_op_dispatch_v4reply_ops_;

typedef struct close_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    open_stateid_close_ open_stateid;
} close_op_dispatch_v4reply_ops_;

typedef struct obj_attributes_getattr_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    attrmask[16];
    attr_vals_fattr4_ attr_vals;
} obj_attributes_getattr_;

typedef struct getattr_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    obj_attributes_getattr_ obj_attributes;
} getattr_op_dispatch_v4reply_ops_;

typedef struct nfs_fh4_getfh_
{
    InfosetBase _base;
    HexBinary   opaque;
} nfs_fh4_getfh_;

typedef struct getfh_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    nfs_fh4_getfh_ nfs_fh4;
} getfh_op_dispatch_v4reply_ops_;

typedef struct lookup_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} lookup_op_dispatch_v4reply_ops_;

typedef struct stateid_open4resok_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_open4resok_;

typedef struct cinfo_open4resok_
{
    InfosetBase _base;
    bool        atomic;
    uint64_t    before;
    uint64_t    after;
} cinfo_open4resok_;

typedef struct attrset_open4resok_
{
    InfosetBase _base;
    uint32_t    numargs;
    uint32_t    bitmap[16];
} attrset_open4resok_;

typedef struct stateid_open_read_delegation4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_open_read_delegation4_;

typedef struct who_nfsace4_
{
    InfosetBase _base;
    HexBinary   opaque;
} who_nfsace4_;

typedef struct permissions_open_read_delegation4_
{
    InfosetBase _base;
    uint32_t    type;
    uint32_t    flag;
    uint32_t    access_mask;
    who_nfsace4_ who;
} permissions_open_read_delegation4_;

typedef struct read_open_delegation4_
{
    InfosetBase _base;
    stateid_open_read_delegation4_ stateid;
    bool        recall;
    permissions_open_read_delegation4_ permissions;
} read_open_delegation4_;

typedef struct stateid_open_write_delegation4_
{
    InfosetBase _base;
    uint32_t    seqid;
    HexBinary   other;
    uint8_t     _a_other[12];
} stateid_open_write_delegation4_;

typedef struct mod_blocks_nfs_space_limit4_
{
    InfosetBase _base;
    uint32_t    num_blocks;
    uint32_t    bytes_per_block;
} mod_blocks_nfs_space_limit4_;

typedef struct space_limit_open_write_delegation4_
{
    InfosetBase _base;
    uint32_t    limitby;
    uint64_t    filesize;
    mod_blocks_nfs_space_limit4_ mod_blocks;
} space_limit_open_write_delegation4_;

typedef struct permissions_open_write_delegation4_
{
    InfosetBase _base;
    uint32_t    type;
    uint32_t    flag;
    uint32_t    access_mask;
    who_nfsace4_ who;
} permissions_open_write_delegation4_;

typedef struct write_open_delegation4_
{
    InfosetBase _base;
    stateid_open_write_delegation4_ stateid;
    bool        recall;
    space_limit_open_write_delegation4_ space_limit;
    permissions_open_write_delegation4_ permissions;
} write_open_delegation4_;

typedef struct ext_open_delegation4_
{
    InfosetBase _base;
    uint32_t    why;
    bool        server_push;
    bool        server_signal;
} ext_open_delegation4_;

typedef struct delegation_open4resok_
{
    InfosetBase _base;
    uint32_t    delegation_type;
    read_open_delegation4_ read;
    write_open_delegation4_ write;
    ext_open_delegation4_ ext;
} delegation_open4resok_;

typedef struct resok4_open_
{
    InfosetBase _base;
    stateid_open4resok_ stateid;
    cinfo_open4resok_ cinfo;
    uint32_t    rflags;
    attrset_open4resok_ attrset;
    delegation_open4resok_ delegation;
} resok4_open_;

typedef struct open_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    resok4_open_ resok4;
} open_op_dispatch_v4reply_ops_;

typedef struct putfh_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} putfh_op_dispatch_v4reply_ops_;

typedef struct putpubfh_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} putpubfh_op_dispatch_v4reply_ops_;

typedef struct putrootfh_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} putrootfh_op_dispatch_v4reply_ops_;

typedef struct data_read_
{
    InfosetBase _base;
    HexBinary   opaque;
} data_read_;

typedef struct read_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint32_t    eof;
    data_read_ data;
} read_op_dispatch_v4reply_ops_;

typedef struct readdir_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} readdir_op_dispatch_v4reply_ops_;

typedef struct write_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint32_t    count;
    uint32_t    committed;
    HexBinary   writeverf;
    uint8_t     _a_writeverf[8];
} write_op_dispatch_v4reply_ops_;

typedef struct eir_state_protect_exchange_id_
{
    InfosetBase _base;
    uint32_t    mode;
    protect_dispatch_state_protect4_a_ protect_dispatch;
} eir_state_protect_exchange_id_;

typedef struct eir_server_owner_exchange_id_
{
    InfosetBase _base;
    uint64_t    so_minor_id;
    HexBinary   so_major_id;
    uint8_t     _a_so_major_id[1024];
} eir_server_owner_exchange_id_;

typedef struct eir_server_scope_exchange_id_
{
    InfosetBase _base;
    HexBinary   opaque;
} eir_server_scope_exchange_id_;

typedef struct eir_server_impl_id_exchange_id_
{
    InfosetBase _base;
    nii_domain_nfs_impl_id4_ nii_domain;
    nii_name_nfs_impl_id4_ nii_name;
    nii_date_nfs_impl_id4_ nii_date;
} eir_server_impl_id_exchange_id_;

typedef struct exchange_id_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint64_t    eir_clientid;
    uint32_t    eir_sequenceid;
    uint32_t    eir_flags;
    eir_state_protect_exchange_id_ eir_state_protect;
    eir_server_owner_exchange_id_ eir_server_owner;
    eir_server_scope_exchange_id_ eir_server_scope;
    eir_server_impl_id_exchange_id_ eir_server_impl_id;
} exchange_id_op_dispatch_v4reply_ops_;

typedef struct csr_fore_chan_attrs_create_session_
{
    InfosetBase _base;
    uint32_t    ca_headerpadsize;
    uint32_t    ca_maxrequestsize;
    uint32_t    ca_maxresponsesize;
    uint32_t    ca_maxresponsesize_cached;
    uint32_t    ca_maxoperations;
    uint32_t    ca_maxrequests;
    uint32_t    ca_rdma_ird;
} csr_fore_chan_attrs_create_session_;

typedef struct csr_back_chan_attrs_create_session_
{
    InfosetBase _base;
    uint32_t    ca_headerpadsize;
    uint32_t    ca_maxrequestsize;
    uint32_t    ca_maxresponsesize;
    uint32_t    ca_maxresponsesize_cached;
    uint32_t    ca_maxoperations;
    uint32_t    ca_maxrequests;
    uint32_t    ca_rdma_ird;
} csr_back_chan_attrs_create_session_;

typedef struct create_session_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    HexBinary   csr_sessionid;
    uint8_t     _a_csr_sessionid[16];
    uint32_t    csr_sequence;
    uint32_t    csr_flags;
    csr_fore_chan_attrs_create_session_ csr_fore_chan_attrs;
    csr_back_chan_attrs_create_session_ csr_back_chan_attrs;
} create_session_op_dispatch_v4reply_ops_;

typedef struct destroy_session_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} destroy_session_op_dispatch_v4reply_ops_;

typedef struct layoutreturn_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint32_t    state_present;
    uint32_t    lrs_stateid;
} layoutreturn_op_dispatch_v4reply_ops_;

typedef struct oid_rpcsec_gss_info_
{
    InfosetBase _base;
    HexBinary   opaque;
} oid_rpcsec_gss_info_;

typedef struct gss_info_secinfo4_switch_
{
    InfosetBase _base;
    oid_rpcsec_gss_info_ oid;
    uint32_t    qop;
    uint32_t    service;
} gss_info_secinfo4_switch_;

typedef struct sec_type_secinfo_no_name_
{
    InfosetBase _base;
    uint32_t    flavor;
    gss_info_secinfo4_switch_ gss_info;
} sec_type_secinfo_no_name_;

typedef struct secinfo_no_name_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    uint32_t    flavor_num;
    sec_type_secinfo_no_name_ sec_type[16];
} secinfo_no_name_op_dispatch_v4reply_ops_;

typedef struct sequence_op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    HexBinary   sr_sessionid;
    uint8_t     _a_sr_sessionid[16];
    uint32_t    sr_sequenceid;
    uint32_t    sr_slotid;
    uint32_t    sr_highest_slotid;
    uint32_t    sr_target_highest_slotid;
    uint32_t    sr_status_flags;
} sequence_op_dispatch_v4reply_ops_;

typedef struct destroy_clientid_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} destroy_clientid_op_dispatch_v4reply_ops_;

typedef struct reclaim_complete_op_dispatch_v4reply_ops_
{
    InfosetBase _base;

} reclaim_complete_op_dispatch_v4reply_ops_;

typedef struct op_dispatch_v4reply_ops_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        access_op_dispatch_v4reply_ops_ access;
        close_op_dispatch_v4reply_ops_ close;
        getattr_op_dispatch_v4reply_ops_ getattr;
        getfh_op_dispatch_v4reply_ops_ getfh;
        lookup_op_dispatch_v4reply_ops_ lookup;
        open_op_dispatch_v4reply_ops_ open;
        putfh_op_dispatch_v4reply_ops_ putfh;
        putpubfh_op_dispatch_v4reply_ops_ putpubfh;
        putrootfh_op_dispatch_v4reply_ops_ putrootfh;
        read_op_dispatch_v4reply_ops_ read;
        readdir_op_dispatch_v4reply_ops_ readdir;
        write_op_dispatch_v4reply_ops_ write;
        exchange_id_op_dispatch_v4reply_ops_ exchange_id;
        create_session_op_dispatch_v4reply_ops_ create_session;
        destroy_session_op_dispatch_v4reply_ops_ destroy_session;
        layoutreturn_op_dispatch_v4reply_ops_ layoutreturn;
        secinfo_no_name_op_dispatch_v4reply_ops_ secinfo_no_name;
        sequence_op_dispatch_v4reply_ops_ sequence;
        destroy_clientid_op_dispatch_v4reply_ops_ destroy_clientid;
        reclaim_complete_op_dispatch_v4reply_ops_ reclaim_complete;
    };
} op_dispatch_v4reply_ops_;

typedef struct nfscmd_nfsv4reply_
{
    InfosetBase _base;
    uint32_t    opcode;
    uint32_t    status;
    op_dispatch_v4reply_ops_ op_dispatch;
} nfscmd_nfsv4reply_;

typedef struct nfsv4_accept_dispatch_accept_reply_
{
    InfosetBase _base;
    uint32_t    status;
    tag_nfsv4reply_ tag;
    uint32_t    numargs;
    nfscmd_nfsv4reply_ nfscmd[16];
} nfsv4_accept_dispatch_accept_reply_;

typedef struct accept_dispatch_accept_reply_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        nfsv4_accept_dispatch_accept_reply_ nfsv4;
    };
} accept_dispatch_accept_reply_;

typedef struct accept_reply_reply_dispatch_reply_body_
{
    InfosetBase _base;
    verf_accept_reply_ verf;
    uint32_t    accept_status;
    accept_dispatch_accept_reply_ accept_dispatch;
} accept_reply_reply_dispatch_reply_body_;

typedef struct rpc_mismatch_reject_dispatch_reject_reply_
{
    InfosetBase _base;
    uint32_t    low;
    uint32_t    high;
} rpc_mismatch_reject_dispatch_reject_reply_;

typedef struct auth_error_reject_dispatch_reject_reply_
{
    InfosetBase _base;
    uint32_t    stat;
} auth_error_reject_dispatch_reject_reply_;

typedef struct reject_dispatch_reject_reply_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        rpc_mismatch_reject_dispatch_reject_reply_ rpc_mismatch;
        auth_error_reject_dispatch_reject_reply_ auth_error;
    };
} reject_dispatch_reject_reply_;

typedef struct reject_reply_reply_dispatch_reply_body_
{
    InfosetBase _base;
    uint32_t    reject_status;
    reject_dispatch_reject_reply_ reject_dispatch;
} reject_reply_reply_dispatch_reply_body_;

typedef struct reply_dispatch_reply_body_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        accept_reply_reply_dispatch_reply_body_ accept_reply;
        reject_reply_reply_dispatch_reply_body_ reject_reply;
    };
} reply_dispatch_reply_body_;

typedef struct reply_body_entry_dispatch_entry_point_
{
    InfosetBase _base;
    uint32_t    status;
    reply_dispatch_reply_body_ reply_dispatch;
} reply_body_entry_dispatch_entry_point_;

typedef struct entry_dispatch_entry_point_
{
    InfosetBase _base;
    size_t      _choice; // choice of which union field to use
    union
    {
        call_body_entry_dispatch_entry_point_ call_body;
        reply_body_entry_dispatch_entry_point_ reply_body;
    };
} entry_dispatch_entry_point_;

typedef struct Request_RqstRply_
{
    InfosetBase _base;
    recfragment_entry_point_ recfragment;
    uint32_t    xid;
    uint32_t    mtype;
    entry_dispatch_entry_point_ entry_dispatch;
} Request_RqstRply_;

typedef struct Reply_RqstRply_
{
    InfosetBase _base;
    recfragment_entry_point_ recfragment;
    uint32_t    xid;
    uint32_t    mtype;
    entry_dispatch_entry_point_ entry_dispatch;
} Reply_RqstRply_;

typedef struct RqstRply_
{
    InfosetBase _base;
    Request_RqstRply_ Request;
    Reply_RqstRply_ Reply;
} RqstRply_;

#endif // GENERATED_CODE_H
