// auto-maintained by iwyu
// clang-format off
#include "generated_code.h"
#include <stdbool.h>    // for false, bool, true
#include <stddef.h>     // for NULL, size_t
#include <string.h>     // for memcmp, memset
#include "errors.h"     // for Error, PState, UState, ERR_CHOICE_KEY, Error::(anonymous), UNUSED
#include "parsers.h"    // for alloc_hexBinary, parse_hexBinary, parse_be_float, parse_be_int16, parse_be_bool32, parse_be_bool16, parse_be_int32, parse_be_uint16, parse_be_uint32, parse_le_bool32, parse_le_int64, parse_le_uint16, parse_le_uint8, parse_be_bool8, parse_be_double, parse_be_int64, parse_be_int8, parse_be_uint64, parse_be_uint8, parse_le_bool16, parse_le_bool8, parse_le_double, parse_le_float, parse_le_int16, parse_le_int32, parse_le_int8, parse_le_uint32, parse_le_uint64
#include "unparsers.h"  // for unparse_hexBinary, unparse_be_float, unparse_be_int16, unparse_be_bool32, unparse_be_bool16, unparse_be_int32, unparse_be_uint16, unparse_be_uint32, unparse_le_bool32, unparse_le_int64, unparse_le_uint16, unparse_le_uint8, unparse_be_bool8, unparse_be_double, unparse_be_int64, unparse_be_int8, unparse_be_uint64, unparse_be_uint8, unparse_le_bool16, unparse_le_bool8, unparse_le_double, unparse_le_float, unparse_le_int16, unparse_le_int32, unparse_le_int8, unparse_le_uint32, unparse_le_uint64
#include "validators.h" // for validate_array_bounds, validate_fixed_attribute, validate_floatpt_enumeration, validate_integer_enumeration, validate_schema_range
// clang-format on

// Declare prototypes for easier compilation

static void recfragment_entry_point__parseSelf(recfragment_entry_point_ *instance, PState *pstate);
static void recfragment_entry_point__unparseSelf(const recfragment_entry_point_ *instance, UState *ustate);
static void authlen_authnone__parseSelf(authlen_authnone_ *instance, PState *pstate);
static void authlen_authnone__unparseSelf(const authlen_authnone_ *instance, UState *ustate);
static void auth_none_auth_dispatch_opaque_auth__parseSelf(auth_none_auth_dispatch_opaque_auth_ *instance, PState *pstate);
static void auth_none_auth_dispatch_opaque_auth__unparseSelf(const auth_none_auth_dispatch_opaque_auth_ *instance, UState *ustate);
static void machineName_authunix__parseSelf(machineName_authunix_ *instance, PState *pstate);
static void machineName_authunix__unparseSelf(const machineName_authunix_ *instance, UState *ustate);
static void array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__parseSelf(auth_unix_auth_dispatch_opaque_auth_ *instance, PState *pstate);
static void array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__unparseSelf(const auth_unix_auth_dispatch_opaque_auth_ *instance, UState *ustate);
static size_t array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__getArraySize(const auth_unix_auth_dispatch_opaque_auth_ *instance);
static void auth_unix_auth_dispatch_opaque_auth__parseSelf(auth_unix_auth_dispatch_opaque_auth_ *instance, PState *pstate);
static void auth_unix_auth_dispatch_opaque_auth__unparseSelf(const auth_unix_auth_dispatch_opaque_auth_ *instance, UState *ustate);
static const Error *auth_dispatch_opaque_auth__initChoice(auth_dispatch_opaque_auth_ *instance);
static void auth_dispatch_opaque_auth__parseSelf(auth_dispatch_opaque_auth_ *instance, PState *pstate);
static void auth_dispatch_opaque_auth__unparseSelf(const auth_dispatch_opaque_auth_ *instance, UState *ustate);
static void cred_call_body__parseSelf(cred_call_body_ *instance, PState *pstate);
static void cred_call_body__unparseSelf(const cred_call_body_ *instance, UState *ustate);
static void verf_call_body__parseSelf(verf_call_body_ *instance, PState *pstate);
static void verf_call_body__unparseSelf(const verf_call_body_ *instance, UState *ustate);
static void mountd_null_mountd__parseSelf(mountd_null_mountd_ *instance, PState *pstate);
static void mountd_null_mountd__unparseSelf(const mountd_null_mountd_ *instance, UState *ustate);
static void mountPath_mountd_mt__parseSelf(mountPath_mountd_mt_ *instance, PState *pstate);
static void mountPath_mountd_mt__unparseSelf(const mountPath_mountd_mt_ *instance, UState *ustate);
static void mountd_mt_mountd__parseSelf(mountd_mt_mountd_ *instance, PState *pstate);
static void mountd_mt_mountd__unparseSelf(const mountd_mt_mountd_ *instance, UState *ustate);
static void mountd_dump_mountd__parseSelf(mountd_dump_mountd_ *instance, PState *pstate);
static void mountd_dump_mountd__unparseSelf(const mountd_dump_mountd_ *instance, UState *ustate);
static void unmountPath_mountd_umt__parseSelf(unmountPath_mountd_umt_ *instance, PState *pstate);
static void unmountPath_mountd_umt__unparseSelf(const unmountPath_mountd_umt_ *instance, UState *ustate);
static void mountd_umt_mountd__parseSelf(mountd_umt_mountd_ *instance, PState *pstate);
static void mountd_umt_mountd__unparseSelf(const mountd_umt_mountd_ *instance, UState *ustate);
static void mountd_umntall_mountd__parseSelf(mountd_umntall_mountd_ *instance, PState *pstate);
static void mountd_umntall_mountd__unparseSelf(const mountd_umntall_mountd_ *instance, UState *ustate);
static void mountd_export_mountd__parseSelf(mountd_export_mountd_ *instance, PState *pstate);
static void mountd_export_mountd__unparseSelf(const mountd_export_mountd_ *instance, UState *ustate);
static const Error *mountd_v3_dispatch_call_dispatch_call_body__initChoice(mountd_v3_dispatch_call_dispatch_call_body_ *instance);
static void mountd_v3_dispatch_call_dispatch_call_body__parseSelf(mountd_v3_dispatch_call_dispatch_call_body_ *instance, PState *pstate);
static void mountd_v3_dispatch_call_dispatch_call_body__unparseSelf(const mountd_v3_dispatch_call_dispatch_call_body_ *instance, UState *ustate);
static const Error *v3_dispatch_call_dispatch_call_body__initChoice(v3_dispatch_call_dispatch_call_body_ *instance);
static void v3_dispatch_call_dispatch_call_body__parseSelf(v3_dispatch_call_dispatch_call_body_ *instance, PState *pstate);
static void v3_dispatch_call_dispatch_call_body__unparseSelf(const v3_dispatch_call_dispatch_call_body_ *instance, UState *ustate);
static void null_nfsv4__parseSelf(null_nfsv4_ *instance, PState *pstate);
static void null_nfsv4__unparseSelf(const null_nfsv4_ *instance, UState *ustate);
static void tag_compound__parseSelf(tag_compound_ *instance, PState *pstate);
static void tag_compound__unparseSelf(const tag_compound_ *instance, UState *ustate);
static void access_op_dispatch_nfsv4_ops__parseSelf(access_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void access_op_dispatch_nfsv4_ops__unparseSelf(const access_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void open_stateid_close__parseSelf(open_stateid_close_ *instance, PState *pstate);
static void open_stateid_close__unparseSelf(const open_stateid_close_ *instance, UState *ustate);
static void close_op_dispatch_nfsv4_ops__parseSelf(close_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void close_op_dispatch_nfsv4_ops__unparseSelf(const close_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void commit_op_dispatch_nfsv4_ops__parseSelf(commit_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void commit_op_dispatch_nfsv4_ops__unparseSelf(const commit_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void linkdata_create_dispatch_createtype4__parseSelf(linkdata_create_dispatch_createtype4_ *instance, PState *pstate);
static void linkdata_create_dispatch_createtype4__unparseSelf(const linkdata_create_dispatch_createtype4_ *instance, UState *ustate);
static void devdata_create_dispatch_createtype4__parseSelf(devdata_create_dispatch_createtype4_ *instance, PState *pstate);
static void devdata_create_dispatch_createtype4__unparseSelf(const devdata_create_dispatch_createtype4_ *instance, UState *ustate);
static const Error *create_dispatch_createtype4__initChoice(create_dispatch_createtype4_ *instance);
static void create_dispatch_createtype4__parseSelf(create_dispatch_createtype4_ *instance, PState *pstate);
static void create_dispatch_createtype4__unparseSelf(const create_dispatch_createtype4_ *instance, UState *ustate);
static void objtype_create__parseSelf(objtype_create_ *instance, PState *pstate);
static void objtype_create__unparseSelf(const objtype_create_ *instance, UState *ustate);
static void objname_create__parseSelf(objname_create_ *instance, PState *pstate);
static void objname_create__unparseSelf(const objname_create_ *instance, UState *ustate);
static void array_attrmask_fattr4_createattrs_create__parseSelf(createattrs_create_ *instance, PState *pstate);
static void array_attrmask_fattr4_createattrs_create__unparseSelf(const createattrs_create_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_createattrs_create__getArraySize(const createattrs_create_ *instance);
static void attr_vals_fattr4__parseSelf(attr_vals_fattr4_ *instance, PState *pstate);
static void attr_vals_fattr4__unparseSelf(const attr_vals_fattr4_ *instance, UState *ustate);
static void createattrs_create__parseSelf(createattrs_create_ *instance, PState *pstate);
static void createattrs_create__unparseSelf(const createattrs_create_ *instance, UState *ustate);
static void create_op_dispatch_nfsv4_ops__parseSelf(create_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void create_op_dispatch_nfsv4_ops__unparseSelf(const create_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void delegpurge_op_dispatch_nfsv4_ops__parseSelf(delegpurge_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void delegpurge_op_dispatch_nfsv4_ops__unparseSelf(const delegpurge_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void delegreturn_op_dispatch_nfsv4_ops__parseSelf(delegreturn_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void delegreturn_op_dispatch_nfsv4_ops__unparseSelf(const delegreturn_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__parseSelf(getattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__unparseSelf(const getattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static size_t array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__getArraySize(const getattr_op_dispatch_nfsv4_ops_ *instance);
static void getattr_op_dispatch_nfsv4_ops__parseSelf(getattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void getattr_op_dispatch_nfsv4_ops__unparseSelf(const getattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void getfh_op_dispatch_nfsv4_ops__parseSelf(getfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void getfh_op_dispatch_nfsv4_ops__unparseSelf(const getfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void link_op_dispatch_nfsv4_ops__parseSelf(link_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void link_op_dispatch_nfsv4_ops__unparseSelf(const link_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void owner_lockt__parseSelf(owner_lockt_ *instance, PState *pstate);
static void owner_lockt__unparseSelf(const owner_lockt_ *instance, UState *ustate);
static void lockt_op_dispatch_nfsv4_ops__parseSelf(lockt_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void lockt_op_dispatch_nfsv4_ops__unparseSelf(const lockt_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void lock_stateid_locku__parseSelf(lock_stateid_locku_ *instance, PState *pstate);
static void lock_stateid_locku__unparseSelf(const lock_stateid_locku_ *instance, UState *ustate);
static void locku_op_dispatch_nfsv4_ops__parseSelf(locku_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void locku_op_dispatch_nfsv4_ops__unparseSelf(const locku_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void lock_stateid_exist_lock_owner4__parseSelf(lock_stateid_exist_lock_owner4_ *instance, PState *pstate);
static void lock_stateid_exist_lock_owner4__unparseSelf(const lock_stateid_exist_lock_owner4_ *instance, UState *ustate);
static void lock_owner_lock_dispatch_locker4__parseSelf(lock_owner_lock_dispatch_locker4_ *instance, PState *pstate);
static void lock_owner_lock_dispatch_locker4__unparseSelf(const lock_owner_lock_dispatch_locker4_ *instance, UState *ustate);
static void open_stateid_open_to_lock_owner4__parseSelf(open_stateid_open_to_lock_owner4_ *instance, PState *pstate);
static void open_stateid_open_to_lock_owner4__unparseSelf(const open_stateid_open_to_lock_owner4_ *instance, UState *ustate);
static void lock_owner_open_to_lock_owner4__parseSelf(lock_owner_open_to_lock_owner4_ *instance, PState *pstate);
static void lock_owner_open_to_lock_owner4__unparseSelf(const lock_owner_open_to_lock_owner4_ *instance, UState *ustate);
static void open_owner_lock_dispatch_locker4__parseSelf(open_owner_lock_dispatch_locker4_ *instance, PState *pstate);
static void open_owner_lock_dispatch_locker4__unparseSelf(const open_owner_lock_dispatch_locker4_ *instance, UState *ustate);
static const Error *lock_dispatch_locker4__initChoice(lock_dispatch_locker4_ *instance);
static void lock_dispatch_locker4__parseSelf(lock_dispatch_locker4_ *instance, PState *pstate);
static void lock_dispatch_locker4__unparseSelf(const lock_dispatch_locker4_ *instance, UState *ustate);
static void locker_lock__parseSelf(locker_lock_ *instance, PState *pstate);
static void locker_lock__unparseSelf(const locker_lock_ *instance, UState *ustate);
static void lock_op_dispatch_nfsv4_ops__parseSelf(lock_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void lock_op_dispatch_nfsv4_ops__unparseSelf(const lock_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void name_lookup__parseSelf(name_lookup_ *instance, PState *pstate);
static void name_lookup__unparseSelf(const name_lookup_ *instance, UState *ustate);
static void lookup_op_dispatch_nfsv4_ops__parseSelf(lookup_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void lookup_op_dispatch_nfsv4_ops__unparseSelf(const lookup_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void lookupp_op_dispatch_nfsv4_ops__parseSelf(lookupp_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void lookupp_op_dispatch_nfsv4_ops__unparseSelf(const lookupp_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void array_attrmask_fattr4_obj_attributes_nverify__parseSelf(obj_attributes_nverify_ *instance, PState *pstate);
static void array_attrmask_fattr4_obj_attributes_nverify__unparseSelf(const obj_attributes_nverify_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_obj_attributes_nverify__getArraySize(const obj_attributes_nverify_ *instance);
static void obj_attributes_nverify__parseSelf(obj_attributes_nverify_ *instance, PState *pstate);
static void obj_attributes_nverify__unparseSelf(const obj_attributes_nverify_ *instance, UState *ustate);
static void nverify_op_dispatch_nfsv4_ops__parseSelf(nverify_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void nverify_op_dispatch_nfsv4_ops__unparseSelf(const nverify_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void owner_open_owner4__parseSelf(owner_open_owner4_ *instance, PState *pstate);
static void owner_open_owner4__unparseSelf(const owner_open_owner4_ *instance, UState *ustate);
static void owner_open__parseSelf(owner_open_ *instance, PState *pstate);
static void owner_open__unparseSelf(const owner_open_ *instance, UState *ustate);
static void array_attrmask_fattr4_createattrs_create_dispatch_createhow4__parseSelf(createattrs_create_dispatch_createhow4_ *instance, PState *pstate);
static void array_attrmask_fattr4_createattrs_create_dispatch_createhow4__unparseSelf(const createattrs_create_dispatch_createhow4_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_createattrs_create_dispatch_createhow4__getArraySize(const createattrs_create_dispatch_createhow4_ *instance);
static void createattrs_create_dispatch_createhow4__parseSelf(createattrs_create_dispatch_createhow4_ *instance, PState *pstate);
static void createattrs_create_dispatch_createhow4__unparseSelf(const createattrs_create_dispatch_createhow4_ *instance, UState *ustate);
static const Error *create_dispatch_createhow4__initChoice(create_dispatch_createhow4_ *instance);
static void create_dispatch_createhow4__parseSelf(create_dispatch_createhow4_ *instance, PState *pstate);
static void create_dispatch_createhow4__unparseSelf(const create_dispatch_createhow4_ *instance, UState *ustate);
static void how_open_dispatch_openflag4__parseSelf(how_open_dispatch_openflag4_ *instance, PState *pstate);
static void how_open_dispatch_openflag4__unparseSelf(const how_open_dispatch_openflag4_ *instance, UState *ustate);
static const Error *open_dispatch_openflag4__initChoice(open_dispatch_openflag4_ *instance);
static void open_dispatch_openflag4__parseSelf(open_dispatch_openflag4_ *instance, PState *pstate);
static void open_dispatch_openflag4__unparseSelf(const open_dispatch_openflag4_ *instance, UState *ustate);
static void openhow_open__parseSelf(openhow_open_ *instance, PState *pstate);
static void openhow_open__unparseSelf(const openhow_open_ *instance, UState *ustate);
static void file_claim_dispatch_open_claim4__parseSelf(file_claim_dispatch_open_claim4_ *instance, PState *pstate);
static void file_claim_dispatch_open_claim4__unparseSelf(const file_claim_dispatch_open_claim4_ *instance, UState *ustate);
static void delegate_stateid_open_claim_delegate_cur4__parseSelf(delegate_stateid_open_claim_delegate_cur4_ *instance, PState *pstate);
static void delegate_stateid_open_claim_delegate_cur4__unparseSelf(const delegate_stateid_open_claim_delegate_cur4_ *instance, UState *ustate);
static void file_open_claim_delegate_cur4__parseSelf(file_open_claim_delegate_cur4_ *instance, PState *pstate);
static void file_open_claim_delegate_cur4__unparseSelf(const file_open_claim_delegate_cur4_ *instance, UState *ustate);
static void delegate_cur_info_claim_dispatch_open_claim4__parseSelf(delegate_cur_info_claim_dispatch_open_claim4_ *instance, PState *pstate);
static void delegate_cur_info_claim_dispatch_open_claim4__unparseSelf(const delegate_cur_info_claim_dispatch_open_claim4_ *instance, UState *ustate);
static const Error *claim_dispatch_open_claim4__initChoice(claim_dispatch_open_claim4_ *instance);
static void claim_dispatch_open_claim4__parseSelf(claim_dispatch_open_claim4_ *instance, PState *pstate);
static void claim_dispatch_open_claim4__unparseSelf(const claim_dispatch_open_claim4_ *instance, UState *ustate);
static void claim_open__parseSelf(claim_open_ *instance, PState *pstate);
static void claim_open__unparseSelf(const claim_open_ *instance, UState *ustate);
static void open_op_dispatch_nfsv4_ops__parseSelf(open_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void open_op_dispatch_nfsv4_ops__unparseSelf(const open_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void openattr_op_dispatch_nfsv4_ops__parseSelf(openattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void openattr_op_dispatch_nfsv4_ops__unparseSelf(const openattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void open_confirm_op_dispatch_nfsv4_ops__parseSelf(open_confirm_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void open_confirm_op_dispatch_nfsv4_ops__unparseSelf(const open_confirm_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void open_stateid_open_downgrade__parseSelf(open_stateid_open_downgrade_ *instance, PState *pstate);
static void open_stateid_open_downgrade__unparseSelf(const open_stateid_open_downgrade_ *instance, UState *ustate);
static void open_downgrade_op_dispatch_nfsv4_ops__parseSelf(open_downgrade_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void open_downgrade_op_dispatch_nfsv4_ops__unparseSelf(const open_downgrade_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void object_putfh__parseSelf(object_putfh_ *instance, PState *pstate);
static void object_putfh__unparseSelf(const object_putfh_ *instance, UState *ustate);
static void putfh_op_dispatch_nfsv4_ops__parseSelf(putfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void putfh_op_dispatch_nfsv4_ops__unparseSelf(const putfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void putpubfh_op_dispatch_nfsv4_ops__parseSelf(putpubfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void putpubfh_op_dispatch_nfsv4_ops__unparseSelf(const putpubfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void putrootfh_op_dispatch_nfsv4_ops__parseSelf(putrootfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void putrootfh_op_dispatch_nfsv4_ops__unparseSelf(const putrootfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void stateid_read__parseSelf(stateid_read_ *instance, PState *pstate);
static void stateid_read__unparseSelf(const stateid_read_ *instance, UState *ustate);
static void read_op_dispatch_nfsv4_ops__parseSelf(read_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void read_op_dispatch_nfsv4_ops__unparseSelf(const read_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void array_bitmap_bitmap4_attr_request_readdir__parseSelf(attr_request_readdir_ *instance, PState *pstate);
static void array_bitmap_bitmap4_attr_request_readdir__unparseSelf(const attr_request_readdir_ *instance, UState *ustate);
static size_t array_bitmap_bitmap4_attr_request_readdir__getArraySize(const attr_request_readdir_ *instance);
static void attr_request_readdir__parseSelf(attr_request_readdir_ *instance, PState *pstate);
static void attr_request_readdir__unparseSelf(const attr_request_readdir_ *instance, UState *ustate);
static void readdir_op_dispatch_nfsv4_ops__parseSelf(readdir_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void readdir_op_dispatch_nfsv4_ops__unparseSelf(const readdir_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void readlink_op_dispatch_nfsv4_ops__parseSelf(readlink_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void readlink_op_dispatch_nfsv4_ops__unparseSelf(const readlink_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void component_component4__parseSelf(component_component4_ *instance, PState *pstate);
static void component_component4__unparseSelf(const component_component4_ *instance, UState *ustate);
static void target_remove__parseSelf(target_remove_ *instance, PState *pstate);
static void target_remove__unparseSelf(const target_remove_ *instance, UState *ustate);
static void remove_op_dispatch_nfsv4_ops__parseSelf(remove_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void remove_op_dispatch_nfsv4_ops__unparseSelf(const remove_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void oldname_rename__parseSelf(oldname_rename_ *instance, PState *pstate);
static void oldname_rename__unparseSelf(const oldname_rename_ *instance, UState *ustate);
static void newname_rename__parseSelf(newname_rename_ *instance, PState *pstate);
static void newname_rename__unparseSelf(const newname_rename_ *instance, UState *ustate);
static void rename_op_dispatch_nfsv4_ops__parseSelf(rename_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void rename_op_dispatch_nfsv4_ops__unparseSelf(const rename_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void renew_op_dispatch_nfsv4_ops__parseSelf(renew_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void renew_op_dispatch_nfsv4_ops__unparseSelf(const renew_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void restorefh_op_dispatch_nfsv4_ops__parseSelf(restorefh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void restorefh_op_dispatch_nfsv4_ops__unparseSelf(const restorefh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void savefh_op_dispatch_nfsv4_ops__parseSelf(savefh_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void savefh_op_dispatch_nfsv4_ops__unparseSelf(const savefh_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void name_secinfo__parseSelf(name_secinfo_ *instance, PState *pstate);
static void name_secinfo__unparseSelf(const name_secinfo_ *instance, UState *ustate);
static void secinfo_op_dispatch_nfsv4_ops__parseSelf(secinfo_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void secinfo_op_dispatch_nfsv4_ops__unparseSelf(const secinfo_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void stateid_setattr__parseSelf(stateid_setattr_ *instance, PState *pstate);
static void stateid_setattr__unparseSelf(const stateid_setattr_ *instance, UState *ustate);
static void array_attrmask_fattr4_obj_attributes_setattr__parseSelf(obj_attributes_setattr_ *instance, PState *pstate);
static void array_attrmask_fattr4_obj_attributes_setattr__unparseSelf(const obj_attributes_setattr_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_obj_attributes_setattr__getArraySize(const obj_attributes_setattr_ *instance);
static void obj_attributes_setattr__parseSelf(obj_attributes_setattr_ *instance, PState *pstate);
static void obj_attributes_setattr__unparseSelf(const obj_attributes_setattr_ *instance, UState *ustate);
static void setattr_op_dispatch_nfsv4_ops__parseSelf(setattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void setattr_op_dispatch_nfsv4_ops__unparseSelf(const setattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void setclientid_op_dispatch_nfsv4_ops__parseSelf(setclientid_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void setclientid_op_dispatch_nfsv4_ops__unparseSelf(const setclientid_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void setclientid_confirm_op_dispatch_nfsv4_ops__parseSelf(setclientid_confirm_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void setclientid_confirm_op_dispatch_nfsv4_ops__unparseSelf(const setclientid_confirm_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void array_attrmask_fattr4_obj_attributes_verify__parseSelf(obj_attributes_verify_ *instance, PState *pstate);
static void array_attrmask_fattr4_obj_attributes_verify__unparseSelf(const obj_attributes_verify_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_obj_attributes_verify__getArraySize(const obj_attributes_verify_ *instance);
static void obj_attributes_verify__parseSelf(obj_attributes_verify_ *instance, PState *pstate);
static void obj_attributes_verify__unparseSelf(const obj_attributes_verify_ *instance, UState *ustate);
static void verify_op_dispatch_nfsv4_ops__parseSelf(verify_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void verify_op_dispatch_nfsv4_ops__unparseSelf(const verify_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void stateid_write__parseSelf(stateid_write_ *instance, PState *pstate);
static void stateid_write__unparseSelf(const stateid_write_ *instance, UState *ustate);
static void data_write__parseSelf(data_write_ *instance, PState *pstate);
static void data_write__unparseSelf(const data_write_ *instance, UState *ustate);
static void write_op_dispatch_nfsv4_ops__parseSelf(write_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void write_op_dispatch_nfsv4_ops__unparseSelf(const write_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void release_lockowner_op_dispatch_nfsv4_ops__parseSelf(release_lockowner_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void release_lockowner_op_dispatch_nfsv4_ops__unparseSelf(const release_lockowner_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void backchannel_ctl_op_dispatch_nfsv4_ops__parseSelf(backchannel_ctl_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void backchannel_ctl_op_dispatch_nfsv4_ops__unparseSelf(const backchannel_ctl_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void bind_conn_to_session_op_dispatch_nfsv4_ops__parseSelf(bind_conn_to_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void bind_conn_to_session_op_dispatch_nfsv4_ops__unparseSelf(const bind_conn_to_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void co_ownerid_client_owner4__parseSelf(co_ownerid_client_owner4_ *instance, PState *pstate);
static void co_ownerid_client_owner4__unparseSelf(const co_ownerid_client_owner4_ *instance, UState *ustate);
static void eia_clientowner_exchange_id__parseSelf(eia_clientowner_exchange_id_ *instance, PState *pstate);
static void eia_clientowner_exchange_id__unparseSelf(const eia_clientowner_exchange_id_ *instance, UState *ustate);
static void spa_void_protect_dispatch_state_protect4_a__parseSelf(spa_void_protect_dispatch_state_protect4_a_ *instance, PState *pstate);
static void spa_void_protect_dispatch_state_protect4_a__unparseSelf(const spa_void_protect_dispatch_state_protect4_a_ *instance, UState *ustate);
static void spa_mach_ops_protect_dispatch_state_protect4_a__parseSelf(spa_mach_ops_protect_dispatch_state_protect4_a_ *instance, PState *pstate);
static void spa_mach_ops_protect_dispatch_state_protect4_a__unparseSelf(const spa_mach_ops_protect_dispatch_state_protect4_a_ *instance, UState *ustate);
static void spa_ssv_params_protect_dispatch_state_protect4_a__parseSelf(spa_ssv_params_protect_dispatch_state_protect4_a_ *instance, PState *pstate);
static void spa_ssv_params_protect_dispatch_state_protect4_a__unparseSelf(const spa_ssv_params_protect_dispatch_state_protect4_a_ *instance, UState *ustate);
static const Error *protect_dispatch_state_protect4_a__initChoice(protect_dispatch_state_protect4_a_ *instance);
static void protect_dispatch_state_protect4_a__parseSelf(protect_dispatch_state_protect4_a_ *instance, PState *pstate);
static void protect_dispatch_state_protect4_a__unparseSelf(const protect_dispatch_state_protect4_a_ *instance, UState *ustate);
static void eia_state_protect_exchange_id__parseSelf(eia_state_protect_exchange_id_ *instance, PState *pstate);
static void eia_state_protect_exchange_id__unparseSelf(const eia_state_protect_exchange_id_ *instance, UState *ustate);
static void nii_domain_nfs_impl_id4__parseSelf(nii_domain_nfs_impl_id4_ *instance, PState *pstate);
static void nii_domain_nfs_impl_id4__unparseSelf(const nii_domain_nfs_impl_id4_ *instance, UState *ustate);
static void nii_name_nfs_impl_id4__parseSelf(nii_name_nfs_impl_id4_ *instance, PState *pstate);
static void nii_name_nfs_impl_id4__unparseSelf(const nii_name_nfs_impl_id4_ *instance, UState *ustate);
static void nii_date_nfs_impl_id4__parseSelf(nii_date_nfs_impl_id4_ *instance, PState *pstate);
static void nii_date_nfs_impl_id4__unparseSelf(const nii_date_nfs_impl_id4_ *instance, UState *ustate);
static void eia_client_impl_id_exchange_id__parseSelf(eia_client_impl_id_exchange_id_ *instance, PState *pstate);
static void eia_client_impl_id_exchange_id__unparseSelf(const eia_client_impl_id_exchange_id_ *instance, UState *ustate);
static void exchange_id_op_dispatch_nfsv4_ops__parseSelf(exchange_id_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void exchange_id_op_dispatch_nfsv4_ops__unparseSelf(const exchange_id_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void csa_fore_chan_attrs_create_session__parseSelf(csa_fore_chan_attrs_create_session_ *instance, PState *pstate);
static void csa_fore_chan_attrs_create_session__unparseSelf(const csa_fore_chan_attrs_create_session_ *instance, UState *ustate);
static void csa_back_chan_attrs_create_session__parseSelf(csa_back_chan_attrs_create_session_ *instance, PState *pstate);
static void csa_back_chan_attrs_create_session__unparseSelf(const csa_back_chan_attrs_create_session_ *instance, UState *ustate);
static void auth_void_callback_dispatch_callback_sec_parms4__parseSelf(auth_void_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate);
static void auth_void_callback_dispatch_callback_sec_parms4__unparseSelf(const auth_void_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate);
static void machinename_authsys_parms__parseSelf(machinename_authsys_parms_ *instance, PState *pstate);
static void machinename_authsys_parms__unparseSelf(const machinename_authsys_parms_ *instance, UState *ustate);
static void gids_authsys_parms__parseSelf(gids_authsys_parms_ *instance, PState *pstate);
static void gids_authsys_parms__unparseSelf(const gids_authsys_parms_ *instance, UState *ustate);
static void cbsp_sys_cred_callback_dispatch_callback_sec_parms4__parseSelf(cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate);
static void cbsp_sys_cred_callback_dispatch_callback_sec_parms4__unparseSelf(const cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate);
static void gcbp_handle_from_server_gss_cb_handles4__parseSelf(gcbp_handle_from_server_gss_cb_handles4_ *instance, PState *pstate);
static void gcbp_handle_from_server_gss_cb_handles4__unparseSelf(const gcbp_handle_from_server_gss_cb_handles4_ *instance, UState *ustate);
static void gcbp_handle_from_client_gss_cb_handles4__parseSelf(gcbp_handle_from_client_gss_cb_handles4_ *instance, PState *pstate);
static void gcbp_handle_from_client_gss_cb_handles4__unparseSelf(const gcbp_handle_from_client_gss_cb_handles4_ *instance, UState *ustate);
static void cbsp_gss_handles_callback_dispatch_callback_sec_parms4__parseSelf(cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate);
static void cbsp_gss_handles_callback_dispatch_callback_sec_parms4__unparseSelf(const cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate);
static const Error *callback_dispatch_callback_sec_parms4__initChoice(callback_dispatch_callback_sec_parms4_ *instance);
static void callback_dispatch_callback_sec_parms4__parseSelf(callback_dispatch_callback_sec_parms4_ *instance, PState *pstate);
static void callback_dispatch_callback_sec_parms4__unparseSelf(const callback_dispatch_callback_sec_parms4_ *instance, UState *ustate);
static void csa_sec_parms_create_session__parseSelf(csa_sec_parms_create_session_ *instance, PState *pstate);
static void csa_sec_parms_create_session__unparseSelf(const csa_sec_parms_create_session_ *instance, UState *ustate);
static void create_session_op_dispatch_nfsv4_ops__parseSelf(create_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void create_session_op_dispatch_nfsv4_ops__unparseSelf(const create_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void destroy_session_op_dispatch_nfsv4_ops__parseSelf(destroy_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void destroy_session_op_dispatch_nfsv4_ops__unparseSelf(const destroy_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void fsa_stateid_free_stateid__parseSelf(fsa_stateid_free_stateid_ *instance, PState *pstate);
static void fsa_stateid_free_stateid__unparseSelf(const fsa_stateid_free_stateid_ *instance, UState *ustate);
static void free_stateid_op_dispatch_nfsv4_ops__parseSelf(free_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void free_stateid_op_dispatch_nfsv4_ops__unparseSelf(const free_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void get_dir_delegation_op_dispatch_nfsv4_ops__parseSelf(get_dir_delegation_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void get_dir_delegation_op_dispatch_nfsv4_ops__unparseSelf(const get_dir_delegation_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void getdeviceinfo_op_dispatch_nfsv4_ops__parseSelf(getdeviceinfo_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void getdeviceinfo_op_dispatch_nfsv4_ops__unparseSelf(const getdeviceinfo_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void getdevicelist_op_dispatch_nfsv4_ops__parseSelf(getdevicelist_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void getdevicelist_op_dispatch_nfsv4_ops__unparseSelf(const getdevicelist_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void layoutcommit_op_dispatch_nfsv4_ops__parseSelf(layoutcommit_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void layoutcommit_op_dispatch_nfsv4_ops__unparseSelf(const layoutcommit_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void layoutget_op_dispatch_nfsv4_ops__parseSelf(layoutget_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void layoutget_op_dispatch_nfsv4_ops__unparseSelf(const layoutget_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void stateid_layoutreturn_file4__parseSelf(stateid_layoutreturn_file4_ *instance, PState *pstate);
static void stateid_layoutreturn_file4__unparseSelf(const stateid_layoutreturn_file4_ *instance, UState *ustate);
static void body_layoutreturn_file4__parseSelf(body_layoutreturn_file4_ *instance, PState *pstate);
static void body_layoutreturn_file4__unparseSelf(const body_layoutreturn_file4_ *instance, UState *ustate);
static void filelayout_layoutreturn4sw__parseSelf(filelayout_layoutreturn4sw_ *instance, PState *pstate);
static void filelayout_layoutreturn4sw__unparseSelf(const filelayout_layoutreturn4sw_ *instance, UState *ustate);
static void br2_layoutreturn4sw__parseSelf(br2_layoutreturn4sw_ *instance, PState *pstate);
static void br2_layoutreturn4sw__unparseSelf(const br2_layoutreturn4sw_ *instance, UState *ustate);
static void br3_layoutreturn4sw__parseSelf(br3_layoutreturn4sw_ *instance, PState *pstate);
static void br3_layoutreturn4sw__unparseSelf(const br3_layoutreturn4sw_ *instance, UState *ustate);
static void lora_layoutreturn_layoutreturn__parseSelf(lora_layoutreturn_layoutreturn_ *instance, PState *pstate);
static void lora_layoutreturn_layoutreturn__unparseSelf(const lora_layoutreturn_layoutreturn_ *instance, UState *ustate);
static void layoutreturn_op_dispatch_nfsv4_ops__parseSelf(layoutreturn_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void layoutreturn_op_dispatch_nfsv4_ops__unparseSelf(const layoutreturn_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void secinfo_no_name_op_dispatch_nfsv4_ops__parseSelf(secinfo_no_name_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void secinfo_no_name_op_dispatch_nfsv4_ops__unparseSelf(const secinfo_no_name_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void sequence_op_dispatch_nfsv4_ops__parseSelf(sequence_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void sequence_op_dispatch_nfsv4_ops__unparseSelf(const sequence_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void set_ssv_op_dispatch_nfsv4_ops__parseSelf(set_ssv_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void set_ssv_op_dispatch_nfsv4_ops__unparseSelf(const set_ssv_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void ts_stateids_test_stateid__parseSelf(ts_stateids_test_stateid_ *instance, PState *pstate);
static void ts_stateids_test_stateid__unparseSelf(const ts_stateids_test_stateid_ *instance, UState *ustate);
static void array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__parseSelf(test_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__unparseSelf(const test_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static size_t array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__getArraySize(const test_stateid_op_dispatch_nfsv4_ops_ *instance);
static void test_stateid_op_dispatch_nfsv4_ops__parseSelf(test_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void test_stateid_op_dispatch_nfsv4_ops__unparseSelf(const test_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void want_delegation_op_dispatch_nfsv4_ops__parseSelf(want_delegation_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void want_delegation_op_dispatch_nfsv4_ops__unparseSelf(const want_delegation_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void destroy_clientid_op_dispatch_nfsv4_ops__parseSelf(destroy_clientid_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void destroy_clientid_op_dispatch_nfsv4_ops__unparseSelf(const destroy_clientid_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void reclaim_complete_op_dispatch_nfsv4_ops__parseSelf(reclaim_complete_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void reclaim_complete_op_dispatch_nfsv4_ops__unparseSelf(const reclaim_complete_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void allocate_op_dispatch_nfsv4_ops__parseSelf(allocate_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void allocate_op_dispatch_nfsv4_ops__unparseSelf(const allocate_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void copy_op_dispatch_nfsv4_ops__parseSelf(copy_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void copy_op_dispatch_nfsv4_ops__unparseSelf(const copy_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void copy_notify_op_dispatch_nfsv4_ops__parseSelf(copy_notify_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void copy_notify_op_dispatch_nfsv4_ops__unparseSelf(const copy_notify_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void deallocate_op_dispatch_nfsv4_ops__parseSelf(deallocate_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void deallocate_op_dispatch_nfsv4_ops__unparseSelf(const deallocate_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void io_advise_op_dispatch_nfsv4_ops__parseSelf(io_advise_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void io_advise_op_dispatch_nfsv4_ops__unparseSelf(const io_advise_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void layouterror_op_dispatch_nfsv4_ops__parseSelf(layouterror_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void layouterror_op_dispatch_nfsv4_ops__unparseSelf(const layouterror_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void layoutstats_op_dispatch_nfsv4_ops__parseSelf(layoutstats_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void layoutstats_op_dispatch_nfsv4_ops__unparseSelf(const layoutstats_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void offload_cancel_op_dispatch_nfsv4_ops__parseSelf(offload_cancel_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void offload_cancel_op_dispatch_nfsv4_ops__unparseSelf(const offload_cancel_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void offload_status_op_dispatch_nfsv4_ops__parseSelf(offload_status_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void offload_status_op_dispatch_nfsv4_ops__unparseSelf(const offload_status_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void read_plus_op_dispatch_nfsv4_ops__parseSelf(read_plus_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void read_plus_op_dispatch_nfsv4_ops__unparseSelf(const read_plus_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void seek_op_dispatch_nfsv4_ops__parseSelf(seek_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void seek_op_dispatch_nfsv4_ops__unparseSelf(const seek_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void write_same_op_dispatch_nfsv4_ops__parseSelf(write_same_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void write_same_op_dispatch_nfsv4_ops__unparseSelf(const write_same_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void clone_op_dispatch_nfsv4_ops__parseSelf(clone_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void clone_op_dispatch_nfsv4_ops__unparseSelf(const clone_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void illegal_op_dispatch_nfsv4_ops__parseSelf(illegal_op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void illegal_op_dispatch_nfsv4_ops__unparseSelf(const illegal_op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static const Error *op_dispatch_nfsv4_ops__initChoice(op_dispatch_nfsv4_ops_ *instance);
static void op_dispatch_nfsv4_ops__parseSelf(op_dispatch_nfsv4_ops_ *instance, PState *pstate);
static void op_dispatch_nfsv4_ops__unparseSelf(const op_dispatch_nfsv4_ops_ *instance, UState *ustate);
static void nfscmd_compound__parseSelf(nfscmd_compound_ *instance, PState *pstate);
static void nfscmd_compound__unparseSelf(const nfscmd_compound_ *instance, UState *ustate);
static void array_nfscmd_compound_compound_nfsv4__parseSelf(compound_nfsv4_ *instance, PState *pstate);
static void array_nfscmd_compound_compound_nfsv4__unparseSelf(const compound_nfsv4_ *instance, UState *ustate);
static size_t array_nfscmd_compound_compound_nfsv4__getArraySize(const compound_nfsv4_ *instance);
static void compound_nfsv4__parseSelf(compound_nfsv4_ *instance, PState *pstate);
static void compound_nfsv4__unparseSelf(const compound_nfsv4_ *instance, UState *ustate);
static const Error *nfsv4_call_dispatch_call_body__initChoice(nfsv4_call_dispatch_call_body_ *instance);
static void nfsv4_call_dispatch_call_body__parseSelf(nfsv4_call_dispatch_call_body_ *instance, PState *pstate);
static void nfsv4_call_dispatch_call_body__unparseSelf(const nfsv4_call_dispatch_call_body_ *instance, UState *ustate);
static const Error *call_dispatch_call_body__initChoice(call_dispatch_call_body_ *instance);
static void call_dispatch_call_body__parseSelf(call_dispatch_call_body_ *instance, PState *pstate);
static void call_dispatch_call_body__unparseSelf(const call_dispatch_call_body_ *instance, UState *ustate);
static void call_body_entry_dispatch_entry_point__parseSelf(call_body_entry_dispatch_entry_point_ *instance, PState *pstate);
static void call_body_entry_dispatch_entry_point__unparseSelf(const call_body_entry_dispatch_entry_point_ *instance, UState *ustate);
static void verf_accept_reply__parseSelf(verf_accept_reply_ *instance, PState *pstate);
static void verf_accept_reply__unparseSelf(const verf_accept_reply_ *instance, UState *ustate);
static void tag_nfsv4reply__parseSelf(tag_nfsv4reply_ *instance, PState *pstate);
static void tag_nfsv4reply__unparseSelf(const tag_nfsv4reply_ *instance, UState *ustate);
static void access_op_dispatch_v4reply_ops__parseSelf(access_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void access_op_dispatch_v4reply_ops__unparseSelf(const access_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void close_op_dispatch_v4reply_ops__parseSelf(close_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void close_op_dispatch_v4reply_ops__unparseSelf(const close_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void array_attrmask_fattr4_obj_attributes_getattr__parseSelf(obj_attributes_getattr_ *instance, PState *pstate);
static void array_attrmask_fattr4_obj_attributes_getattr__unparseSelf(const obj_attributes_getattr_ *instance, UState *ustate);
static size_t array_attrmask_fattr4_obj_attributes_getattr__getArraySize(const obj_attributes_getattr_ *instance);
static void obj_attributes_getattr__parseSelf(obj_attributes_getattr_ *instance, PState *pstate);
static void obj_attributes_getattr__unparseSelf(const obj_attributes_getattr_ *instance, UState *ustate);
static void getattr_op_dispatch_v4reply_ops__parseSelf(getattr_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void getattr_op_dispatch_v4reply_ops__unparseSelf(const getattr_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void nfs_fh4_getfh__parseSelf(nfs_fh4_getfh_ *instance, PState *pstate);
static void nfs_fh4_getfh__unparseSelf(const nfs_fh4_getfh_ *instance, UState *ustate);
static void getfh_op_dispatch_v4reply_ops__parseSelf(getfh_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void getfh_op_dispatch_v4reply_ops__unparseSelf(const getfh_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void lookup_op_dispatch_v4reply_ops__parseSelf(lookup_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void lookup_op_dispatch_v4reply_ops__unparseSelf(const lookup_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void stateid_open4resok__parseSelf(stateid_open4resok_ *instance, PState *pstate);
static void stateid_open4resok__unparseSelf(const stateid_open4resok_ *instance, UState *ustate);
static void cinfo_open4resok__parseSelf(cinfo_open4resok_ *instance, PState *pstate);
static void cinfo_open4resok__unparseSelf(const cinfo_open4resok_ *instance, UState *ustate);
static void array_bitmap_bitmap4_attrset_open4resok__parseSelf(attrset_open4resok_ *instance, PState *pstate);
static void array_bitmap_bitmap4_attrset_open4resok__unparseSelf(const attrset_open4resok_ *instance, UState *ustate);
static size_t array_bitmap_bitmap4_attrset_open4resok__getArraySize(const attrset_open4resok_ *instance);
static void attrset_open4resok__parseSelf(attrset_open4resok_ *instance, PState *pstate);
static void attrset_open4resok__unparseSelf(const attrset_open4resok_ *instance, UState *ustate);
static void stateid_open_read_delegation4__parseSelf(stateid_open_read_delegation4_ *instance, PState *pstate);
static void stateid_open_read_delegation4__unparseSelf(const stateid_open_read_delegation4_ *instance, UState *ustate);
static void who_nfsace4__parseSelf(who_nfsace4_ *instance, PState *pstate);
static void who_nfsace4__unparseSelf(const who_nfsace4_ *instance, UState *ustate);
static void permissions_open_read_delegation4__parseSelf(permissions_open_read_delegation4_ *instance, PState *pstate);
static void permissions_open_read_delegation4__unparseSelf(const permissions_open_read_delegation4_ *instance, UState *ustate);
static void read_open_delegation4__parseSelf(read_open_delegation4_ *instance, PState *pstate);
static void read_open_delegation4__unparseSelf(const read_open_delegation4_ *instance, UState *ustate);
static void stateid_open_write_delegation4__parseSelf(stateid_open_write_delegation4_ *instance, PState *pstate);
static void stateid_open_write_delegation4__unparseSelf(const stateid_open_write_delegation4_ *instance, UState *ustate);
static void mod_blocks_nfs_space_limit4__parseSelf(mod_blocks_nfs_space_limit4_ *instance, PState *pstate);
static void mod_blocks_nfs_space_limit4__unparseSelf(const mod_blocks_nfs_space_limit4_ *instance, UState *ustate);
static void space_limit_open_write_delegation4__parseSelf(space_limit_open_write_delegation4_ *instance, PState *pstate);
static void space_limit_open_write_delegation4__unparseSelf(const space_limit_open_write_delegation4_ *instance, UState *ustate);
static void permissions_open_write_delegation4__parseSelf(permissions_open_write_delegation4_ *instance, PState *pstate);
static void permissions_open_write_delegation4__unparseSelf(const permissions_open_write_delegation4_ *instance, UState *ustate);
static void write_open_delegation4__parseSelf(write_open_delegation4_ *instance, PState *pstate);
static void write_open_delegation4__unparseSelf(const write_open_delegation4_ *instance, UState *ustate);
static void ext_open_delegation4__parseSelf(ext_open_delegation4_ *instance, PState *pstate);
static void ext_open_delegation4__unparseSelf(const ext_open_delegation4_ *instance, UState *ustate);
static void delegation_open4resok__parseSelf(delegation_open4resok_ *instance, PState *pstate);
static void delegation_open4resok__unparseSelf(const delegation_open4resok_ *instance, UState *ustate);
static void resok4_open__parseSelf(resok4_open_ *instance, PState *pstate);
static void resok4_open__unparseSelf(const resok4_open_ *instance, UState *ustate);
static void open_op_dispatch_v4reply_ops__parseSelf(open_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void open_op_dispatch_v4reply_ops__unparseSelf(const open_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void putfh_op_dispatch_v4reply_ops__parseSelf(putfh_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void putfh_op_dispatch_v4reply_ops__unparseSelf(const putfh_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void putpubfh_op_dispatch_v4reply_ops__parseSelf(putpubfh_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void putpubfh_op_dispatch_v4reply_ops__unparseSelf(const putpubfh_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void putrootfh_op_dispatch_v4reply_ops__parseSelf(putrootfh_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void putrootfh_op_dispatch_v4reply_ops__unparseSelf(const putrootfh_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void data_read__parseSelf(data_read_ *instance, PState *pstate);
static void data_read__unparseSelf(const data_read_ *instance, UState *ustate);
static void read_op_dispatch_v4reply_ops__parseSelf(read_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void read_op_dispatch_v4reply_ops__unparseSelf(const read_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void readdir_op_dispatch_v4reply_ops__parseSelf(readdir_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void readdir_op_dispatch_v4reply_ops__unparseSelf(const readdir_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void write_op_dispatch_v4reply_ops__parseSelf(write_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void write_op_dispatch_v4reply_ops__unparseSelf(const write_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void eir_state_protect_exchange_id__parseSelf(eir_state_protect_exchange_id_ *instance, PState *pstate);
static void eir_state_protect_exchange_id__unparseSelf(const eir_state_protect_exchange_id_ *instance, UState *ustate);
static void eir_server_owner_exchange_id__parseSelf(eir_server_owner_exchange_id_ *instance, PState *pstate);
static void eir_server_owner_exchange_id__unparseSelf(const eir_server_owner_exchange_id_ *instance, UState *ustate);
static void eir_server_scope_exchange_id__parseSelf(eir_server_scope_exchange_id_ *instance, PState *pstate);
static void eir_server_scope_exchange_id__unparseSelf(const eir_server_scope_exchange_id_ *instance, UState *ustate);
static void eir_server_impl_id_exchange_id__parseSelf(eir_server_impl_id_exchange_id_ *instance, PState *pstate);
static void eir_server_impl_id_exchange_id__unparseSelf(const eir_server_impl_id_exchange_id_ *instance, UState *ustate);
static void exchange_id_op_dispatch_v4reply_ops__parseSelf(exchange_id_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void exchange_id_op_dispatch_v4reply_ops__unparseSelf(const exchange_id_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void csr_fore_chan_attrs_create_session__parseSelf(csr_fore_chan_attrs_create_session_ *instance, PState *pstate);
static void csr_fore_chan_attrs_create_session__unparseSelf(const csr_fore_chan_attrs_create_session_ *instance, UState *ustate);
static void csr_back_chan_attrs_create_session__parseSelf(csr_back_chan_attrs_create_session_ *instance, PState *pstate);
static void csr_back_chan_attrs_create_session__unparseSelf(const csr_back_chan_attrs_create_session_ *instance, UState *ustate);
static void create_session_op_dispatch_v4reply_ops__parseSelf(create_session_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void create_session_op_dispatch_v4reply_ops__unparseSelf(const create_session_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void destroy_session_op_dispatch_v4reply_ops__parseSelf(destroy_session_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void destroy_session_op_dispatch_v4reply_ops__unparseSelf(const destroy_session_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void layoutreturn_op_dispatch_v4reply_ops__parseSelf(layoutreturn_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void layoutreturn_op_dispatch_v4reply_ops__unparseSelf(const layoutreturn_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void oid_rpcsec_gss_info__parseSelf(oid_rpcsec_gss_info_ *instance, PState *pstate);
static void oid_rpcsec_gss_info__unparseSelf(const oid_rpcsec_gss_info_ *instance, UState *ustate);
static void gss_info_secinfo4_switch__parseSelf(gss_info_secinfo4_switch_ *instance, PState *pstate);
static void gss_info_secinfo4_switch__unparseSelf(const gss_info_secinfo4_switch_ *instance, UState *ustate);
static void sec_type_secinfo_no_name__parseSelf(sec_type_secinfo_no_name_ *instance, PState *pstate);
static void sec_type_secinfo_no_name__unparseSelf(const sec_type_secinfo_no_name_ *instance, UState *ustate);
static void array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static size_t array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__getArraySize(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance);
static void secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void sequence_op_dispatch_v4reply_ops__parseSelf(sequence_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void sequence_op_dispatch_v4reply_ops__unparseSelf(const sequence_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void destroy_clientid_op_dispatch_v4reply_ops__parseSelf(destroy_clientid_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void destroy_clientid_op_dispatch_v4reply_ops__unparseSelf(const destroy_clientid_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void reclaim_complete_op_dispatch_v4reply_ops__parseSelf(reclaim_complete_op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void reclaim_complete_op_dispatch_v4reply_ops__unparseSelf(const reclaim_complete_op_dispatch_v4reply_ops_ *instance, UState *ustate);
static const Error *op_dispatch_v4reply_ops__initChoice(op_dispatch_v4reply_ops_ *instance);
static void op_dispatch_v4reply_ops__parseSelf(op_dispatch_v4reply_ops_ *instance, PState *pstate);
static void op_dispatch_v4reply_ops__unparseSelf(const op_dispatch_v4reply_ops_ *instance, UState *ustate);
static void nfscmd_nfsv4reply__parseSelf(nfscmd_nfsv4reply_ *instance, PState *pstate);
static void nfscmd_nfsv4reply__unparseSelf(const nfscmd_nfsv4reply_ *instance, UState *ustate);
static void array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__parseSelf(nfsv4_accept_dispatch_accept_reply_ *instance, PState *pstate);
static void array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__unparseSelf(const nfsv4_accept_dispatch_accept_reply_ *instance, UState *ustate);
static size_t array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__getArraySize(const nfsv4_accept_dispatch_accept_reply_ *instance);
static void nfsv4_accept_dispatch_accept_reply__parseSelf(nfsv4_accept_dispatch_accept_reply_ *instance, PState *pstate);
static void nfsv4_accept_dispatch_accept_reply__unparseSelf(const nfsv4_accept_dispatch_accept_reply_ *instance, UState *ustate);
static const Error *accept_dispatch_accept_reply__initChoice(accept_dispatch_accept_reply_ *instance);
static void accept_dispatch_accept_reply__parseSelf(accept_dispatch_accept_reply_ *instance, PState *pstate);
static void accept_dispatch_accept_reply__unparseSelf(const accept_dispatch_accept_reply_ *instance, UState *ustate);
static void accept_reply_reply_dispatch_reply_body__parseSelf(accept_reply_reply_dispatch_reply_body_ *instance, PState *pstate);
static void accept_reply_reply_dispatch_reply_body__unparseSelf(const accept_reply_reply_dispatch_reply_body_ *instance, UState *ustate);
static void rpc_mismatch_reject_dispatch_reject_reply__parseSelf(rpc_mismatch_reject_dispatch_reject_reply_ *instance, PState *pstate);
static void rpc_mismatch_reject_dispatch_reject_reply__unparseSelf(const rpc_mismatch_reject_dispatch_reject_reply_ *instance, UState *ustate);
static void auth_error_reject_dispatch_reject_reply__parseSelf(auth_error_reject_dispatch_reject_reply_ *instance, PState *pstate);
static void auth_error_reject_dispatch_reject_reply__unparseSelf(const auth_error_reject_dispatch_reject_reply_ *instance, UState *ustate);
static const Error *reject_dispatch_reject_reply__initChoice(reject_dispatch_reject_reply_ *instance);
static void reject_dispatch_reject_reply__parseSelf(reject_dispatch_reject_reply_ *instance, PState *pstate);
static void reject_dispatch_reject_reply__unparseSelf(const reject_dispatch_reject_reply_ *instance, UState *ustate);
static void reject_reply_reply_dispatch_reply_body__parseSelf(reject_reply_reply_dispatch_reply_body_ *instance, PState *pstate);
static void reject_reply_reply_dispatch_reply_body__unparseSelf(const reject_reply_reply_dispatch_reply_body_ *instance, UState *ustate);
static const Error *reply_dispatch_reply_body__initChoice(reply_dispatch_reply_body_ *instance);
static void reply_dispatch_reply_body__parseSelf(reply_dispatch_reply_body_ *instance, PState *pstate);
static void reply_dispatch_reply_body__unparseSelf(const reply_dispatch_reply_body_ *instance, UState *ustate);
static void reply_body_entry_dispatch_entry_point__parseSelf(reply_body_entry_dispatch_entry_point_ *instance, PState *pstate);
static void reply_body_entry_dispatch_entry_point__unparseSelf(const reply_body_entry_dispatch_entry_point_ *instance, UState *ustate);
static const Error *entry_dispatch_entry_point__initChoice(entry_dispatch_entry_point_ *instance);
static void entry_dispatch_entry_point__parseSelf(entry_dispatch_entry_point_ *instance, PState *pstate);
static void entry_dispatch_entry_point__unparseSelf(const entry_dispatch_entry_point_ *instance, UState *ustate);
static void Request_RqstRply__parseSelf(Request_RqstRply_ *instance, PState *pstate);
static void Request_RqstRply__unparseSelf(const Request_RqstRply_ *instance, UState *ustate);
static void Reply_RqstRply__parseSelf(Reply_RqstRply_ *instance, PState *pstate);
static void Reply_RqstRply__unparseSelf(const Reply_RqstRply_ *instance, UState *ustate);
static void RqstRply__parseSelf(RqstRply_ *instance, PState *pstate);
static void RqstRply__unparseSelf(const RqstRply_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD fragmentIndicator_fragmentType_ERD = {
    {
        NULL, // namedQName.prefix
        "fragmentIndicator", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD dataSize_fragmentType_ERD = {
    {
        NULL, // namedQName.prefix
        "dataSize", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const recfragment_entry_point_ recfragment_entry_point__compute_offsets;

static const size_t recfragment_entry_point__childrenOffsets[2] = {
    (const char *)&recfragment_entry_point__compute_offsets.fragmentIndicator - (const char *)&recfragment_entry_point__compute_offsets,
    (const char *)&recfragment_entry_point__compute_offsets.dataSize - (const char *)&recfragment_entry_point__compute_offsets
};

static const ERD *const recfragment_entry_point__childrenERDs[2] = {
    &fragmentIndicator_fragmentType_ERD,
    &dataSize_fragmentType_ERD
};

static const ERD recfragment_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "recfragment", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    recfragment_entry_point__childrenOffsets,
    recfragment_entry_point__childrenERDs,
    (ERDParseSelf)&recfragment_entry_point__parseSelf,
    (ERDUnparseSelf)&recfragment_entry_point__unparseSelf,
    {.initChoice = NULL}
};

static const ERD xid_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "xid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD mtype_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "mtype", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_entry_dispatch_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD rpcvers_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "rpcvers", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD prog_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "prog", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD vers_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "vers", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD proc_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "proc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD auth_type_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_auth_dispatch_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD opaque_opaque_ERD = {
    {
        NULL, // namedQName.prefix
        "opaque", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const authlen_authnone_ authlen_authnone__compute_offsets;

static const size_t authlen_authnone__childrenOffsets[1] = {
    (const char *)&authlen_authnone__compute_offsets.opaque - (const char *)&authlen_authnone__compute_offsets
};

static const ERD *const authlen_authnone__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD authlen_authnone_ERD = {
    {
        NULL, // namedQName.prefix
        "authlen", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    authlen_authnone__childrenOffsets,
    authlen_authnone__childrenERDs,
    (ERDParseSelf)&authlen_authnone__parseSelf,
    (ERDUnparseSelf)&authlen_authnone__unparseSelf,
    {.initChoice = NULL}
};

static const auth_none_auth_dispatch_opaque_auth_ auth_none_auth_dispatch_opaque_auth__compute_offsets;

static const size_t auth_none_auth_dispatch_opaque_auth__childrenOffsets[1] = {
    (const char *)&auth_none_auth_dispatch_opaque_auth__compute_offsets.authlen - (const char *)&auth_none_auth_dispatch_opaque_auth__compute_offsets
};

static const ERD *const auth_none_auth_dispatch_opaque_auth__childrenERDs[1] = {
    &authlen_authnone_ERD
};

static const ERD auth_none_auth_dispatch_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_none", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    auth_none_auth_dispatch_opaque_auth__childrenOffsets,
    auth_none_auth_dispatch_opaque_auth__childrenERDs,
    (ERDParseSelf)&auth_none_auth_dispatch_opaque_auth__parseSelf,
    (ERDUnparseSelf)&auth_none_auth_dispatch_opaque_auth__unparseSelf,
    {.initChoice = NULL}
};

static const ERD authlen_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "authlen", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD stamp_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "stamp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD strValue_string_ERD = {
    {
        NULL, // namedQName.prefix
        "strValue", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const machineName_authunix_ machineName_authunix__compute_offsets;

static const size_t machineName_authunix__childrenOffsets[1] = {
    (const char *)&machineName_authunix__compute_offsets.strValue - (const char *)&machineName_authunix__compute_offsets
};

static const ERD *const machineName_authunix__childrenERDs[1] = {
    &strValue_string_ERD
};

static const ERD machineName_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "machineName", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    machineName_authunix__childrenOffsets,
    machineName_authunix__childrenERDs,
    (ERDParseSelf)&machineName_authunix__parseSelf,
    (ERDUnparseSelf)&machineName_authunix__unparseSelf,
    {.initChoice = NULL}
};

static const ERD uid_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "uid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD gid_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "gid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD auxGIDElements_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "auxGIDElements", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD GIDValues_authunix_ERD = {
    {
        NULL, // namedQName.prefix
        "GIDValues", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const auth_unix_auth_dispatch_opaque_auth_ array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__compute_offsets;

static const size_t array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__childrenOffsets[1] = {
    (const char *)&array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__compute_offsets.GIDValues[1] - (const char *)&array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__compute_offsets.GIDValues[0]
};

static const ERD *const array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__childrenERDs[1] = {
    &GIDValues_authunix_ERD
};

static const ERD array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "GIDValues", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__childrenOffsets,
    array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__childrenERDs,
    (ERDParseSelf)&array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__parseSelf,
    (ERDUnparseSelf)&array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__unparseSelf,
    {.getArraySize = (GetArraySize)&array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__getArraySize}
};

static const auth_unix_auth_dispatch_opaque_auth_ auth_unix_auth_dispatch_opaque_auth__compute_offsets;

static const size_t auth_unix_auth_dispatch_opaque_auth__childrenOffsets[7] = {
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.authlen - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.stamp - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.machineName - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.uid - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.gid - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.auxGIDElements - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets.GIDValues[0] - (const char *)&auth_unix_auth_dispatch_opaque_auth__compute_offsets
};

static const ERD *const auth_unix_auth_dispatch_opaque_auth__childrenERDs[7] = {
    &authlen_authunix_ERD,
    &stamp_authunix_ERD,
    &machineName_authunix_ERD,
    &uid_authunix_ERD,
    &gid_authunix_ERD,
    &auxGIDElements_authunix_ERD,
    &array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth_ERD
};

static const ERD auth_unix_auth_dispatch_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_unix", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    auth_unix_auth_dispatch_opaque_auth__childrenOffsets,
    auth_unix_auth_dispatch_opaque_auth__childrenERDs,
    (ERDParseSelf)&auth_unix_auth_dispatch_opaque_auth__parseSelf,
    (ERDUnparseSelf)&auth_unix_auth_dispatch_opaque_auth__unparseSelf,
    {.initChoice = NULL}
};

static const auth_dispatch_opaque_auth_ auth_dispatch_opaque_auth__compute_offsets;

static const size_t auth_dispatch_opaque_auth__childrenOffsets[3] = {
    (const char *)&auth_dispatch_opaque_auth__compute_offsets._choice - (const char *)&auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_dispatch_opaque_auth__compute_offsets.auth_none - (const char *)&auth_dispatch_opaque_auth__compute_offsets,
    (const char *)&auth_dispatch_opaque_auth__compute_offsets.auth_unix - (const char *)&auth_dispatch_opaque_auth__compute_offsets
};

static const ERD *const auth_dispatch_opaque_auth__childrenERDs[3] = {
    &_choice_auth_dispatch_opaque_auth_ERD,
    &auth_none_auth_dispatch_opaque_auth_ERD,
    &auth_unix_auth_dispatch_opaque_auth_ERD
};

static const ERD auth_dispatch_opaque_auth_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    auth_dispatch_opaque_auth__childrenOffsets,
    auth_dispatch_opaque_auth__childrenERDs,
    (ERDParseSelf)&auth_dispatch_opaque_auth__parseSelf,
    (ERDUnparseSelf)&auth_dispatch_opaque_auth__unparseSelf,
    {.initChoice = (InitChoiceRD)&auth_dispatch_opaque_auth__initChoice}
};

static const cred_call_body_ cred_call_body__compute_offsets;

static const size_t cred_call_body__childrenOffsets[2] = {
    (const char *)&cred_call_body__compute_offsets.auth_type - (const char *)&cred_call_body__compute_offsets,
    (const char *)&cred_call_body__compute_offsets.auth_dispatch - (const char *)&cred_call_body__compute_offsets
};

static const ERD *const cred_call_body__childrenERDs[2] = {
    &auth_type_opaque_auth_ERD,
    &auth_dispatch_opaque_auth_ERD
};

static const ERD cred_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "cred", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    cred_call_body__childrenOffsets,
    cred_call_body__childrenERDs,
    (ERDParseSelf)&cred_call_body__parseSelf,
    (ERDUnparseSelf)&cred_call_body__unparseSelf,
    {.initChoice = NULL}
};

static const verf_call_body_ verf_call_body__compute_offsets;

static const size_t verf_call_body__childrenOffsets[2] = {
    (const char *)&verf_call_body__compute_offsets.auth_type - (const char *)&verf_call_body__compute_offsets,
    (const char *)&verf_call_body__compute_offsets.auth_dispatch - (const char *)&verf_call_body__compute_offsets
};

static const ERD *const verf_call_body__childrenERDs[2] = {
    &auth_type_opaque_auth_ERD,
    &auth_dispatch_opaque_auth_ERD
};

static const ERD verf_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "verf", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    verf_call_body__childrenOffsets,
    verf_call_body__childrenERDs,
    (ERDParseSelf)&verf_call_body__parseSelf,
    (ERDUnparseSelf)&verf_call_body__unparseSelf,
    {.initChoice = NULL}
};

static const ERD _choice_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_v3_dispatch_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_mountd_v3_dispatch_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD mountd_null_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_null", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&mountd_null_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_null_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const ERD strValue_ERD = {
    {
        NULL, // namedQName.prefix
        "strValue", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const mountPath_mountd_mt_ mountPath_mountd_mt__compute_offsets;

static const size_t mountPath_mountd_mt__childrenOffsets[1] = {
    (const char *)&mountPath_mountd_mt__compute_offsets.strValue - (const char *)&mountPath_mountd_mt__compute_offsets
};

static const ERD *const mountPath_mountd_mt__childrenERDs[1] = {
    &strValue_ERD
};

static const ERD mountPath_mountd_mt_ERD = {
    {
        NULL, // namedQName.prefix
        "mountPath", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    mountPath_mountd_mt__childrenOffsets,
    mountPath_mountd_mt__childrenERDs,
    (ERDParseSelf)&mountPath_mountd_mt__parseSelf,
    (ERDUnparseSelf)&mountPath_mountd_mt__unparseSelf,
    {.initChoice = NULL}
};

static const mountd_mt_mountd_ mountd_mt_mountd__compute_offsets;

static const size_t mountd_mt_mountd__childrenOffsets[1] = {
    (const char *)&mountd_mt_mountd__compute_offsets.mountPath - (const char *)&mountd_mt_mountd__compute_offsets
};

static const ERD *const mountd_mt_mountd__childrenERDs[1] = {
    &mountPath_mountd_mt_ERD
};

static const ERD mountd_mt_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_mt", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    mountd_mt_mountd__childrenOffsets,
    mountd_mt_mountd__childrenERDs,
    (ERDParseSelf)&mountd_mt_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_mt_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mountd_dump_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_dump", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&mountd_dump_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_dump_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const unmountPath_mountd_umt_ unmountPath_mountd_umt__compute_offsets;

static const size_t unmountPath_mountd_umt__childrenOffsets[1] = {
    (const char *)&unmountPath_mountd_umt__compute_offsets.strValue - (const char *)&unmountPath_mountd_umt__compute_offsets
};

static const ERD *const unmountPath_mountd_umt__childrenERDs[1] = {
    &strValue_ERD
};

static const ERD unmountPath_mountd_umt_ERD = {
    {
        NULL, // namedQName.prefix
        "unmountPath", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    unmountPath_mountd_umt__childrenOffsets,
    unmountPath_mountd_umt__childrenERDs,
    (ERDParseSelf)&unmountPath_mountd_umt__parseSelf,
    (ERDUnparseSelf)&unmountPath_mountd_umt__unparseSelf,
    {.initChoice = NULL}
};

static const mountd_umt_mountd_ mountd_umt_mountd__compute_offsets;

static const size_t mountd_umt_mountd__childrenOffsets[1] = {
    (const char *)&mountd_umt_mountd__compute_offsets.unmountPath - (const char *)&mountd_umt_mountd__compute_offsets
};

static const ERD *const mountd_umt_mountd__childrenERDs[1] = {
    &unmountPath_mountd_umt_ERD
};

static const ERD mountd_umt_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_umt", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    mountd_umt_mountd__childrenOffsets,
    mountd_umt_mountd__childrenERDs,
    (ERDParseSelf)&mountd_umt_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_umt_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mountd_umntall_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_umntall", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&mountd_umntall_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_umntall_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mountd_export_mountd_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd_export", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&mountd_export_mountd__parseSelf,
    (ERDUnparseSelf)&mountd_export_mountd__unparseSelf,
    {.initChoice = NULL}
};

static const mountd_v3_dispatch_call_dispatch_call_body_ mountd_v3_dispatch_call_dispatch_call_body__compute_offsets;

static const size_t mountd_v3_dispatch_call_dispatch_call_body__childrenOffsets[7] = {
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets._choice - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_null - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_mt - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_dump - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_umt - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_umntall - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets.mountd_export - (const char *)&mountd_v3_dispatch_call_dispatch_call_body__compute_offsets
};

static const ERD *const mountd_v3_dispatch_call_dispatch_call_body__childrenERDs[7] = {
    &_choice_mountd_v3_dispatch_call_dispatch_call_body_ERD,
    &mountd_null_mountd_ERD,
    &mountd_mt_mountd_ERD,
    &mountd_dump_mountd_ERD,
    &mountd_umt_mountd_ERD,
    &mountd_umntall_mountd_ERD,
    &mountd_export_mountd_ERD
};

static const ERD mountd_v3_dispatch_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "mountd", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    mountd_v3_dispatch_call_dispatch_call_body__childrenOffsets,
    mountd_v3_dispatch_call_dispatch_call_body__childrenERDs,
    (ERDParseSelf)&mountd_v3_dispatch_call_dispatch_call_body__parseSelf,
    (ERDUnparseSelf)&mountd_v3_dispatch_call_dispatch_call_body__unparseSelf,
    {.initChoice = (InitChoiceRD)&mountd_v3_dispatch_call_dispatch_call_body__initChoice}
};

static const v3_dispatch_call_dispatch_call_body_ v3_dispatch_call_dispatch_call_body__compute_offsets;

static const size_t v3_dispatch_call_dispatch_call_body__childrenOffsets[2] = {
    (const char *)&v3_dispatch_call_dispatch_call_body__compute_offsets._choice - (const char *)&v3_dispatch_call_dispatch_call_body__compute_offsets,
    (const char *)&v3_dispatch_call_dispatch_call_body__compute_offsets.mountd - (const char *)&v3_dispatch_call_dispatch_call_body__compute_offsets
};

static const ERD *const v3_dispatch_call_dispatch_call_body__childrenERDs[2] = {
    &_choice_v3_dispatch_call_dispatch_call_body_ERD,
    &mountd_v3_dispatch_call_dispatch_call_body_ERD
};

static const ERD v3_dispatch_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "v3_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    v3_dispatch_call_dispatch_call_body__childrenOffsets,
    v3_dispatch_call_dispatch_call_body__childrenERDs,
    (ERDParseSelf)&v3_dispatch_call_dispatch_call_body__parseSelf,
    (ERDUnparseSelf)&v3_dispatch_call_dispatch_call_body__unparseSelf,
    {.initChoice = (InitChoiceRD)&v3_dispatch_call_dispatch_call_body__initChoice}
};

static const ERD _choice_nfsv4_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD null_nfsv4_ERD = {
    {
        NULL, // namedQName.prefix
        "null", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&null_nfsv4__parseSelf,
    (ERDUnparseSelf)&null_nfsv4__unparseSelf,
    {.initChoice = NULL}
};

static const tag_compound_ tag_compound__compute_offsets;

static const size_t tag_compound__childrenOffsets[1] = {
    (const char *)&tag_compound__compute_offsets.opaque - (const char *)&tag_compound__compute_offsets
};

static const ERD *const tag_compound__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD tag_compound_ERD = {
    {
        NULL, // namedQName.prefix
        "tag", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    tag_compound__childrenOffsets,
    tag_compound__childrenERDs,
    (ERDParseSelf)&tag_compound__parseSelf,
    (ERDUnparseSelf)&tag_compound__unparseSelf,
    {.initChoice = NULL}
};

static const ERD minorversion_compound_ERD = {
    {
        NULL, // namedQName.prefix
        "minorversion", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD numargs_compound_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD opcode_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "opcode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD check_access_access_ERD = {
    {
        NULL, // namedQName.prefix
        "check_access", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const access_op_dispatch_nfsv4_ops_ access_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t access_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&access_op_dispatch_nfsv4_ops__compute_offsets.check_access - (const char *)&access_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const access_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &check_access_access_ERD
};

static const ERD access_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "access", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    access_op_dispatch_nfsv4_ops__childrenOffsets,
    access_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&access_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&access_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD seqid_close_ERD = {
    {
        NULL, // namedQName.prefix
        "seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seqid_stateid4_ERD = {
    {
        NULL, // namedQName.prefix
        "seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD other_stateid4_ERD = {
    {
        NULL, // namedQName.prefix
        "other", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const open_stateid_close_ open_stateid_close__compute_offsets;

static const size_t open_stateid_close__childrenOffsets[2] = {
    (const char *)&open_stateid_close__compute_offsets.seqid - (const char *)&open_stateid_close__compute_offsets,
    (const char *)&open_stateid_close__compute_offsets.other - (const char *)&open_stateid_close__compute_offsets
};

static const ERD *const open_stateid_close__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD open_stateid_close_ERD = {
    {
        NULL, // namedQName.prefix
        "open_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    open_stateid_close__childrenOffsets,
    open_stateid_close__childrenERDs,
    (ERDParseSelf)&open_stateid_close__parseSelf,
    (ERDUnparseSelf)&open_stateid_close__unparseSelf,
    {.initChoice = NULL}
};

static const close_op_dispatch_nfsv4_ops_ close_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t close_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&close_op_dispatch_nfsv4_ops__compute_offsets.seqid - (const char *)&close_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&close_op_dispatch_nfsv4_ops__compute_offsets.open_stateid - (const char *)&close_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const close_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &seqid_close_ERD,
    &open_stateid_close_ERD
};

static const ERD close_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "close", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    close_op_dispatch_nfsv4_ops__childrenOffsets,
    close_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&close_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&close_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offset_commit_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD count_commit_ERD = {
    {
        NULL, // namedQName.prefix
        "count", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const commit_op_dispatch_nfsv4_ops_ commit_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t commit_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&commit_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&commit_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&commit_op_dispatch_nfsv4_ops__compute_offsets.count - (const char *)&commit_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const commit_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &offset_commit_ERD,
    &count_commit_ERD
};

static const ERD commit_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "commit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    commit_op_dispatch_nfsv4_ops__childrenOffsets,
    commit_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&commit_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&commit_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mode_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_create_dispatch_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD createvoid_create_dispatch_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "createvoid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_INT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const linkdata_create_dispatch_createtype4_ linkdata_create_dispatch_createtype4__compute_offsets;

static const size_t linkdata_create_dispatch_createtype4__childrenOffsets[1] = {
    (const char *)&linkdata_create_dispatch_createtype4__compute_offsets.strValue - (const char *)&linkdata_create_dispatch_createtype4__compute_offsets
};

static const ERD *const linkdata_create_dispatch_createtype4__childrenERDs[1] = {
    &strValue_string_ERD
};

static const ERD linkdata_create_dispatch_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "linkdata", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    linkdata_create_dispatch_createtype4__childrenOffsets,
    linkdata_create_dispatch_createtype4__childrenERDs,
    (ERDParseSelf)&linkdata_create_dispatch_createtype4__parseSelf,
    (ERDUnparseSelf)&linkdata_create_dispatch_createtype4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD specdata1_specdata4_ERD = {
    {
        NULL, // namedQName.prefix
        "specdata1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD specdata2_specdata4_ERD = {
    {
        NULL, // namedQName.prefix
        "specdata2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const devdata_create_dispatch_createtype4_ devdata_create_dispatch_createtype4__compute_offsets;

static const size_t devdata_create_dispatch_createtype4__childrenOffsets[2] = {
    (const char *)&devdata_create_dispatch_createtype4__compute_offsets.specdata1 - (const char *)&devdata_create_dispatch_createtype4__compute_offsets,
    (const char *)&devdata_create_dispatch_createtype4__compute_offsets.specdata2 - (const char *)&devdata_create_dispatch_createtype4__compute_offsets
};

static const ERD *const devdata_create_dispatch_createtype4__childrenERDs[2] = {
    &specdata1_specdata4_ERD,
    &specdata2_specdata4_ERD
};

static const ERD devdata_create_dispatch_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "devdata", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    devdata_create_dispatch_createtype4__childrenOffsets,
    devdata_create_dispatch_createtype4__childrenERDs,
    (ERDParseSelf)&devdata_create_dispatch_createtype4__parseSelf,
    (ERDUnparseSelf)&devdata_create_dispatch_createtype4__unparseSelf,
    {.initChoice = NULL}
};

static const create_dispatch_createtype4_ create_dispatch_createtype4__compute_offsets;

static const size_t create_dispatch_createtype4__childrenOffsets[4] = {
    (const char *)&create_dispatch_createtype4__compute_offsets._choice - (const char *)&create_dispatch_createtype4__compute_offsets,
    (const char *)&create_dispatch_createtype4__compute_offsets.createvoid - (const char *)&create_dispatch_createtype4__compute_offsets,
    (const char *)&create_dispatch_createtype4__compute_offsets.linkdata - (const char *)&create_dispatch_createtype4__compute_offsets,
    (const char *)&create_dispatch_createtype4__compute_offsets.devdata - (const char *)&create_dispatch_createtype4__compute_offsets
};

static const ERD *const create_dispatch_createtype4__childrenERDs[4] = {
    &_choice_create_dispatch_createtype4_ERD,
    &createvoid_create_dispatch_createtype4_ERD,
    &linkdata_create_dispatch_createtype4_ERD,
    &devdata_create_dispatch_createtype4_ERD
};

static const ERD create_dispatch_createtype4_ERD = {
    {
        NULL, // namedQName.prefix
        "create_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    create_dispatch_createtype4__childrenOffsets,
    create_dispatch_createtype4__childrenERDs,
    (ERDParseSelf)&create_dispatch_createtype4__parseSelf,
    (ERDUnparseSelf)&create_dispatch_createtype4__unparseSelf,
    {.initChoice = (InitChoiceRD)&create_dispatch_createtype4__initChoice}
};

static const objtype_create_ objtype_create__compute_offsets;

static const size_t objtype_create__childrenOffsets[2] = {
    (const char *)&objtype_create__compute_offsets.mode - (const char *)&objtype_create__compute_offsets,
    (const char *)&objtype_create__compute_offsets.create_dispatch - (const char *)&objtype_create__compute_offsets
};

static const ERD *const objtype_create__childrenERDs[2] = {
    &mode_createtype4_ERD,
    &create_dispatch_createtype4_ERD
};

static const ERD objtype_create_ERD = {
    {
        NULL, // namedQName.prefix
        "objtype", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    objtype_create__childrenOffsets,
    objtype_create__childrenERDs,
    (ERDParseSelf)&objtype_create__parseSelf,
    (ERDUnparseSelf)&objtype_create__unparseSelf,
    {.initChoice = NULL}
};

static const objname_create_ objname_create__compute_offsets;

static const size_t objname_create__childrenOffsets[1] = {
    (const char *)&objname_create__compute_offsets.opaque - (const char *)&objname_create__compute_offsets
};

static const ERD *const objname_create__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD objname_create_ERD = {
    {
        NULL, // namedQName.prefix
        "objname", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    objname_create__childrenOffsets,
    objname_create__childrenERDs,
    (ERDParseSelf)&objname_create__parseSelf,
    (ERDUnparseSelf)&objname_create__unparseSelf,
    {.initChoice = NULL}
};

static const ERD numargs_fattr4_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD attrmask_fattr4_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const createattrs_create_ array_attrmask_fattr4_createattrs_create__compute_offsets;

static const size_t array_attrmask_fattr4_createattrs_create__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_createattrs_create__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_createattrs_create__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_createattrs_create__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_createattrs_create_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_createattrs_create__childrenOffsets,
    array_attrmask_fattr4_createattrs_create__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_createattrs_create__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_createattrs_create__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_createattrs_create__getArraySize}
};

static const attr_vals_fattr4_ attr_vals_fattr4__compute_offsets;

static const size_t attr_vals_fattr4__childrenOffsets[1] = {
    (const char *)&attr_vals_fattr4__compute_offsets.opaque - (const char *)&attr_vals_fattr4__compute_offsets
};

static const ERD *const attr_vals_fattr4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD attr_vals_fattr4_ERD = {
    {
        NULL, // namedQName.prefix
        "attr_vals", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    attr_vals_fattr4__childrenOffsets,
    attr_vals_fattr4__childrenERDs,
    (ERDParseSelf)&attr_vals_fattr4__parseSelf,
    (ERDUnparseSelf)&attr_vals_fattr4__unparseSelf,
    {.initChoice = NULL}
};

static const createattrs_create_ createattrs_create__compute_offsets;

static const size_t createattrs_create__childrenOffsets[3] = {
    (const char *)&createattrs_create__compute_offsets.numargs - (const char *)&createattrs_create__compute_offsets,
    (const char *)&createattrs_create__compute_offsets.attrmask[0] - (const char *)&createattrs_create__compute_offsets,
    (const char *)&createattrs_create__compute_offsets.attr_vals - (const char *)&createattrs_create__compute_offsets
};

static const ERD *const createattrs_create__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_createattrs_create_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD createattrs_create_ERD = {
    {
        NULL, // namedQName.prefix
        "createattrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    createattrs_create__childrenOffsets,
    createattrs_create__childrenERDs,
    (ERDParseSelf)&createattrs_create__parseSelf,
    (ERDUnparseSelf)&createattrs_create__unparseSelf,
    {.initChoice = NULL}
};

static const create_op_dispatch_nfsv4_ops_ create_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t create_op_dispatch_nfsv4_ops__childrenOffsets[3] = {
    (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets.objtype - (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets.objname - (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets.createattrs - (const char *)&create_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const create_op_dispatch_nfsv4_ops__childrenERDs[3] = {
    &objtype_create_ERD,
    &objname_create_ERD,
    &createattrs_create_ERD
};

static const ERD create_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "create", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    create_op_dispatch_nfsv4_ops__childrenOffsets,
    create_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&create_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&create_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD delegpurge_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "delegpurge", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&delegpurge_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&delegpurge_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD delegreturn_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "delegreturn", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&delegreturn_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&delegreturn_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD numargs_getattr_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD attr_request_getattr_ERD = {
    {
        NULL, // namedQName.prefix
        "attr_request", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const getattr_op_dispatch_nfsv4_ops_ array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__compute_offsets.attr_request[1] - (const char *)&array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__compute_offsets.attr_request[0]
};

static const ERD *const array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &attr_request_getattr_ERD
};

static const ERD array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "attr_request", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__childrenOffsets,
    array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__getArraySize}
};

static const getattr_op_dispatch_nfsv4_ops_ getattr_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t getattr_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&getattr_op_dispatch_nfsv4_ops__compute_offsets.numargs - (const char *)&getattr_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&getattr_op_dispatch_nfsv4_ops__compute_offsets.attr_request[0] - (const char *)&getattr_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const getattr_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &numargs_getattr_ERD,
    &array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops_ERD
};

static const ERD getattr_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getattr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    getattr_op_dispatch_nfsv4_ops__childrenOffsets,
    getattr_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&getattr_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&getattr_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD getfh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&getfh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&getfh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD link_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "link", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&link_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&link_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD locktype_lockt_ERD = {
    {
        NULL, // namedQName.prefix
        "locktype", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD offset_lockt_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD length_lockt_ERD = {
    {
        NULL, // namedQName.prefix
        "length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD clientid_state_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD owner_state_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "owner", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const owner_lockt_ owner_lockt__compute_offsets;

static const size_t owner_lockt__childrenOffsets[2] = {
    (const char *)&owner_lockt__compute_offsets.clientid - (const char *)&owner_lockt__compute_offsets,
    (const char *)&owner_lockt__compute_offsets.owner - (const char *)&owner_lockt__compute_offsets
};

static const ERD *const owner_lockt__childrenERDs[2] = {
    &clientid_state_owner4_ERD,
    &owner_state_owner4_ERD
};

static const ERD owner_lockt_ERD = {
    {
        NULL, // namedQName.prefix
        "owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    owner_lockt__childrenOffsets,
    owner_lockt__childrenERDs,
    (ERDParseSelf)&owner_lockt__parseSelf,
    (ERDUnparseSelf)&owner_lockt__unparseSelf,
    {.initChoice = NULL}
};

static const lockt_op_dispatch_nfsv4_ops_ lockt_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t lockt_op_dispatch_nfsv4_ops__childrenOffsets[4] = {
    (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets.locktype - (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets.length - (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets.owner - (const char *)&lockt_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const lockt_op_dispatch_nfsv4_ops__childrenERDs[4] = {
    &locktype_lockt_ERD,
    &offset_lockt_ERD,
    &length_lockt_ERD,
    &owner_lockt_ERD
};

static const ERD lockt_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "lockt", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    lockt_op_dispatch_nfsv4_ops__childrenOffsets,
    lockt_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&lockt_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&lockt_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD locktype_locku_ERD = {
    {
        NULL, // namedQName.prefix
        "locktype", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seqid_locku_ERD = {
    {
        NULL, // namedQName.prefix
        "seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const lock_stateid_locku_ lock_stateid_locku__compute_offsets;

static const size_t lock_stateid_locku__childrenOffsets[2] = {
    (const char *)&lock_stateid_locku__compute_offsets.seqid - (const char *)&lock_stateid_locku__compute_offsets,
    (const char *)&lock_stateid_locku__compute_offsets.other - (const char *)&lock_stateid_locku__compute_offsets
};

static const ERD *const lock_stateid_locku__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD lock_stateid_locku_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    lock_stateid_locku__childrenOffsets,
    lock_stateid_locku__childrenERDs,
    (ERDParseSelf)&lock_stateid_locku__parseSelf,
    (ERDUnparseSelf)&lock_stateid_locku__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offset_locku_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD length_locku_ERD = {
    {
        NULL, // namedQName.prefix
        "length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const locku_op_dispatch_nfsv4_ops_ locku_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t locku_op_dispatch_nfsv4_ops__childrenOffsets[5] = {
    (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets.locktype - (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets.seqid - (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets.lock_stateid - (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets.length - (const char *)&locku_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const locku_op_dispatch_nfsv4_ops__childrenERDs[5] = {
    &locktype_locku_ERD,
    &seqid_locku_ERD,
    &lock_stateid_locku_ERD,
    &offset_locku_ERD,
    &length_locku_ERD
};

static const ERD locku_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "locku", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    locku_op_dispatch_nfsv4_ops__childrenOffsets,
    locku_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&locku_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&locku_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD locktype_lock_ERD = {
    {
        NULL, // namedQName.prefix
        "locktype", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD reclaim_lock_ERD = {
    {
        NULL, // namedQName.prefix
        "reclaim", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD offset_lock_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD length_lock_ERD = {
    {
        NULL, // namedQName.prefix
        "length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD new_lock_owner_locker4_ERD = {
    {
        NULL, // namedQName.prefix
        "new_lock_owner", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_INT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_lock_dispatch_locker4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const lock_stateid_exist_lock_owner4_ lock_stateid_exist_lock_owner4__compute_offsets;

static const size_t lock_stateid_exist_lock_owner4__childrenOffsets[2] = {
    (const char *)&lock_stateid_exist_lock_owner4__compute_offsets.seqid - (const char *)&lock_stateid_exist_lock_owner4__compute_offsets,
    (const char *)&lock_stateid_exist_lock_owner4__compute_offsets.other - (const char *)&lock_stateid_exist_lock_owner4__compute_offsets
};

static const ERD *const lock_stateid_exist_lock_owner4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD lock_stateid_exist_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    lock_stateid_exist_lock_owner4__childrenOffsets,
    lock_stateid_exist_lock_owner4__childrenERDs,
    (ERDParseSelf)&lock_stateid_exist_lock_owner4__parseSelf,
    (ERDUnparseSelf)&lock_stateid_exist_lock_owner4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD lock_seqid_exist_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const lock_owner_lock_dispatch_locker4_ lock_owner_lock_dispatch_locker4__compute_offsets;

static const size_t lock_owner_lock_dispatch_locker4__childrenOffsets[2] = {
    (const char *)&lock_owner_lock_dispatch_locker4__compute_offsets.lock_stateid - (const char *)&lock_owner_lock_dispatch_locker4__compute_offsets,
    (const char *)&lock_owner_lock_dispatch_locker4__compute_offsets.lock_seqid - (const char *)&lock_owner_lock_dispatch_locker4__compute_offsets
};

static const ERD *const lock_owner_lock_dispatch_locker4__childrenERDs[2] = {
    &lock_stateid_exist_lock_owner4_ERD,
    &lock_seqid_exist_lock_owner4_ERD
};

static const ERD lock_owner_lock_dispatch_locker4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    lock_owner_lock_dispatch_locker4__childrenOffsets,
    lock_owner_lock_dispatch_locker4__childrenERDs,
    (ERDParseSelf)&lock_owner_lock_dispatch_locker4__parseSelf,
    (ERDUnparseSelf)&lock_owner_lock_dispatch_locker4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD open_seqid_open_to_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "open_seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const open_stateid_open_to_lock_owner4_ open_stateid_open_to_lock_owner4__compute_offsets;

static const size_t open_stateid_open_to_lock_owner4__childrenOffsets[2] = {
    (const char *)&open_stateid_open_to_lock_owner4__compute_offsets.seqid - (const char *)&open_stateid_open_to_lock_owner4__compute_offsets,
    (const char *)&open_stateid_open_to_lock_owner4__compute_offsets.other - (const char *)&open_stateid_open_to_lock_owner4__compute_offsets
};

static const ERD *const open_stateid_open_to_lock_owner4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD open_stateid_open_to_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "open_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    open_stateid_open_to_lock_owner4__childrenOffsets,
    open_stateid_open_to_lock_owner4__childrenERDs,
    (ERDParseSelf)&open_stateid_open_to_lock_owner4__parseSelf,
    (ERDUnparseSelf)&open_stateid_open_to_lock_owner4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD lock_seqid_open_to_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const lock_owner_open_to_lock_owner4_ lock_owner_open_to_lock_owner4__compute_offsets;

static const size_t lock_owner_open_to_lock_owner4__childrenOffsets[2] = {
    (const char *)&lock_owner_open_to_lock_owner4__compute_offsets.clientid - (const char *)&lock_owner_open_to_lock_owner4__compute_offsets,
    (const char *)&lock_owner_open_to_lock_owner4__compute_offsets.owner - (const char *)&lock_owner_open_to_lock_owner4__compute_offsets
};

static const ERD *const lock_owner_open_to_lock_owner4__childrenERDs[2] = {
    &clientid_state_owner4_ERD,
    &owner_state_owner4_ERD
};

static const ERD lock_owner_open_to_lock_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    lock_owner_open_to_lock_owner4__childrenOffsets,
    lock_owner_open_to_lock_owner4__childrenERDs,
    (ERDParseSelf)&lock_owner_open_to_lock_owner4__parseSelf,
    (ERDUnparseSelf)&lock_owner_open_to_lock_owner4__unparseSelf,
    {.initChoice = NULL}
};

static const open_owner_lock_dispatch_locker4_ open_owner_lock_dispatch_locker4__compute_offsets;

static const size_t open_owner_lock_dispatch_locker4__childrenOffsets[4] = {
    (const char *)&open_owner_lock_dispatch_locker4__compute_offsets.open_seqid - (const char *)&open_owner_lock_dispatch_locker4__compute_offsets,
    (const char *)&open_owner_lock_dispatch_locker4__compute_offsets.open_stateid - (const char *)&open_owner_lock_dispatch_locker4__compute_offsets,
    (const char *)&open_owner_lock_dispatch_locker4__compute_offsets.lock_seqid - (const char *)&open_owner_lock_dispatch_locker4__compute_offsets,
    (const char *)&open_owner_lock_dispatch_locker4__compute_offsets.lock_owner - (const char *)&open_owner_lock_dispatch_locker4__compute_offsets
};

static const ERD *const open_owner_lock_dispatch_locker4__childrenERDs[4] = {
    &open_seqid_open_to_lock_owner4_ERD,
    &open_stateid_open_to_lock_owner4_ERD,
    &lock_seqid_open_to_lock_owner4_ERD,
    &lock_owner_open_to_lock_owner4_ERD
};

static const ERD open_owner_lock_dispatch_locker4_ERD = {
    {
        NULL, // namedQName.prefix
        "open_owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    open_owner_lock_dispatch_locker4__childrenOffsets,
    open_owner_lock_dispatch_locker4__childrenERDs,
    (ERDParseSelf)&open_owner_lock_dispatch_locker4__parseSelf,
    (ERDUnparseSelf)&open_owner_lock_dispatch_locker4__unparseSelf,
    {.initChoice = NULL}
};

static const lock_dispatch_locker4_ lock_dispatch_locker4__compute_offsets;

static const size_t lock_dispatch_locker4__childrenOffsets[3] = {
    (const char *)&lock_dispatch_locker4__compute_offsets._choice - (const char *)&lock_dispatch_locker4__compute_offsets,
    (const char *)&lock_dispatch_locker4__compute_offsets.lock_owner - (const char *)&lock_dispatch_locker4__compute_offsets,
    (const char *)&lock_dispatch_locker4__compute_offsets.open_owner - (const char *)&lock_dispatch_locker4__compute_offsets
};

static const ERD *const lock_dispatch_locker4__childrenERDs[3] = {
    &_choice_lock_dispatch_locker4_ERD,
    &lock_owner_lock_dispatch_locker4_ERD,
    &open_owner_lock_dispatch_locker4_ERD
};

static const ERD lock_dispatch_locker4_ERD = {
    {
        NULL, // namedQName.prefix
        "lock_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    lock_dispatch_locker4__childrenOffsets,
    lock_dispatch_locker4__childrenERDs,
    (ERDParseSelf)&lock_dispatch_locker4__parseSelf,
    (ERDUnparseSelf)&lock_dispatch_locker4__unparseSelf,
    {.initChoice = (InitChoiceRD)&lock_dispatch_locker4__initChoice}
};

static const locker_lock_ locker_lock__compute_offsets;

static const size_t locker_lock__childrenOffsets[2] = {
    (const char *)&locker_lock__compute_offsets.new_lock_owner - (const char *)&locker_lock__compute_offsets,
    (const char *)&locker_lock__compute_offsets.lock_dispatch - (const char *)&locker_lock__compute_offsets
};

static const ERD *const locker_lock__childrenERDs[2] = {
    &new_lock_owner_locker4_ERD,
    &lock_dispatch_locker4_ERD
};

static const ERD locker_lock_ERD = {
    {
        NULL, // namedQName.prefix
        "locker", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    locker_lock__childrenOffsets,
    locker_lock__childrenERDs,
    (ERDParseSelf)&locker_lock__parseSelf,
    (ERDUnparseSelf)&locker_lock__unparseSelf,
    {.initChoice = NULL}
};

static const lock_op_dispatch_nfsv4_ops_ lock_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t lock_op_dispatch_nfsv4_ops__childrenOffsets[5] = {
    (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets.locktype - (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets.reclaim - (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets.length - (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets.locker - (const char *)&lock_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const lock_op_dispatch_nfsv4_ops__childrenERDs[5] = {
    &locktype_lock_ERD,
    &reclaim_lock_ERD,
    &offset_lock_ERD,
    &length_lock_ERD,
    &locker_lock_ERD
};

static const ERD lock_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "lock", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    lock_op_dispatch_nfsv4_ops__childrenOffsets,
    lock_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&lock_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&lock_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const name_lookup_ name_lookup__compute_offsets;

static const size_t name_lookup__childrenOffsets[1] = {
    (const char *)&name_lookup__compute_offsets.opaque - (const char *)&name_lookup__compute_offsets
};

static const ERD *const name_lookup__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD name_lookup_ERD = {
    {
        NULL, // namedQName.prefix
        "name", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    name_lookup__childrenOffsets,
    name_lookup__childrenERDs,
    (ERDParseSelf)&name_lookup__parseSelf,
    (ERDUnparseSelf)&name_lookup__unparseSelf,
    {.initChoice = NULL}
};

static const lookup_op_dispatch_nfsv4_ops_ lookup_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t lookup_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&lookup_op_dispatch_nfsv4_ops__compute_offsets.name - (const char *)&lookup_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const lookup_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &name_lookup_ERD
};

static const ERD lookup_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "lookup", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    lookup_op_dispatch_nfsv4_ops__childrenOffsets,
    lookup_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&lookup_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&lookup_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD lookupp_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "lookupp", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&lookupp_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&lookupp_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const obj_attributes_nverify_ array_attrmask_fattr4_obj_attributes_nverify__compute_offsets;

static const size_t array_attrmask_fattr4_obj_attributes_nverify__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_obj_attributes_nverify__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_obj_attributes_nverify__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_obj_attributes_nverify__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_obj_attributes_nverify_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_obj_attributes_nverify__childrenOffsets,
    array_attrmask_fattr4_obj_attributes_nverify__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_obj_attributes_nverify__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_obj_attributes_nverify__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_obj_attributes_nverify__getArraySize}
};

static const obj_attributes_nverify_ obj_attributes_nverify__compute_offsets;

static const size_t obj_attributes_nverify__childrenOffsets[3] = {
    (const char *)&obj_attributes_nverify__compute_offsets.numargs - (const char *)&obj_attributes_nverify__compute_offsets,
    (const char *)&obj_attributes_nverify__compute_offsets.attrmask[0] - (const char *)&obj_attributes_nverify__compute_offsets,
    (const char *)&obj_attributes_nverify__compute_offsets.attr_vals - (const char *)&obj_attributes_nverify__compute_offsets
};

static const ERD *const obj_attributes_nverify__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_obj_attributes_nverify_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD obj_attributes_nverify_ERD = {
    {
        NULL, // namedQName.prefix
        "obj_attributes", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    obj_attributes_nverify__childrenOffsets,
    obj_attributes_nverify__childrenERDs,
    (ERDParseSelf)&obj_attributes_nverify__parseSelf,
    (ERDUnparseSelf)&obj_attributes_nverify__unparseSelf,
    {.initChoice = NULL}
};

static const nverify_op_dispatch_nfsv4_ops_ nverify_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t nverify_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&nverify_op_dispatch_nfsv4_ops__compute_offsets.obj_attributes - (const char *)&nverify_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const nverify_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &obj_attributes_nverify_ERD
};

static const ERD nverify_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "nverify", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    nverify_op_dispatch_nfsv4_ops__childrenOffsets,
    nverify_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&nverify_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&nverify_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD seqid_open_ERD = {
    {
        NULL, // namedQName.prefix
        "seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD share_access_open_ERD = {
    {
        NULL, // namedQName.prefix
        "share_access", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD share_deny_open_ERD = {
    {
        NULL, // namedQName.prefix
        "share_deny", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD clientid_open_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const owner_open_owner4_ owner_open_owner4__compute_offsets;

static const size_t owner_open_owner4__childrenOffsets[1] = {
    (const char *)&owner_open_owner4__compute_offsets.opaque - (const char *)&owner_open_owner4__compute_offsets
};

static const ERD *const owner_open_owner4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD owner_open_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    owner_open_owner4__childrenOffsets,
    owner_open_owner4__childrenERDs,
    (ERDParseSelf)&owner_open_owner4__parseSelf,
    (ERDUnparseSelf)&owner_open_owner4__unparseSelf,
    {.initChoice = NULL}
};

static const owner_open_ owner_open__compute_offsets;

static const size_t owner_open__childrenOffsets[2] = {
    (const char *)&owner_open__compute_offsets.clientid - (const char *)&owner_open__compute_offsets,
    (const char *)&owner_open__compute_offsets.owner - (const char *)&owner_open__compute_offsets
};

static const ERD *const owner_open__childrenERDs[2] = {
    &clientid_open_owner4_ERD,
    &owner_open_owner4_ERD
};

static const ERD owner_open_ERD = {
    {
        NULL, // namedQName.prefix
        "owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    owner_open__childrenOffsets,
    owner_open__childrenERDs,
    (ERDParseSelf)&owner_open__parseSelf,
    (ERDUnparseSelf)&owner_open__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mode_openflag4_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_open_dispatch_openflag4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD mode_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_create_dispatch_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const createattrs_create_dispatch_createhow4_ array_attrmask_fattr4_createattrs_create_dispatch_createhow4__compute_offsets;

static const size_t array_attrmask_fattr4_createattrs_create_dispatch_createhow4__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_createattrs_create_dispatch_createhow4__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_createattrs_create_dispatch_createhow4__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_createattrs_create_dispatch_createhow4__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_createattrs_create_dispatch_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_createattrs_create_dispatch_createhow4__childrenOffsets,
    array_attrmask_fattr4_createattrs_create_dispatch_createhow4__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_createattrs_create_dispatch_createhow4__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_createattrs_create_dispatch_createhow4__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_createattrs_create_dispatch_createhow4__getArraySize}
};

static const createattrs_create_dispatch_createhow4_ createattrs_create_dispatch_createhow4__compute_offsets;

static const size_t createattrs_create_dispatch_createhow4__childrenOffsets[3] = {
    (const char *)&createattrs_create_dispatch_createhow4__compute_offsets.numargs - (const char *)&createattrs_create_dispatch_createhow4__compute_offsets,
    (const char *)&createattrs_create_dispatch_createhow4__compute_offsets.attrmask[0] - (const char *)&createattrs_create_dispatch_createhow4__compute_offsets,
    (const char *)&createattrs_create_dispatch_createhow4__compute_offsets.attr_vals - (const char *)&createattrs_create_dispatch_createhow4__compute_offsets
};

static const ERD *const createattrs_create_dispatch_createhow4__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_createattrs_create_dispatch_createhow4_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD createattrs_create_dispatch_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "createattrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    createattrs_create_dispatch_createhow4__childrenOffsets,
    createattrs_create_dispatch_createhow4__childrenERDs,
    (ERDParseSelf)&createattrs_create_dispatch_createhow4__parseSelf,
    (ERDUnparseSelf)&createattrs_create_dispatch_createhow4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD createverf_create_dispatch_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "createverf", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const create_dispatch_createhow4_ create_dispatch_createhow4__compute_offsets;

static const size_t create_dispatch_createhow4__childrenOffsets[3] = {
    (const char *)&create_dispatch_createhow4__compute_offsets._choice - (const char *)&create_dispatch_createhow4__compute_offsets,
    (const char *)&create_dispatch_createhow4__compute_offsets.createattrs - (const char *)&create_dispatch_createhow4__compute_offsets,
    (const char *)&create_dispatch_createhow4__compute_offsets.createverf - (const char *)&create_dispatch_createhow4__compute_offsets
};

static const ERD *const create_dispatch_createhow4__childrenERDs[3] = {
    &_choice_create_dispatch_createhow4_ERD,
    &createattrs_create_dispatch_createhow4_ERD,
    &createverf_create_dispatch_createhow4_ERD
};

static const ERD create_dispatch_createhow4_ERD = {
    {
        NULL, // namedQName.prefix
        "create_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    create_dispatch_createhow4__childrenOffsets,
    create_dispatch_createhow4__childrenERDs,
    (ERDParseSelf)&create_dispatch_createhow4__parseSelf,
    (ERDUnparseSelf)&create_dispatch_createhow4__unparseSelf,
    {.initChoice = (InitChoiceRD)&create_dispatch_createhow4__initChoice}
};

static const how_open_dispatch_openflag4_ how_open_dispatch_openflag4__compute_offsets;

static const size_t how_open_dispatch_openflag4__childrenOffsets[2] = {
    (const char *)&how_open_dispatch_openflag4__compute_offsets.mode - (const char *)&how_open_dispatch_openflag4__compute_offsets,
    (const char *)&how_open_dispatch_openflag4__compute_offsets.create_dispatch - (const char *)&how_open_dispatch_openflag4__compute_offsets
};

static const ERD *const how_open_dispatch_openflag4__childrenERDs[2] = {
    &mode_createhow4_ERD,
    &create_dispatch_createhow4_ERD
};

static const ERD how_open_dispatch_openflag4_ERD = {
    {
        NULL, // namedQName.prefix
        "how", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    how_open_dispatch_openflag4__childrenOffsets,
    how_open_dispatch_openflag4__childrenERDs,
    (ERDParseSelf)&how_open_dispatch_openflag4__parseSelf,
    (ERDUnparseSelf)&how_open_dispatch_openflag4__unparseSelf,
    {.initChoice = NULL}
};

static const open_dispatch_openflag4_ open_dispatch_openflag4__compute_offsets;

static const size_t open_dispatch_openflag4__childrenOffsets[2] = {
    (const char *)&open_dispatch_openflag4__compute_offsets._choice - (const char *)&open_dispatch_openflag4__compute_offsets,
    (const char *)&open_dispatch_openflag4__compute_offsets.how - (const char *)&open_dispatch_openflag4__compute_offsets
};

static const ERD *const open_dispatch_openflag4__childrenERDs[2] = {
    &_choice_open_dispatch_openflag4_ERD,
    &how_open_dispatch_openflag4_ERD
};

static const ERD open_dispatch_openflag4_ERD = {
    {
        NULL, // namedQName.prefix
        "open_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    open_dispatch_openflag4__childrenOffsets,
    open_dispatch_openflag4__childrenERDs,
    (ERDParseSelf)&open_dispatch_openflag4__parseSelf,
    (ERDUnparseSelf)&open_dispatch_openflag4__unparseSelf,
    {.initChoice = (InitChoiceRD)&open_dispatch_openflag4__initChoice}
};

static const openhow_open_ openhow_open__compute_offsets;

static const size_t openhow_open__childrenOffsets[2] = {
    (const char *)&openhow_open__compute_offsets.mode - (const char *)&openhow_open__compute_offsets,
    (const char *)&openhow_open__compute_offsets.open_dispatch - (const char *)&openhow_open__compute_offsets
};

static const ERD *const openhow_open__childrenERDs[2] = {
    &mode_openflag4_ERD,
    &open_dispatch_openflag4_ERD
};

static const ERD openhow_open_ERD = {
    {
        NULL, // namedQName.prefix
        "openhow", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    openhow_open__childrenOffsets,
    openhow_open__childrenERDs,
    (ERDParseSelf)&openhow_open__parseSelf,
    (ERDUnparseSelf)&openhow_open__unparseSelf,
    {.initChoice = NULL}
};

static const ERD mode_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_claim_dispatch_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const file_claim_dispatch_open_claim4_ file_claim_dispatch_open_claim4__compute_offsets;

static const size_t file_claim_dispatch_open_claim4__childrenOffsets[1] = {
    (const char *)&file_claim_dispatch_open_claim4__compute_offsets.strValue - (const char *)&file_claim_dispatch_open_claim4__compute_offsets
};

static const ERD *const file_claim_dispatch_open_claim4__childrenERDs[1] = {
    &strValue_string_ERD
};

static const ERD file_claim_dispatch_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "file", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    file_claim_dispatch_open_claim4__childrenOffsets,
    file_claim_dispatch_open_claim4__childrenERDs,
    (ERDParseSelf)&file_claim_dispatch_open_claim4__parseSelf,
    (ERDUnparseSelf)&file_claim_dispatch_open_claim4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD delegate_type_claim_dispatch_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "delegate_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const delegate_stateid_open_claim_delegate_cur4_ delegate_stateid_open_claim_delegate_cur4__compute_offsets;

static const size_t delegate_stateid_open_claim_delegate_cur4__childrenOffsets[2] = {
    (const char *)&delegate_stateid_open_claim_delegate_cur4__compute_offsets.seqid - (const char *)&delegate_stateid_open_claim_delegate_cur4__compute_offsets,
    (const char *)&delegate_stateid_open_claim_delegate_cur4__compute_offsets.other - (const char *)&delegate_stateid_open_claim_delegate_cur4__compute_offsets
};

static const ERD *const delegate_stateid_open_claim_delegate_cur4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD delegate_stateid_open_claim_delegate_cur4_ERD = {
    {
        NULL, // namedQName.prefix
        "delegate_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    delegate_stateid_open_claim_delegate_cur4__childrenOffsets,
    delegate_stateid_open_claim_delegate_cur4__childrenERDs,
    (ERDParseSelf)&delegate_stateid_open_claim_delegate_cur4__parseSelf,
    (ERDUnparseSelf)&delegate_stateid_open_claim_delegate_cur4__unparseSelf,
    {.initChoice = NULL}
};

static const file_open_claim_delegate_cur4_ file_open_claim_delegate_cur4__compute_offsets;

static const size_t file_open_claim_delegate_cur4__childrenOffsets[1] = {
    (const char *)&file_open_claim_delegate_cur4__compute_offsets.opaque - (const char *)&file_open_claim_delegate_cur4__compute_offsets
};

static const ERD *const file_open_claim_delegate_cur4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD file_open_claim_delegate_cur4_ERD = {
    {
        NULL, // namedQName.prefix
        "file", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    file_open_claim_delegate_cur4__childrenOffsets,
    file_open_claim_delegate_cur4__childrenERDs,
    (ERDParseSelf)&file_open_claim_delegate_cur4__parseSelf,
    (ERDUnparseSelf)&file_open_claim_delegate_cur4__unparseSelf,
    {.initChoice = NULL}
};

static const delegate_cur_info_claim_dispatch_open_claim4_ delegate_cur_info_claim_dispatch_open_claim4__compute_offsets;

static const size_t delegate_cur_info_claim_dispatch_open_claim4__childrenOffsets[2] = {
    (const char *)&delegate_cur_info_claim_dispatch_open_claim4__compute_offsets.delegate_stateid - (const char *)&delegate_cur_info_claim_dispatch_open_claim4__compute_offsets,
    (const char *)&delegate_cur_info_claim_dispatch_open_claim4__compute_offsets.file - (const char *)&delegate_cur_info_claim_dispatch_open_claim4__compute_offsets
};

static const ERD *const delegate_cur_info_claim_dispatch_open_claim4__childrenERDs[2] = {
    &delegate_stateid_open_claim_delegate_cur4_ERD,
    &file_open_claim_delegate_cur4_ERD
};

static const ERD delegate_cur_info_claim_dispatch_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "delegate_cur_info", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    delegate_cur_info_claim_dispatch_open_claim4__childrenOffsets,
    delegate_cur_info_claim_dispatch_open_claim4__childrenERDs,
    (ERDParseSelf)&delegate_cur_info_claim_dispatch_open_claim4__parseSelf,
    (ERDUnparseSelf)&delegate_cur_info_claim_dispatch_open_claim4__unparseSelf,
    {.initChoice = NULL}
};

static const claim_dispatch_open_claim4_ claim_dispatch_open_claim4__compute_offsets;

static const size_t claim_dispatch_open_claim4__childrenOffsets[4] = {
    (const char *)&claim_dispatch_open_claim4__compute_offsets._choice - (const char *)&claim_dispatch_open_claim4__compute_offsets,
    (const char *)&claim_dispatch_open_claim4__compute_offsets.file - (const char *)&claim_dispatch_open_claim4__compute_offsets,
    (const char *)&claim_dispatch_open_claim4__compute_offsets.delegate_type - (const char *)&claim_dispatch_open_claim4__compute_offsets,
    (const char *)&claim_dispatch_open_claim4__compute_offsets.delegate_cur_info - (const char *)&claim_dispatch_open_claim4__compute_offsets
};

static const ERD *const claim_dispatch_open_claim4__childrenERDs[4] = {
    &_choice_claim_dispatch_open_claim4_ERD,
    &file_claim_dispatch_open_claim4_ERD,
    &delegate_type_claim_dispatch_open_claim4_ERD,
    &delegate_cur_info_claim_dispatch_open_claim4_ERD
};

static const ERD claim_dispatch_open_claim4_ERD = {
    {
        NULL, // namedQName.prefix
        "claim_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    claim_dispatch_open_claim4__childrenOffsets,
    claim_dispatch_open_claim4__childrenERDs,
    (ERDParseSelf)&claim_dispatch_open_claim4__parseSelf,
    (ERDUnparseSelf)&claim_dispatch_open_claim4__unparseSelf,
    {.initChoice = (InitChoiceRD)&claim_dispatch_open_claim4__initChoice}
};

static const claim_open_ claim_open__compute_offsets;

static const size_t claim_open__childrenOffsets[2] = {
    (const char *)&claim_open__compute_offsets.mode - (const char *)&claim_open__compute_offsets,
    (const char *)&claim_open__compute_offsets.claim_dispatch - (const char *)&claim_open__compute_offsets
};

static const ERD *const claim_open__childrenERDs[2] = {
    &mode_open_claim4_ERD,
    &claim_dispatch_open_claim4_ERD
};

static const ERD claim_open_ERD = {
    {
        NULL, // namedQName.prefix
        "claim", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    claim_open__childrenOffsets,
    claim_open__childrenERDs,
    (ERDParseSelf)&claim_open__parseSelf,
    (ERDUnparseSelf)&claim_open__unparseSelf,
    {.initChoice = NULL}
};

static const open_op_dispatch_nfsv4_ops_ open_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t open_op_dispatch_nfsv4_ops__childrenOffsets[6] = {
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.seqid - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.share_access - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.share_deny - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.owner - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.openhow - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets.claim - (const char *)&open_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const open_op_dispatch_nfsv4_ops__childrenERDs[6] = {
    &seqid_open_ERD,
    &share_access_open_ERD,
    &share_deny_open_ERD,
    &owner_open_ERD,
    &openhow_open_ERD,
    &claim_open_ERD
};

static const ERD open_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "open", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    open_op_dispatch_nfsv4_ops__childrenOffsets,
    open_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&open_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&open_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD createdir_openattr_ERD = {
    {
        NULL, // namedQName.prefix
        "createdir", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const openattr_op_dispatch_nfsv4_ops_ openattr_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t openattr_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&openattr_op_dispatch_nfsv4_ops__compute_offsets.createdir - (const char *)&openattr_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const openattr_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &createdir_openattr_ERD
};

static const ERD openattr_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "openattr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    openattr_op_dispatch_nfsv4_ops__childrenOffsets,
    openattr_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&openattr_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&openattr_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD open_confirm_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "open_confirm", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&open_confirm_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&open_confirm_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const open_stateid_open_downgrade_ open_stateid_open_downgrade__compute_offsets;

static const size_t open_stateid_open_downgrade__childrenOffsets[2] = {
    (const char *)&open_stateid_open_downgrade__compute_offsets.seqid - (const char *)&open_stateid_open_downgrade__compute_offsets,
    (const char *)&open_stateid_open_downgrade__compute_offsets.other - (const char *)&open_stateid_open_downgrade__compute_offsets
};

static const ERD *const open_stateid_open_downgrade__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD open_stateid_open_downgrade_ERD = {
    {
        NULL, // namedQName.prefix
        "open_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    open_stateid_open_downgrade__childrenOffsets,
    open_stateid_open_downgrade__childrenERDs,
    (ERDParseSelf)&open_stateid_open_downgrade__parseSelf,
    (ERDUnparseSelf)&open_stateid_open_downgrade__unparseSelf,
    {.initChoice = NULL}
};

static const ERD seqid_open_downgrade_ERD = {
    {
        NULL, // namedQName.prefix
        "seqid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD share_access_open_downgrade_ERD = {
    {
        NULL, // namedQName.prefix
        "share_access", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD share_deny_open_downgrade_ERD = {
    {
        NULL, // namedQName.prefix
        "share_deny", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const open_downgrade_op_dispatch_nfsv4_ops_ open_downgrade_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t open_downgrade_op_dispatch_nfsv4_ops__childrenOffsets[4] = {
    (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets.open_stateid - (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets.seqid - (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets.share_access - (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets.share_deny - (const char *)&open_downgrade_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const open_downgrade_op_dispatch_nfsv4_ops__childrenERDs[4] = {
    &open_stateid_open_downgrade_ERD,
    &seqid_open_downgrade_ERD,
    &share_access_open_downgrade_ERD,
    &share_deny_open_downgrade_ERD
};

static const ERD open_downgrade_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "open_downgrade", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    open_downgrade_op_dispatch_nfsv4_ops__childrenOffsets,
    open_downgrade_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&open_downgrade_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&open_downgrade_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const object_putfh_ object_putfh__compute_offsets;

static const size_t object_putfh__childrenOffsets[1] = {
    (const char *)&object_putfh__compute_offsets.opaque - (const char *)&object_putfh__compute_offsets
};

static const ERD *const object_putfh__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD object_putfh_ERD = {
    {
        NULL, // namedQName.prefix
        "object", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    object_putfh__childrenOffsets,
    object_putfh__childrenERDs,
    (ERDParseSelf)&object_putfh__parseSelf,
    (ERDUnparseSelf)&object_putfh__unparseSelf,
    {.initChoice = NULL}
};

static const putfh_op_dispatch_nfsv4_ops_ putfh_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t putfh_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&putfh_op_dispatch_nfsv4_ops__compute_offsets.object - (const char *)&putfh_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const putfh_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &object_putfh_ERD
};

static const ERD putfh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    putfh_op_dispatch_nfsv4_ops__childrenOffsets,
    putfh_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&putfh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&putfh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD putpubfh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putpubfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&putpubfh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&putpubfh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD putrootfh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putrootfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&putrootfh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&putrootfh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const stateid_read_ stateid_read__compute_offsets;

static const size_t stateid_read__childrenOffsets[2] = {
    (const char *)&stateid_read__compute_offsets.seqid - (const char *)&stateid_read__compute_offsets,
    (const char *)&stateid_read__compute_offsets.other - (const char *)&stateid_read__compute_offsets
};

static const ERD *const stateid_read__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_read_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_read__childrenOffsets,
    stateid_read__childrenERDs,
    (ERDParseSelf)&stateid_read__parseSelf,
    (ERDUnparseSelf)&stateid_read__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offset_read_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD count_read_ERD = {
    {
        NULL, // namedQName.prefix
        "count", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const read_op_dispatch_nfsv4_ops_ read_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t read_op_dispatch_nfsv4_ops__childrenOffsets[3] = {
    (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets.stateid - (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets.count - (const char *)&read_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const read_op_dispatch_nfsv4_ops__childrenERDs[3] = {
    &stateid_read_ERD,
    &offset_read_ERD,
    &count_read_ERD
};

static const ERD read_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "read", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    read_op_dispatch_nfsv4_ops__childrenOffsets,
    read_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&read_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&read_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD cookie_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "cookie", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD cookieverf_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "cookieverf", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD dircount_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "dircount", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD maxcount_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "maxcount", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD numargs_bitmap4_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD bitmap_bitmap4_ERD = {
    {
        NULL, // namedQName.prefix
        "bitmap", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const attr_request_readdir_ array_bitmap_bitmap4_attr_request_readdir__compute_offsets;

static const size_t array_bitmap_bitmap4_attr_request_readdir__childrenOffsets[1] = {
    (const char *)&array_bitmap_bitmap4_attr_request_readdir__compute_offsets.bitmap[1] - (const char *)&array_bitmap_bitmap4_attr_request_readdir__compute_offsets.bitmap[0]
};

static const ERD *const array_bitmap_bitmap4_attr_request_readdir__childrenERDs[1] = {
    &bitmap_bitmap4_ERD
};

static const ERD array_bitmap_bitmap4_attr_request_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "bitmap", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_bitmap_bitmap4_attr_request_readdir__childrenOffsets,
    array_bitmap_bitmap4_attr_request_readdir__childrenERDs,
    (ERDParseSelf)&array_bitmap_bitmap4_attr_request_readdir__parseSelf,
    (ERDUnparseSelf)&array_bitmap_bitmap4_attr_request_readdir__unparseSelf,
    {.getArraySize = (GetArraySize)&array_bitmap_bitmap4_attr_request_readdir__getArraySize}
};

static const attr_request_readdir_ attr_request_readdir__compute_offsets;

static const size_t attr_request_readdir__childrenOffsets[2] = {
    (const char *)&attr_request_readdir__compute_offsets.numargs - (const char *)&attr_request_readdir__compute_offsets,
    (const char *)&attr_request_readdir__compute_offsets.bitmap[0] - (const char *)&attr_request_readdir__compute_offsets
};

static const ERD *const attr_request_readdir__childrenERDs[2] = {
    &numargs_bitmap4_ERD,
    &array_bitmap_bitmap4_attr_request_readdir_ERD
};

static const ERD attr_request_readdir_ERD = {
    {
        NULL, // namedQName.prefix
        "attr_request", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    attr_request_readdir__childrenOffsets,
    attr_request_readdir__childrenERDs,
    (ERDParseSelf)&attr_request_readdir__parseSelf,
    (ERDUnparseSelf)&attr_request_readdir__unparseSelf,
    {.initChoice = NULL}
};

static const readdir_op_dispatch_nfsv4_ops_ readdir_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t readdir_op_dispatch_nfsv4_ops__childrenOffsets[5] = {
    (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets.cookie - (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets.cookieverf - (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets.dircount - (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets.maxcount - (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets.attr_request - (const char *)&readdir_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const readdir_op_dispatch_nfsv4_ops__childrenERDs[5] = {
    &cookie_readdir_ERD,
    &cookieverf_readdir_ERD,
    &dircount_readdir_ERD,
    &maxcount_readdir_ERD,
    &attr_request_readdir_ERD
};

static const ERD readdir_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "readdir", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    readdir_op_dispatch_nfsv4_ops__childrenOffsets,
    readdir_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&readdir_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&readdir_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD readlink_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "readlink", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&readlink_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&readlink_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const component_component4_ component_component4__compute_offsets;

static const size_t component_component4__childrenOffsets[1] = {
    (const char *)&component_component4__compute_offsets.opaque - (const char *)&component_component4__compute_offsets
};

static const ERD *const component_component4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD component_component4_ERD = {
    {
        NULL, // namedQName.prefix
        "component", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    component_component4__childrenOffsets,
    component_component4__childrenERDs,
    (ERDParseSelf)&component_component4__parseSelf,
    (ERDUnparseSelf)&component_component4__unparseSelf,
    {.initChoice = NULL}
};

static const target_remove_ target_remove__compute_offsets;

static const size_t target_remove__childrenOffsets[1] = {
    (const char *)&target_remove__compute_offsets.component - (const char *)&target_remove__compute_offsets
};

static const ERD *const target_remove__childrenERDs[1] = {
    &component_component4_ERD
};

static const ERD target_remove_ERD = {
    {
        NULL, // namedQName.prefix
        "target", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    target_remove__childrenOffsets,
    target_remove__childrenERDs,
    (ERDParseSelf)&target_remove__parseSelf,
    (ERDUnparseSelf)&target_remove__unparseSelf,
    {.initChoice = NULL}
};

static const remove_op_dispatch_nfsv4_ops_ remove_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t remove_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&remove_op_dispatch_nfsv4_ops__compute_offsets.target - (const char *)&remove_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const remove_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &target_remove_ERD
};

static const ERD remove_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "remove", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    remove_op_dispatch_nfsv4_ops__childrenOffsets,
    remove_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&remove_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&remove_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const oldname_rename_ oldname_rename__compute_offsets;

static const size_t oldname_rename__childrenOffsets[1] = {
    (const char *)&oldname_rename__compute_offsets.component - (const char *)&oldname_rename__compute_offsets
};

static const ERD *const oldname_rename__childrenERDs[1] = {
    &component_component4_ERD
};

static const ERD oldname_rename_ERD = {
    {
        NULL, // namedQName.prefix
        "oldname", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    oldname_rename__childrenOffsets,
    oldname_rename__childrenERDs,
    (ERDParseSelf)&oldname_rename__parseSelf,
    (ERDUnparseSelf)&oldname_rename__unparseSelf,
    {.initChoice = NULL}
};

static const newname_rename_ newname_rename__compute_offsets;

static const size_t newname_rename__childrenOffsets[1] = {
    (const char *)&newname_rename__compute_offsets.component - (const char *)&newname_rename__compute_offsets
};

static const ERD *const newname_rename__childrenERDs[1] = {
    &component_component4_ERD
};

static const ERD newname_rename_ERD = {
    {
        NULL, // namedQName.prefix
        "newname", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    newname_rename__childrenOffsets,
    newname_rename__childrenERDs,
    (ERDParseSelf)&newname_rename__parseSelf,
    (ERDUnparseSelf)&newname_rename__unparseSelf,
    {.initChoice = NULL}
};

static const rename_op_dispatch_nfsv4_ops_ rename_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t rename_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&rename_op_dispatch_nfsv4_ops__compute_offsets.oldname - (const char *)&rename_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&rename_op_dispatch_nfsv4_ops__compute_offsets.newname - (const char *)&rename_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const rename_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &oldname_rename_ERD,
    &newname_rename_ERD
};

static const ERD rename_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "rename", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    rename_op_dispatch_nfsv4_ops__childrenOffsets,
    rename_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&rename_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&rename_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD renew_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "renew", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&renew_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&renew_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD restorefh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "restorefh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&restorefh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&restorefh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD savefh_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "savefh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&savefh_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&savefh_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const name_secinfo_ name_secinfo__compute_offsets;

static const size_t name_secinfo__childrenOffsets[1] = {
    (const char *)&name_secinfo__compute_offsets.component - (const char *)&name_secinfo__compute_offsets
};

static const ERD *const name_secinfo__childrenERDs[1] = {
    &component_component4_ERD
};

static const ERD name_secinfo_ERD = {
    {
        NULL, // namedQName.prefix
        "name", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    name_secinfo__childrenOffsets,
    name_secinfo__childrenERDs,
    (ERDParseSelf)&name_secinfo__parseSelf,
    (ERDUnparseSelf)&name_secinfo__unparseSelf,
    {.initChoice = NULL}
};

static const secinfo_op_dispatch_nfsv4_ops_ secinfo_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t secinfo_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&secinfo_op_dispatch_nfsv4_ops__compute_offsets.name - (const char *)&secinfo_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const secinfo_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &name_secinfo_ERD
};

static const ERD secinfo_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "secinfo", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    secinfo_op_dispatch_nfsv4_ops__childrenOffsets,
    secinfo_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&secinfo_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&secinfo_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const stateid_setattr_ stateid_setattr__compute_offsets;

static const size_t stateid_setattr__childrenOffsets[2] = {
    (const char *)&stateid_setattr__compute_offsets.seqid - (const char *)&stateid_setattr__compute_offsets,
    (const char *)&stateid_setattr__compute_offsets.other - (const char *)&stateid_setattr__compute_offsets
};

static const ERD *const stateid_setattr__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_setattr_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_setattr__childrenOffsets,
    stateid_setattr__childrenERDs,
    (ERDParseSelf)&stateid_setattr__parseSelf,
    (ERDUnparseSelf)&stateid_setattr__unparseSelf,
    {.initChoice = NULL}
};

static const obj_attributes_setattr_ array_attrmask_fattr4_obj_attributes_setattr__compute_offsets;

static const size_t array_attrmask_fattr4_obj_attributes_setattr__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_obj_attributes_setattr__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_obj_attributes_setattr__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_obj_attributes_setattr__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_obj_attributes_setattr_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_obj_attributes_setattr__childrenOffsets,
    array_attrmask_fattr4_obj_attributes_setattr__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_obj_attributes_setattr__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_obj_attributes_setattr__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_obj_attributes_setattr__getArraySize}
};

static const obj_attributes_setattr_ obj_attributes_setattr__compute_offsets;

static const size_t obj_attributes_setattr__childrenOffsets[3] = {
    (const char *)&obj_attributes_setattr__compute_offsets.numargs - (const char *)&obj_attributes_setattr__compute_offsets,
    (const char *)&obj_attributes_setattr__compute_offsets.attrmask[0] - (const char *)&obj_attributes_setattr__compute_offsets,
    (const char *)&obj_attributes_setattr__compute_offsets.attr_vals - (const char *)&obj_attributes_setattr__compute_offsets
};

static const ERD *const obj_attributes_setattr__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_obj_attributes_setattr_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD obj_attributes_setattr_ERD = {
    {
        NULL, // namedQName.prefix
        "obj_attributes", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    obj_attributes_setattr__childrenOffsets,
    obj_attributes_setattr__childrenERDs,
    (ERDParseSelf)&obj_attributes_setattr__parseSelf,
    (ERDUnparseSelf)&obj_attributes_setattr__unparseSelf,
    {.initChoice = NULL}
};

static const setattr_op_dispatch_nfsv4_ops_ setattr_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t setattr_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&setattr_op_dispatch_nfsv4_ops__compute_offsets.stateid - (const char *)&setattr_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&setattr_op_dispatch_nfsv4_ops__compute_offsets.obj_attributes - (const char *)&setattr_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const setattr_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &stateid_setattr_ERD,
    &obj_attributes_setattr_ERD
};

static const ERD setattr_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "setattr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    setattr_op_dispatch_nfsv4_ops__childrenOffsets,
    setattr_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&setattr_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&setattr_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD setclientid_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "setclientid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&setclientid_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&setclientid_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD setclientid_confirm_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "setclientid_confirm", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&setclientid_confirm_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&setclientid_confirm_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const obj_attributes_verify_ array_attrmask_fattr4_obj_attributes_verify__compute_offsets;

static const size_t array_attrmask_fattr4_obj_attributes_verify__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_obj_attributes_verify__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_obj_attributes_verify__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_obj_attributes_verify__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_obj_attributes_verify_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_obj_attributes_verify__childrenOffsets,
    array_attrmask_fattr4_obj_attributes_verify__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_obj_attributes_verify__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_obj_attributes_verify__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_obj_attributes_verify__getArraySize}
};

static const obj_attributes_verify_ obj_attributes_verify__compute_offsets;

static const size_t obj_attributes_verify__childrenOffsets[3] = {
    (const char *)&obj_attributes_verify__compute_offsets.numargs - (const char *)&obj_attributes_verify__compute_offsets,
    (const char *)&obj_attributes_verify__compute_offsets.attrmask[0] - (const char *)&obj_attributes_verify__compute_offsets,
    (const char *)&obj_attributes_verify__compute_offsets.attr_vals - (const char *)&obj_attributes_verify__compute_offsets
};

static const ERD *const obj_attributes_verify__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_obj_attributes_verify_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD obj_attributes_verify_ERD = {
    {
        NULL, // namedQName.prefix
        "obj_attributes", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    obj_attributes_verify__childrenOffsets,
    obj_attributes_verify__childrenERDs,
    (ERDParseSelf)&obj_attributes_verify__parseSelf,
    (ERDUnparseSelf)&obj_attributes_verify__unparseSelf,
    {.initChoice = NULL}
};

static const verify_op_dispatch_nfsv4_ops_ verify_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t verify_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&verify_op_dispatch_nfsv4_ops__compute_offsets.obj_attributes - (const char *)&verify_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const verify_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &obj_attributes_verify_ERD
};

static const ERD verify_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "verify", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    verify_op_dispatch_nfsv4_ops__childrenOffsets,
    verify_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&verify_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&verify_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const stateid_write_ stateid_write__compute_offsets;

static const size_t stateid_write__childrenOffsets[2] = {
    (const char *)&stateid_write__compute_offsets.seqid - (const char *)&stateid_write__compute_offsets,
    (const char *)&stateid_write__compute_offsets.other - (const char *)&stateid_write__compute_offsets
};

static const ERD *const stateid_write__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_write_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_write__childrenOffsets,
    stateid_write__childrenERDs,
    (ERDParseSelf)&stateid_write__parseSelf,
    (ERDUnparseSelf)&stateid_write__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offset_write_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD stable_write_ERD = {
    {
        NULL, // namedQName.prefix
        "stable", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const data_write_ data_write__compute_offsets;

static const size_t data_write__childrenOffsets[1] = {
    (const char *)&data_write__compute_offsets.opaque - (const char *)&data_write__compute_offsets
};

static const ERD *const data_write__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD data_write_ERD = {
    {
        NULL, // namedQName.prefix
        "data", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    data_write__childrenOffsets,
    data_write__childrenERDs,
    (ERDParseSelf)&data_write__parseSelf,
    (ERDUnparseSelf)&data_write__unparseSelf,
    {.initChoice = NULL}
};

static const write_op_dispatch_nfsv4_ops_ write_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t write_op_dispatch_nfsv4_ops__childrenOffsets[4] = {
    (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets.stateid - (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets.offset - (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets.stable - (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets.data - (const char *)&write_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const write_op_dispatch_nfsv4_ops__childrenERDs[4] = {
    &stateid_write_ERD,
    &offset_write_ERD,
    &stable_write_ERD,
    &data_write_ERD
};

static const ERD write_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "write", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    write_op_dispatch_nfsv4_ops__childrenOffsets,
    write_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&write_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&write_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD release_lockowner_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "release_lockowner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&release_lockowner_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&release_lockowner_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD backchannel_ctl_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "backchannel_ctl", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&backchannel_ctl_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&backchannel_ctl_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD bind_conn_to_session_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "bind_conn_to_session", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&bind_conn_to_session_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&bind_conn_to_session_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD co_verifier_client_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "co_verifier", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const co_ownerid_client_owner4_ co_ownerid_client_owner4__compute_offsets;

static const size_t co_ownerid_client_owner4__childrenOffsets[1] = {
    (const char *)&co_ownerid_client_owner4__compute_offsets.opaque - (const char *)&co_ownerid_client_owner4__compute_offsets
};

static const ERD *const co_ownerid_client_owner4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD co_ownerid_client_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "co_ownerid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    co_ownerid_client_owner4__childrenOffsets,
    co_ownerid_client_owner4__childrenERDs,
    (ERDParseSelf)&co_ownerid_client_owner4__parseSelf,
    (ERDUnparseSelf)&co_ownerid_client_owner4__unparseSelf,
    {.initChoice = NULL}
};

static const eia_clientowner_exchange_id_ eia_clientowner_exchange_id__compute_offsets;

static const size_t eia_clientowner_exchange_id__childrenOffsets[2] = {
    (const char *)&eia_clientowner_exchange_id__compute_offsets.co_verifier - (const char *)&eia_clientowner_exchange_id__compute_offsets,
    (const char *)&eia_clientowner_exchange_id__compute_offsets.co_ownerid - (const char *)&eia_clientowner_exchange_id__compute_offsets
};

static const ERD *const eia_clientowner_exchange_id__childrenERDs[2] = {
    &co_verifier_client_owner4_ERD,
    &co_ownerid_client_owner4_ERD
};

static const ERD eia_clientowner_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eia_clientowner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    eia_clientowner_exchange_id__childrenOffsets,
    eia_clientowner_exchange_id__childrenERDs,
    (ERDParseSelf)&eia_clientowner_exchange_id__parseSelf,
    (ERDUnparseSelf)&eia_clientowner_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const ERD eia_flags_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eia_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD mode_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_protect_dispatch_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD spa_void_protect_dispatch_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "spa_void", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&spa_void_protect_dispatch_state_protect4_a__parseSelf,
    (ERDUnparseSelf)&spa_void_protect_dispatch_state_protect4_a__unparseSelf,
    {.initChoice = NULL}
};

static const spa_mach_ops_protect_dispatch_state_protect4_a_ spa_mach_ops_protect_dispatch_state_protect4_a__compute_offsets;

static const size_t spa_mach_ops_protect_dispatch_state_protect4_a__childrenOffsets[1] = {
    (const char *)&spa_mach_ops_protect_dispatch_state_protect4_a__compute_offsets.opaque - (const char *)&spa_mach_ops_protect_dispatch_state_protect4_a__compute_offsets
};

static const ERD *const spa_mach_ops_protect_dispatch_state_protect4_a__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD spa_mach_ops_protect_dispatch_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "spa_mach_ops", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    spa_mach_ops_protect_dispatch_state_protect4_a__childrenOffsets,
    spa_mach_ops_protect_dispatch_state_protect4_a__childrenERDs,
    (ERDParseSelf)&spa_mach_ops_protect_dispatch_state_protect4_a__parseSelf,
    (ERDUnparseSelf)&spa_mach_ops_protect_dispatch_state_protect4_a__unparseSelf,
    {.initChoice = NULL}
};

static const spa_ssv_params_protect_dispatch_state_protect4_a_ spa_ssv_params_protect_dispatch_state_protect4_a__compute_offsets;

static const size_t spa_ssv_params_protect_dispatch_state_protect4_a__childrenOffsets[1] = {
    (const char *)&spa_ssv_params_protect_dispatch_state_protect4_a__compute_offsets.opaque - (const char *)&spa_ssv_params_protect_dispatch_state_protect4_a__compute_offsets
};

static const ERD *const spa_ssv_params_protect_dispatch_state_protect4_a__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD spa_ssv_params_protect_dispatch_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "spa_ssv_params", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    spa_ssv_params_protect_dispatch_state_protect4_a__childrenOffsets,
    spa_ssv_params_protect_dispatch_state_protect4_a__childrenERDs,
    (ERDParseSelf)&spa_ssv_params_protect_dispatch_state_protect4_a__parseSelf,
    (ERDUnparseSelf)&spa_ssv_params_protect_dispatch_state_protect4_a__unparseSelf,
    {.initChoice = NULL}
};

static const protect_dispatch_state_protect4_a_ protect_dispatch_state_protect4_a__compute_offsets;

static const size_t protect_dispatch_state_protect4_a__childrenOffsets[4] = {
    (const char *)&protect_dispatch_state_protect4_a__compute_offsets._choice - (const char *)&protect_dispatch_state_protect4_a__compute_offsets,
    (const char *)&protect_dispatch_state_protect4_a__compute_offsets.spa_void - (const char *)&protect_dispatch_state_protect4_a__compute_offsets,
    (const char *)&protect_dispatch_state_protect4_a__compute_offsets.spa_mach_ops - (const char *)&protect_dispatch_state_protect4_a__compute_offsets,
    (const char *)&protect_dispatch_state_protect4_a__compute_offsets.spa_ssv_params - (const char *)&protect_dispatch_state_protect4_a__compute_offsets
};

static const ERD *const protect_dispatch_state_protect4_a__childrenERDs[4] = {
    &_choice_protect_dispatch_state_protect4_a_ERD,
    &spa_void_protect_dispatch_state_protect4_a_ERD,
    &spa_mach_ops_protect_dispatch_state_protect4_a_ERD,
    &spa_ssv_params_protect_dispatch_state_protect4_a_ERD
};

static const ERD protect_dispatch_state_protect4_a_ERD = {
    {
        NULL, // namedQName.prefix
        "protect_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    protect_dispatch_state_protect4_a__childrenOffsets,
    protect_dispatch_state_protect4_a__childrenERDs,
    (ERDParseSelf)&protect_dispatch_state_protect4_a__parseSelf,
    (ERDUnparseSelf)&protect_dispatch_state_protect4_a__unparseSelf,
    {.initChoice = (InitChoiceRD)&protect_dispatch_state_protect4_a__initChoice}
};

static const eia_state_protect_exchange_id_ eia_state_protect_exchange_id__compute_offsets;

static const size_t eia_state_protect_exchange_id__childrenOffsets[2] = {
    (const char *)&eia_state_protect_exchange_id__compute_offsets.mode - (const char *)&eia_state_protect_exchange_id__compute_offsets,
    (const char *)&eia_state_protect_exchange_id__compute_offsets.protect_dispatch - (const char *)&eia_state_protect_exchange_id__compute_offsets
};

static const ERD *const eia_state_protect_exchange_id__childrenERDs[2] = {
    &mode_state_protect4_a_ERD,
    &protect_dispatch_state_protect4_a_ERD
};

static const ERD eia_state_protect_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eia_state_protect", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    eia_state_protect_exchange_id__childrenOffsets,
    eia_state_protect_exchange_id__childrenERDs,
    (ERDParseSelf)&eia_state_protect_exchange_id__parseSelf,
    (ERDUnparseSelf)&eia_state_protect_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const ERD exchval_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "exchval", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const nii_domain_nfs_impl_id4_ nii_domain_nfs_impl_id4__compute_offsets;

static const size_t nii_domain_nfs_impl_id4__childrenOffsets[1] = {
    (const char *)&nii_domain_nfs_impl_id4__compute_offsets.opaque - (const char *)&nii_domain_nfs_impl_id4__compute_offsets
};

static const ERD *const nii_domain_nfs_impl_id4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD nii_domain_nfs_impl_id4_ERD = {
    {
        NULL, // namedQName.prefix
        "nii_domain", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    nii_domain_nfs_impl_id4__childrenOffsets,
    nii_domain_nfs_impl_id4__childrenERDs,
    (ERDParseSelf)&nii_domain_nfs_impl_id4__parseSelf,
    (ERDUnparseSelf)&nii_domain_nfs_impl_id4__unparseSelf,
    {.initChoice = NULL}
};

static const nii_name_nfs_impl_id4_ nii_name_nfs_impl_id4__compute_offsets;

static const size_t nii_name_nfs_impl_id4__childrenOffsets[1] = {
    (const char *)&nii_name_nfs_impl_id4__compute_offsets.opaque - (const char *)&nii_name_nfs_impl_id4__compute_offsets
};

static const ERD *const nii_name_nfs_impl_id4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD nii_name_nfs_impl_id4_ERD = {
    {
        NULL, // namedQName.prefix
        "nii_name", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    nii_name_nfs_impl_id4__childrenOffsets,
    nii_name_nfs_impl_id4__childrenERDs,
    (ERDParseSelf)&nii_name_nfs_impl_id4__parseSelf,
    (ERDUnparseSelf)&nii_name_nfs_impl_id4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD seconds_nfstime4_ERD = {
    {
        NULL, // namedQName.prefix
        "seconds", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_INT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD nseconds_nfstime4_ERD = {
    {
        NULL, // namedQName.prefix
        "nseconds", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const nii_date_nfs_impl_id4_ nii_date_nfs_impl_id4__compute_offsets;

static const size_t nii_date_nfs_impl_id4__childrenOffsets[2] = {
    (const char *)&nii_date_nfs_impl_id4__compute_offsets.seconds - (const char *)&nii_date_nfs_impl_id4__compute_offsets,
    (const char *)&nii_date_nfs_impl_id4__compute_offsets.nseconds - (const char *)&nii_date_nfs_impl_id4__compute_offsets
};

static const ERD *const nii_date_nfs_impl_id4__childrenERDs[2] = {
    &seconds_nfstime4_ERD,
    &nseconds_nfstime4_ERD
};

static const ERD nii_date_nfs_impl_id4_ERD = {
    {
        NULL, // namedQName.prefix
        "nii_date", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    nii_date_nfs_impl_id4__childrenOffsets,
    nii_date_nfs_impl_id4__childrenERDs,
    (ERDParseSelf)&nii_date_nfs_impl_id4__parseSelf,
    (ERDUnparseSelf)&nii_date_nfs_impl_id4__unparseSelf,
    {.initChoice = NULL}
};

static const eia_client_impl_id_exchange_id_ eia_client_impl_id_exchange_id__compute_offsets;

static const size_t eia_client_impl_id_exchange_id__childrenOffsets[3] = {
    (const char *)&eia_client_impl_id_exchange_id__compute_offsets.nii_domain - (const char *)&eia_client_impl_id_exchange_id__compute_offsets,
    (const char *)&eia_client_impl_id_exchange_id__compute_offsets.nii_name - (const char *)&eia_client_impl_id_exchange_id__compute_offsets,
    (const char *)&eia_client_impl_id_exchange_id__compute_offsets.nii_date - (const char *)&eia_client_impl_id_exchange_id__compute_offsets
};

static const ERD *const eia_client_impl_id_exchange_id__childrenERDs[3] = {
    &nii_domain_nfs_impl_id4_ERD,
    &nii_name_nfs_impl_id4_ERD,
    &nii_date_nfs_impl_id4_ERD
};

static const ERD eia_client_impl_id_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eia_client_impl_id", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    eia_client_impl_id_exchange_id__childrenOffsets,
    eia_client_impl_id_exchange_id__childrenERDs,
    (ERDParseSelf)&eia_client_impl_id_exchange_id__parseSelf,
    (ERDUnparseSelf)&eia_client_impl_id_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const exchange_id_op_dispatch_nfsv4_ops_ exchange_id_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t exchange_id_op_dispatch_nfsv4_ops__childrenOffsets[5] = {
    (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets.eia_clientowner - (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets.eia_flags - (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets.eia_state_protect - (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets.exchval - (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets.eia_client_impl_id - (const char *)&exchange_id_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const exchange_id_op_dispatch_nfsv4_ops__childrenERDs[5] = {
    &eia_clientowner_exchange_id_ERD,
    &eia_flags_exchange_id_ERD,
    &eia_state_protect_exchange_id_ERD,
    &exchval_exchange_id_ERD,
    &eia_client_impl_id_exchange_id_ERD
};

static const ERD exchange_id_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "exchange_id", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    exchange_id_op_dispatch_nfsv4_ops__childrenOffsets,
    exchange_id_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&exchange_id_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&exchange_id_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD csa_clientid_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD csa_sequence_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD csa_flags_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_headerpadsize_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_headerpadsize", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_maxrequestsize_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_maxrequestsize", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_maxresponsesize_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_maxresponsesize", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_maxresponsesize_cached_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_maxresponsesize_cached", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_maxoperations_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_maxoperations", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_maxrequests_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_maxrequests", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ca_rdma_ird_channel_attrs4_ERD = {
    {
        NULL, // namedQName.prefix
        "ca_rdma_ird", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const csa_fore_chan_attrs_create_session_ csa_fore_chan_attrs_create_session__compute_offsets;

static const size_t csa_fore_chan_attrs_create_session__childrenOffsets[7] = {
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_headerpadsize - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_maxrequestsize - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_maxresponsesize - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_maxresponsesize_cached - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_maxoperations - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_maxrequests - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_fore_chan_attrs_create_session__compute_offsets.ca_rdma_ird - (const char *)&csa_fore_chan_attrs_create_session__compute_offsets
};

static const ERD *const csa_fore_chan_attrs_create_session__childrenERDs[7] = {
    &ca_headerpadsize_channel_attrs4_ERD,
    &ca_maxrequestsize_channel_attrs4_ERD,
    &ca_maxresponsesize_channel_attrs4_ERD,
    &ca_maxresponsesize_cached_channel_attrs4_ERD,
    &ca_maxoperations_channel_attrs4_ERD,
    &ca_maxrequests_channel_attrs4_ERD,
    &ca_rdma_ird_channel_attrs4_ERD
};

static const ERD csa_fore_chan_attrs_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_fore_chan_attrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    csa_fore_chan_attrs_create_session__childrenOffsets,
    csa_fore_chan_attrs_create_session__childrenERDs,
    (ERDParseSelf)&csa_fore_chan_attrs_create_session__parseSelf,
    (ERDUnparseSelf)&csa_fore_chan_attrs_create_session__unparseSelf,
    {.initChoice = NULL}
};

static const csa_back_chan_attrs_create_session_ csa_back_chan_attrs_create_session__compute_offsets;

static const size_t csa_back_chan_attrs_create_session__childrenOffsets[7] = {
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_headerpadsize - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_maxrequestsize - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_maxresponsesize - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_maxresponsesize_cached - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_maxoperations - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_maxrequests - (const char *)&csa_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csa_back_chan_attrs_create_session__compute_offsets.ca_rdma_ird - (const char *)&csa_back_chan_attrs_create_session__compute_offsets
};

static const ERD *const csa_back_chan_attrs_create_session__childrenERDs[7] = {
    &ca_headerpadsize_channel_attrs4_ERD,
    &ca_maxrequestsize_channel_attrs4_ERD,
    &ca_maxresponsesize_channel_attrs4_ERD,
    &ca_maxresponsesize_cached_channel_attrs4_ERD,
    &ca_maxoperations_channel_attrs4_ERD,
    &ca_maxrequests_channel_attrs4_ERD,
    &ca_rdma_ird_channel_attrs4_ERD
};

static const ERD csa_back_chan_attrs_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_back_chan_attrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    csa_back_chan_attrs_create_session__childrenOffsets,
    csa_back_chan_attrs_create_session__childrenERDs,
    (ERDParseSelf)&csa_back_chan_attrs_create_session__parseSelf,
    (ERDUnparseSelf)&csa_back_chan_attrs_create_session__unparseSelf,
    {.initChoice = NULL}
};

static const ERD csa_cb_program_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_cb_program", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD mode_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "mode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_callback_dispatch_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD auth_void_callback_dispatch_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_void", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&auth_void_callback_dispatch_callback_sec_parms4__parseSelf,
    (ERDUnparseSelf)&auth_void_callback_dispatch_callback_sec_parms4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD authlen_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "authlen", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD stamp_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "stamp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const machinename_authsys_parms_ machinename_authsys_parms__compute_offsets;

static const size_t machinename_authsys_parms__childrenOffsets[1] = {
    (const char *)&machinename_authsys_parms__compute_offsets.opaque - (const char *)&machinename_authsys_parms__compute_offsets
};

static const ERD *const machinename_authsys_parms__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD machinename_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "machinename", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    machinename_authsys_parms__childrenOffsets,
    machinename_authsys_parms__childrenERDs,
    (ERDParseSelf)&machinename_authsys_parms__parseSelf,
    (ERDUnparseSelf)&machinename_authsys_parms__unparseSelf,
    {.initChoice = NULL}
};

static const ERD uid_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "uid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD gid_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "gid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const gids_authsys_parms_ gids_authsys_parms__compute_offsets;

static const size_t gids_authsys_parms__childrenOffsets[1] = {
    (const char *)&gids_authsys_parms__compute_offsets.opaque - (const char *)&gids_authsys_parms__compute_offsets
};

static const ERD *const gids_authsys_parms__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD gids_authsys_parms_ERD = {
    {
        NULL, // namedQName.prefix
        "gids", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    gids_authsys_parms__childrenOffsets,
    gids_authsys_parms__childrenERDs,
    (ERDParseSelf)&gids_authsys_parms__parseSelf,
    (ERDUnparseSelf)&gids_authsys_parms__unparseSelf,
    {.initChoice = NULL}
};

static const cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets;

static const size_t cbsp_sys_cred_callback_dispatch_callback_sec_parms4__childrenOffsets[6] = {
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.authlen - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.stamp - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.machinename - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.uid - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.gid - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets.gids - (const char *)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__compute_offsets
};

static const ERD *const cbsp_sys_cred_callback_dispatch_callback_sec_parms4__childrenERDs[6] = {
    &authlen_authsys_parms_ERD,
    &stamp_authsys_parms_ERD,
    &machinename_authsys_parms_ERD,
    &uid_authsys_parms_ERD,
    &gid_authsys_parms_ERD,
    &gids_authsys_parms_ERD
};

static const ERD cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "cbsp_sys_cred", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    cbsp_sys_cred_callback_dispatch_callback_sec_parms4__childrenOffsets,
    cbsp_sys_cred_callback_dispatch_callback_sec_parms4__childrenERDs,
    (ERDParseSelf)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__parseSelf,
    (ERDUnparseSelf)&cbsp_sys_cred_callback_dispatch_callback_sec_parms4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD gcbp_service_gss_cb_handles4_ERD = {
    {
        NULL, // namedQName.prefix
        "gcbp_service", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const gcbp_handle_from_server_gss_cb_handles4_ gcbp_handle_from_server_gss_cb_handles4__compute_offsets;

static const size_t gcbp_handle_from_server_gss_cb_handles4__childrenOffsets[1] = {
    (const char *)&gcbp_handle_from_server_gss_cb_handles4__compute_offsets.opaque - (const char *)&gcbp_handle_from_server_gss_cb_handles4__compute_offsets
};

static const ERD *const gcbp_handle_from_server_gss_cb_handles4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD gcbp_handle_from_server_gss_cb_handles4_ERD = {
    {
        NULL, // namedQName.prefix
        "gcbp_handle_from_server", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    gcbp_handle_from_server_gss_cb_handles4__childrenOffsets,
    gcbp_handle_from_server_gss_cb_handles4__childrenERDs,
    (ERDParseSelf)&gcbp_handle_from_server_gss_cb_handles4__parseSelf,
    (ERDUnparseSelf)&gcbp_handle_from_server_gss_cb_handles4__unparseSelf,
    {.initChoice = NULL}
};

static const gcbp_handle_from_client_gss_cb_handles4_ gcbp_handle_from_client_gss_cb_handles4__compute_offsets;

static const size_t gcbp_handle_from_client_gss_cb_handles4__childrenOffsets[1] = {
    (const char *)&gcbp_handle_from_client_gss_cb_handles4__compute_offsets.opaque - (const char *)&gcbp_handle_from_client_gss_cb_handles4__compute_offsets
};

static const ERD *const gcbp_handle_from_client_gss_cb_handles4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD gcbp_handle_from_client_gss_cb_handles4_ERD = {
    {
        NULL, // namedQName.prefix
        "gcbp_handle_from_client", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    gcbp_handle_from_client_gss_cb_handles4__childrenOffsets,
    gcbp_handle_from_client_gss_cb_handles4__childrenERDs,
    (ERDParseSelf)&gcbp_handle_from_client_gss_cb_handles4__parseSelf,
    (ERDUnparseSelf)&gcbp_handle_from_client_gss_cb_handles4__unparseSelf,
    {.initChoice = NULL}
};

static const cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets;

static const size_t cbsp_gss_handles_callback_dispatch_callback_sec_parms4__childrenOffsets[3] = {
    (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets.gcbp_service - (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets.gcbp_handle_from_server - (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets.gcbp_handle_from_client - (const char *)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__compute_offsets
};

static const ERD *const cbsp_gss_handles_callback_dispatch_callback_sec_parms4__childrenERDs[3] = {
    &gcbp_service_gss_cb_handles4_ERD,
    &gcbp_handle_from_server_gss_cb_handles4_ERD,
    &gcbp_handle_from_client_gss_cb_handles4_ERD
};

static const ERD cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "cbsp_gss_handles", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    cbsp_gss_handles_callback_dispatch_callback_sec_parms4__childrenOffsets,
    cbsp_gss_handles_callback_dispatch_callback_sec_parms4__childrenERDs,
    (ERDParseSelf)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__parseSelf,
    (ERDUnparseSelf)&cbsp_gss_handles_callback_dispatch_callback_sec_parms4__unparseSelf,
    {.initChoice = NULL}
};

static const callback_dispatch_callback_sec_parms4_ callback_dispatch_callback_sec_parms4__compute_offsets;

static const size_t callback_dispatch_callback_sec_parms4__childrenOffsets[4] = {
    (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets._choice - (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets.auth_void - (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets.cbsp_sys_cred - (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets,
    (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets.cbsp_gss_handles - (const char *)&callback_dispatch_callback_sec_parms4__compute_offsets
};

static const ERD *const callback_dispatch_callback_sec_parms4__childrenERDs[4] = {
    &_choice_callback_dispatch_callback_sec_parms4_ERD,
    &auth_void_callback_dispatch_callback_sec_parms4_ERD,
    &cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ERD,
    &cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ERD
};

static const ERD callback_dispatch_callback_sec_parms4_ERD = {
    {
        NULL, // namedQName.prefix
        "callback_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    callback_dispatch_callback_sec_parms4__childrenOffsets,
    callback_dispatch_callback_sec_parms4__childrenERDs,
    (ERDParseSelf)&callback_dispatch_callback_sec_parms4__parseSelf,
    (ERDUnparseSelf)&callback_dispatch_callback_sec_parms4__unparseSelf,
    {.initChoice = (InitChoiceRD)&callback_dispatch_callback_sec_parms4__initChoice}
};

static const csa_sec_parms_create_session_ csa_sec_parms_create_session__compute_offsets;

static const size_t csa_sec_parms_create_session__childrenOffsets[2] = {
    (const char *)&csa_sec_parms_create_session__compute_offsets.mode - (const char *)&csa_sec_parms_create_session__compute_offsets,
    (const char *)&csa_sec_parms_create_session__compute_offsets.callback_dispatch - (const char *)&csa_sec_parms_create_session__compute_offsets
};

static const ERD *const csa_sec_parms_create_session__childrenERDs[2] = {
    &mode_callback_sec_parms4_ERD,
    &callback_dispatch_callback_sec_parms4_ERD
};

static const ERD csa_sec_parms_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csa_sec_parms", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    csa_sec_parms_create_session__childrenOffsets,
    csa_sec_parms_create_session__childrenERDs,
    (ERDParseSelf)&csa_sec_parms_create_session__parseSelf,
    (ERDUnparseSelf)&csa_sec_parms_create_session__unparseSelf,
    {.initChoice = NULL}
};

static const create_session_op_dispatch_nfsv4_ops_ create_session_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t create_session_op_dispatch_nfsv4_ops__childrenOffsets[7] = {
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_clientid - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_sequence - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_flags - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_fore_chan_attrs - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_back_chan_attrs - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_cb_program - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets.csa_sec_parms - (const char *)&create_session_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const create_session_op_dispatch_nfsv4_ops__childrenERDs[7] = {
    &csa_clientid_create_session_ERD,
    &csa_sequence_create_session_ERD,
    &csa_flags_create_session_ERD,
    &csa_fore_chan_attrs_create_session_ERD,
    &csa_back_chan_attrs_create_session_ERD,
    &csa_cb_program_create_session_ERD,
    &csa_sec_parms_create_session_ERD
};

static const ERD create_session_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "create_session", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    create_session_op_dispatch_nfsv4_ops__childrenOffsets,
    create_session_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&create_session_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&create_session_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD dsa_sessionid_destroy_session_ERD = {
    {
        NULL, // namedQName.prefix
        "dsa_sessionid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const destroy_session_op_dispatch_nfsv4_ops_ destroy_session_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t destroy_session_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&destroy_session_op_dispatch_nfsv4_ops__compute_offsets.dsa_sessionid - (const char *)&destroy_session_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const destroy_session_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &dsa_sessionid_destroy_session_ERD
};

static const ERD destroy_session_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "destroy_session", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    destroy_session_op_dispatch_nfsv4_ops__childrenOffsets,
    destroy_session_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&destroy_session_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&destroy_session_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const fsa_stateid_free_stateid_ fsa_stateid_free_stateid__compute_offsets;

static const size_t fsa_stateid_free_stateid__childrenOffsets[2] = {
    (const char *)&fsa_stateid_free_stateid__compute_offsets.seqid - (const char *)&fsa_stateid_free_stateid__compute_offsets,
    (const char *)&fsa_stateid_free_stateid__compute_offsets.other - (const char *)&fsa_stateid_free_stateid__compute_offsets
};

static const ERD *const fsa_stateid_free_stateid__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD fsa_stateid_free_stateid_ERD = {
    {
        NULL, // namedQName.prefix
        "fsa_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    fsa_stateid_free_stateid__childrenOffsets,
    fsa_stateid_free_stateid__childrenERDs,
    (ERDParseSelf)&fsa_stateid_free_stateid__parseSelf,
    (ERDUnparseSelf)&fsa_stateid_free_stateid__unparseSelf,
    {.initChoice = NULL}
};

static const free_stateid_op_dispatch_nfsv4_ops_ free_stateid_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t free_stateid_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&free_stateid_op_dispatch_nfsv4_ops__compute_offsets.fsa_stateid - (const char *)&free_stateid_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const free_stateid_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &fsa_stateid_free_stateid_ERD
};

static const ERD free_stateid_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "free_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    free_stateid_op_dispatch_nfsv4_ops__childrenOffsets,
    free_stateid_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&free_stateid_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&free_stateid_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD get_dir_delegation_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "get_dir_delegation", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&get_dir_delegation_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&get_dir_delegation_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD getdeviceinfo_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getdeviceinfo", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&getdeviceinfo_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&getdeviceinfo_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD getdevicelist_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getdevicelist", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&getdevicelist_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&getdevicelist_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD layoutcommit_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layoutcommit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&layoutcommit_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&layoutcommit_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD layoutget_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layoutget", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&layoutget_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&layoutget_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD lora_reclaim_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "lora_reclaim", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD lora_layout_type_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "lora_layout_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD lora_iomode_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "lora_iomode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD return_type_layoutreturn4sw_ERD = {
    {
        NULL, // namedQName.prefix
        "return_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD offset_layoutreturn_file4_ERD = {
    {
        NULL, // namedQName.prefix
        "offset", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD length_layoutreturn_file4_ERD = {
    {
        NULL, // namedQName.prefix
        "length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const stateid_layoutreturn_file4_ stateid_layoutreturn_file4__compute_offsets;

static const size_t stateid_layoutreturn_file4__childrenOffsets[2] = {
    (const char *)&stateid_layoutreturn_file4__compute_offsets.seqid - (const char *)&stateid_layoutreturn_file4__compute_offsets,
    (const char *)&stateid_layoutreturn_file4__compute_offsets.other - (const char *)&stateid_layoutreturn_file4__compute_offsets
};

static const ERD *const stateid_layoutreturn_file4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_layoutreturn_file4_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_layoutreturn_file4__childrenOffsets,
    stateid_layoutreturn_file4__childrenERDs,
    (ERDParseSelf)&stateid_layoutreturn_file4__parseSelf,
    (ERDUnparseSelf)&stateid_layoutreturn_file4__unparseSelf,
    {.initChoice = NULL}
};

static const body_layoutreturn_file4_ body_layoutreturn_file4__compute_offsets;

static const size_t body_layoutreturn_file4__childrenOffsets[1] = {
    (const char *)&body_layoutreturn_file4__compute_offsets.opaque - (const char *)&body_layoutreturn_file4__compute_offsets
};

static const ERD *const body_layoutreturn_file4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD body_layoutreturn_file4_ERD = {
    {
        NULL, // namedQName.prefix
        "body", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    body_layoutreturn_file4__childrenOffsets,
    body_layoutreturn_file4__childrenERDs,
    (ERDParseSelf)&body_layoutreturn_file4__parseSelf,
    (ERDUnparseSelf)&body_layoutreturn_file4__unparseSelf,
    {.initChoice = NULL}
};

static const filelayout_layoutreturn4sw_ filelayout_layoutreturn4sw__compute_offsets;

static const size_t filelayout_layoutreturn4sw__childrenOffsets[4] = {
    (const char *)&filelayout_layoutreturn4sw__compute_offsets.offset - (const char *)&filelayout_layoutreturn4sw__compute_offsets,
    (const char *)&filelayout_layoutreturn4sw__compute_offsets.length - (const char *)&filelayout_layoutreturn4sw__compute_offsets,
    (const char *)&filelayout_layoutreturn4sw__compute_offsets.stateid - (const char *)&filelayout_layoutreturn4sw__compute_offsets,
    (const char *)&filelayout_layoutreturn4sw__compute_offsets.body - (const char *)&filelayout_layoutreturn4sw__compute_offsets
};

static const ERD *const filelayout_layoutreturn4sw__childrenERDs[4] = {
    &offset_layoutreturn_file4_ERD,
    &length_layoutreturn_file4_ERD,
    &stateid_layoutreturn_file4_ERD,
    &body_layoutreturn_file4_ERD
};

static const ERD filelayout_layoutreturn4sw_ERD = {
    {
        NULL, // namedQName.prefix
        "filelayout", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    filelayout_layoutreturn4sw__childrenOffsets,
    filelayout_layoutreturn4sw__childrenERDs,
    (ERDParseSelf)&filelayout_layoutreturn4sw__parseSelf,
    (ERDUnparseSelf)&filelayout_layoutreturn4sw__unparseSelf,
    {.initChoice = NULL}
};

static const ERD br2_layoutreturn4sw_ERD = {
    {
        NULL, // namedQName.prefix
        "br2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&br2_layoutreturn4sw__parseSelf,
    (ERDUnparseSelf)&br2_layoutreturn4sw__unparseSelf,
    {.initChoice = NULL}
};

static const ERD br3_layoutreturn4sw_ERD = {
    {
        NULL, // namedQName.prefix
        "br3", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&br3_layoutreturn4sw__parseSelf,
    (ERDUnparseSelf)&br3_layoutreturn4sw__unparseSelf,
    {.initChoice = NULL}
};

static const lora_layoutreturn_layoutreturn_ lora_layoutreturn_layoutreturn__compute_offsets;

static const size_t lora_layoutreturn_layoutreturn__childrenOffsets[4] = {
    (const char *)&lora_layoutreturn_layoutreturn__compute_offsets.return_type - (const char *)&lora_layoutreturn_layoutreturn__compute_offsets,
    (const char *)&lora_layoutreturn_layoutreturn__compute_offsets.filelayout - (const char *)&lora_layoutreturn_layoutreturn__compute_offsets,
    (const char *)&lora_layoutreturn_layoutreturn__compute_offsets.br2 - (const char *)&lora_layoutreturn_layoutreturn__compute_offsets,
    (const char *)&lora_layoutreturn_layoutreturn__compute_offsets.br3 - (const char *)&lora_layoutreturn_layoutreturn__compute_offsets
};

static const ERD *const lora_layoutreturn_layoutreturn__childrenERDs[4] = {
    &return_type_layoutreturn4sw_ERD,
    &filelayout_layoutreturn4sw_ERD,
    &br2_layoutreturn4sw_ERD,
    &br3_layoutreturn4sw_ERD
};

static const ERD lora_layoutreturn_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "lora_layoutreturn", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    lora_layoutreturn_layoutreturn__childrenOffsets,
    lora_layoutreturn_layoutreturn__childrenERDs,
    (ERDParseSelf)&lora_layoutreturn_layoutreturn__parseSelf,
    (ERDUnparseSelf)&lora_layoutreturn_layoutreturn__unparseSelf,
    {.initChoice = NULL}
};

static const layoutreturn_op_dispatch_nfsv4_ops_ layoutreturn_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t layoutreturn_op_dispatch_nfsv4_ops__childrenOffsets[4] = {
    (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets.lora_reclaim - (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets.lora_layout_type - (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets.lora_iomode - (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets.lora_layoutreturn - (const char *)&layoutreturn_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const layoutreturn_op_dispatch_nfsv4_ops__childrenERDs[4] = {
    &lora_reclaim_layoutreturn_ERD,
    &lora_layout_type_layoutreturn_ERD,
    &lora_iomode_layoutreturn_ERD,
    &lora_layoutreturn_layoutreturn_ERD
};

static const ERD layoutreturn_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layoutreturn", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    layoutreturn_op_dispatch_nfsv4_ops__childrenOffsets,
    layoutreturn_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&layoutreturn_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&layoutreturn_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD args_secinfo_no_name_ERD = {
    {
        NULL, // namedQName.prefix
        "args", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const secinfo_no_name_op_dispatch_nfsv4_ops_ secinfo_no_name_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t secinfo_no_name_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&secinfo_no_name_op_dispatch_nfsv4_ops__compute_offsets.args - (const char *)&secinfo_no_name_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const secinfo_no_name_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &args_secinfo_no_name_ERD
};

static const ERD secinfo_no_name_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "secinfo_no_name", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    secinfo_no_name_op_dispatch_nfsv4_ops__childrenOffsets,
    secinfo_no_name_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&secinfo_no_name_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&secinfo_no_name_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD sa_sessionid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sa_sessionid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sa_sequenceid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sa_sequenceid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sa_slotid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sa_slotid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sa_highest_slotid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sa_highest_slotid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sa_cachethis_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sa_cachethis", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sequence_op_dispatch_nfsv4_ops_ sequence_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t sequence_op_dispatch_nfsv4_ops__childrenOffsets[5] = {
    (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets.sa_sessionid - (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets.sa_sequenceid - (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets.sa_slotid - (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets.sa_highest_slotid - (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets.sa_cachethis - (const char *)&sequence_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const sequence_op_dispatch_nfsv4_ops__childrenERDs[5] = {
    &sa_sessionid_sequence_ERD,
    &sa_sequenceid_sequence_ERD,
    &sa_slotid_sequence_ERD,
    &sa_highest_slotid_sequence_ERD,
    &sa_cachethis_sequence_ERD
};

static const ERD sequence_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    sequence_op_dispatch_nfsv4_ops__childrenOffsets,
    sequence_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&sequence_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&sequence_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD set_ssv_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "set_ssv", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&set_ssv_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&set_ssv_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD numargs_test_stateid_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ts_stateids_test_stateid_ ts_stateids_test_stateid__compute_offsets;

static const size_t ts_stateids_test_stateid__childrenOffsets[2] = {
    (const char *)&ts_stateids_test_stateid__compute_offsets.seqid - (const char *)&ts_stateids_test_stateid__compute_offsets,
    (const char *)&ts_stateids_test_stateid__compute_offsets.other - (const char *)&ts_stateids_test_stateid__compute_offsets
};

static const ERD *const ts_stateids_test_stateid__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD ts_stateids_test_stateid_ERD = {
    {
        NULL, // namedQName.prefix
        "ts_stateids", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    ts_stateids_test_stateid__childrenOffsets,
    ts_stateids_test_stateid__childrenERDs,
    (ERDParseSelf)&ts_stateids_test_stateid__parseSelf,
    (ERDUnparseSelf)&ts_stateids_test_stateid__unparseSelf,
    {.initChoice = NULL}
};

static const test_stateid_op_dispatch_nfsv4_ops_ array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__compute_offsets.ts_stateids[1] - (const char *)&array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__compute_offsets.ts_stateids[0]
};

static const ERD *const array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &ts_stateids_test_stateid_ERD
};

static const ERD array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "ts_stateids", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__childrenOffsets,
    array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__unparseSelf,
    {.getArraySize = (GetArraySize)&array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__getArraySize}
};

static const test_stateid_op_dispatch_nfsv4_ops_ test_stateid_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t test_stateid_op_dispatch_nfsv4_ops__childrenOffsets[2] = {
    (const char *)&test_stateid_op_dispatch_nfsv4_ops__compute_offsets.numargs - (const char *)&test_stateid_op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&test_stateid_op_dispatch_nfsv4_ops__compute_offsets.ts_stateids[0] - (const char *)&test_stateid_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const test_stateid_op_dispatch_nfsv4_ops__childrenERDs[2] = {
    &numargs_test_stateid_ERD,
    &array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops_ERD
};

static const ERD test_stateid_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "test_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    test_stateid_op_dispatch_nfsv4_ops__childrenOffsets,
    test_stateid_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&test_stateid_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&test_stateid_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD want_delegation_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "want_delegation", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&want_delegation_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&want_delegation_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD dca_clientid_destroy_clientid_ERD = {
    {
        NULL, // namedQName.prefix
        "dca_clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const destroy_clientid_op_dispatch_nfsv4_ops_ destroy_clientid_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t destroy_clientid_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&destroy_clientid_op_dispatch_nfsv4_ops__compute_offsets.dca_clientid - (const char *)&destroy_clientid_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const destroy_clientid_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &dca_clientid_destroy_clientid_ERD
};

static const ERD destroy_clientid_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "destroy_clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    destroy_clientid_op_dispatch_nfsv4_ops__childrenOffsets,
    destroy_clientid_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&destroy_clientid_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&destroy_clientid_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD rca_one_fs_reclaim_complete_ERD = {
    {
        NULL, // namedQName.prefix
        "rca_one_fs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const reclaim_complete_op_dispatch_nfsv4_ops_ reclaim_complete_op_dispatch_nfsv4_ops__compute_offsets;

static const size_t reclaim_complete_op_dispatch_nfsv4_ops__childrenOffsets[1] = {
    (const char *)&reclaim_complete_op_dispatch_nfsv4_ops__compute_offsets.rca_one_fs - (const char *)&reclaim_complete_op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const reclaim_complete_op_dispatch_nfsv4_ops__childrenERDs[1] = {
    &rca_one_fs_reclaim_complete_ERD
};

static const ERD reclaim_complete_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "reclaim_complete", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    reclaim_complete_op_dispatch_nfsv4_ops__childrenOffsets,
    reclaim_complete_op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&reclaim_complete_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&reclaim_complete_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD allocate_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "allocate", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&allocate_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&allocate_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD copy_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "copy", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&copy_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&copy_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD copy_notify_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "copy_notify", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&copy_notify_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&copy_notify_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD deallocate_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "deallocate", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&deallocate_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&deallocate_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD io_advise_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "io_advise", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&io_advise_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&io_advise_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD layouterror_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layouterror", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&layouterror_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&layouterror_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD layoutstats_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layoutstats", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&layoutstats_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&layoutstats_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offload_cancel_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "offload_cancel", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&offload_cancel_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&offload_cancel_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD offload_status_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "offload_status", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&offload_status_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&offload_status_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD read_plus_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "read_plus", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&read_plus_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&read_plus_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD seek_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "seek", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&seek_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&seek_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD write_same_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "write_same", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&write_same_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&write_same_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD clone_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "clone", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&clone_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&clone_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD illegal_op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "illegal", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&illegal_op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&illegal_op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = NULL}
};

static const op_dispatch_nfsv4_ops_ op_dispatch_nfsv4_ops__compute_offsets;

static const size_t op_dispatch_nfsv4_ops__childrenOffsets[71] = {
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets._choice - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.access - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.close - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.commit - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.create - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.delegpurge - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.delegreturn - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.getattr - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.getfh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.link - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.lockt - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.locku - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.lock - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.lookup - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.lookupp - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.nverify - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.open - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.openattr - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.open_confirm - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.open_downgrade - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.putfh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.putpubfh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.putrootfh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.read - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.readdir - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.readlink - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.remove - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.rename - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.renew - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.restorefh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.savefh - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.secinfo - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.setattr - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.setclientid - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.setclientid_confirm - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.verify - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.write - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.release_lockowner - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.backchannel_ctl - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.bind_conn_to_session - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.exchange_id - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.create_session - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.destroy_session - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.free_stateid - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.get_dir_delegation - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.getdeviceinfo - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.getdevicelist - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.layoutcommit - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.layoutget - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.layoutreturn - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.secinfo_no_name - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.sequence - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.set_ssv - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.test_stateid - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.want_delegation - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.destroy_clientid - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.reclaim_complete - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.allocate - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.copy - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.copy_notify - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.deallocate - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.io_advise - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.layouterror - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.layoutstats - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.offload_cancel - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.offload_status - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.read_plus - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.seek - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.write_same - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.clone - (const char *)&op_dispatch_nfsv4_ops__compute_offsets,
    (const char *)&op_dispatch_nfsv4_ops__compute_offsets.illegal - (const char *)&op_dispatch_nfsv4_ops__compute_offsets
};

static const ERD *const op_dispatch_nfsv4_ops__childrenERDs[71] = {
    &_choice_op_dispatch_nfsv4_ops_ERD,
    &access_op_dispatch_nfsv4_ops_ERD,
    &close_op_dispatch_nfsv4_ops_ERD,
    &commit_op_dispatch_nfsv4_ops_ERD,
    &create_op_dispatch_nfsv4_ops_ERD,
    &delegpurge_op_dispatch_nfsv4_ops_ERD,
    &delegreturn_op_dispatch_nfsv4_ops_ERD,
    &getattr_op_dispatch_nfsv4_ops_ERD,
    &getfh_op_dispatch_nfsv4_ops_ERD,
    &link_op_dispatch_nfsv4_ops_ERD,
    &lockt_op_dispatch_nfsv4_ops_ERD,
    &locku_op_dispatch_nfsv4_ops_ERD,
    &lock_op_dispatch_nfsv4_ops_ERD,
    &lookup_op_dispatch_nfsv4_ops_ERD,
    &lookupp_op_dispatch_nfsv4_ops_ERD,
    &nverify_op_dispatch_nfsv4_ops_ERD,
    &open_op_dispatch_nfsv4_ops_ERD,
    &openattr_op_dispatch_nfsv4_ops_ERD,
    &open_confirm_op_dispatch_nfsv4_ops_ERD,
    &open_downgrade_op_dispatch_nfsv4_ops_ERD,
    &putfh_op_dispatch_nfsv4_ops_ERD,
    &putpubfh_op_dispatch_nfsv4_ops_ERD,
    &putrootfh_op_dispatch_nfsv4_ops_ERD,
    &read_op_dispatch_nfsv4_ops_ERD,
    &readdir_op_dispatch_nfsv4_ops_ERD,
    &readlink_op_dispatch_nfsv4_ops_ERD,
    &remove_op_dispatch_nfsv4_ops_ERD,
    &rename_op_dispatch_nfsv4_ops_ERD,
    &renew_op_dispatch_nfsv4_ops_ERD,
    &restorefh_op_dispatch_nfsv4_ops_ERD,
    &savefh_op_dispatch_nfsv4_ops_ERD,
    &secinfo_op_dispatch_nfsv4_ops_ERD,
    &setattr_op_dispatch_nfsv4_ops_ERD,
    &setclientid_op_dispatch_nfsv4_ops_ERD,
    &setclientid_confirm_op_dispatch_nfsv4_ops_ERD,
    &verify_op_dispatch_nfsv4_ops_ERD,
    &write_op_dispatch_nfsv4_ops_ERD,
    &release_lockowner_op_dispatch_nfsv4_ops_ERD,
    &backchannel_ctl_op_dispatch_nfsv4_ops_ERD,
    &bind_conn_to_session_op_dispatch_nfsv4_ops_ERD,
    &exchange_id_op_dispatch_nfsv4_ops_ERD,
    &create_session_op_dispatch_nfsv4_ops_ERD,
    &destroy_session_op_dispatch_nfsv4_ops_ERD,
    &free_stateid_op_dispatch_nfsv4_ops_ERD,
    &get_dir_delegation_op_dispatch_nfsv4_ops_ERD,
    &getdeviceinfo_op_dispatch_nfsv4_ops_ERD,
    &getdevicelist_op_dispatch_nfsv4_ops_ERD,
    &layoutcommit_op_dispatch_nfsv4_ops_ERD,
    &layoutget_op_dispatch_nfsv4_ops_ERD,
    &layoutreturn_op_dispatch_nfsv4_ops_ERD,
    &secinfo_no_name_op_dispatch_nfsv4_ops_ERD,
    &sequence_op_dispatch_nfsv4_ops_ERD,
    &set_ssv_op_dispatch_nfsv4_ops_ERD,
    &test_stateid_op_dispatch_nfsv4_ops_ERD,
    &want_delegation_op_dispatch_nfsv4_ops_ERD,
    &destroy_clientid_op_dispatch_nfsv4_ops_ERD,
    &reclaim_complete_op_dispatch_nfsv4_ops_ERD,
    &allocate_op_dispatch_nfsv4_ops_ERD,
    &copy_op_dispatch_nfsv4_ops_ERD,
    &copy_notify_op_dispatch_nfsv4_ops_ERD,
    &deallocate_op_dispatch_nfsv4_ops_ERD,
    &io_advise_op_dispatch_nfsv4_ops_ERD,
    &layouterror_op_dispatch_nfsv4_ops_ERD,
    &layoutstats_op_dispatch_nfsv4_ops_ERD,
    &offload_cancel_op_dispatch_nfsv4_ops_ERD,
    &offload_status_op_dispatch_nfsv4_ops_ERD,
    &read_plus_op_dispatch_nfsv4_ops_ERD,
    &seek_op_dispatch_nfsv4_ops_ERD,
    &write_same_op_dispatch_nfsv4_ops_ERD,
    &clone_op_dispatch_nfsv4_ops_ERD,
    &illegal_op_dispatch_nfsv4_ops_ERD
};

static const ERD op_dispatch_nfsv4_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "op_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    op_dispatch_nfsv4_ops__childrenOffsets,
    op_dispatch_nfsv4_ops__childrenERDs,
    (ERDParseSelf)&op_dispatch_nfsv4_ops__parseSelf,
    (ERDUnparseSelf)&op_dispatch_nfsv4_ops__unparseSelf,
    {.initChoice = (InitChoiceRD)&op_dispatch_nfsv4_ops__initChoice}
};

static const nfscmd_compound_ nfscmd_compound__compute_offsets;

static const size_t nfscmd_compound__childrenOffsets[2] = {
    (const char *)&nfscmd_compound__compute_offsets.opcode - (const char *)&nfscmd_compound__compute_offsets,
    (const char *)&nfscmd_compound__compute_offsets.op_dispatch - (const char *)&nfscmd_compound__compute_offsets
};

static const ERD *const nfscmd_compound__childrenERDs[2] = {
    &opcode_nfsv4_ops_ERD,
    &op_dispatch_nfsv4_ops_ERD
};

static const ERD nfscmd_compound_ERD = {
    {
        NULL, // namedQName.prefix
        "nfscmd", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    nfscmd_compound__childrenOffsets,
    nfscmd_compound__childrenERDs,
    (ERDParseSelf)&nfscmd_compound__parseSelf,
    (ERDUnparseSelf)&nfscmd_compound__unparseSelf,
    {.initChoice = NULL}
};

static const compound_nfsv4_ array_nfscmd_compound_compound_nfsv4__compute_offsets;

static const size_t array_nfscmd_compound_compound_nfsv4__childrenOffsets[1] = {
    (const char *)&array_nfscmd_compound_compound_nfsv4__compute_offsets.nfscmd[1] - (const char *)&array_nfscmd_compound_compound_nfsv4__compute_offsets.nfscmd[0]
};

static const ERD *const array_nfscmd_compound_compound_nfsv4__childrenERDs[1] = {
    &nfscmd_compound_ERD
};

static const ERD array_nfscmd_compound_compound_nfsv4_ERD = {
    {
        NULL, // namedQName.prefix
        "nfscmd", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_nfscmd_compound_compound_nfsv4__childrenOffsets,
    array_nfscmd_compound_compound_nfsv4__childrenERDs,
    (ERDParseSelf)&array_nfscmd_compound_compound_nfsv4__parseSelf,
    (ERDUnparseSelf)&array_nfscmd_compound_compound_nfsv4__unparseSelf,
    {.getArraySize = (GetArraySize)&array_nfscmd_compound_compound_nfsv4__getArraySize}
};

static const compound_nfsv4_ compound_nfsv4__compute_offsets;

static const size_t compound_nfsv4__childrenOffsets[4] = {
    (const char *)&compound_nfsv4__compute_offsets.tag - (const char *)&compound_nfsv4__compute_offsets,
    (const char *)&compound_nfsv4__compute_offsets.minorversion - (const char *)&compound_nfsv4__compute_offsets,
    (const char *)&compound_nfsv4__compute_offsets.numargs - (const char *)&compound_nfsv4__compute_offsets,
    (const char *)&compound_nfsv4__compute_offsets.nfscmd[0] - (const char *)&compound_nfsv4__compute_offsets
};

static const ERD *const compound_nfsv4__childrenERDs[4] = {
    &tag_compound_ERD,
    &minorversion_compound_ERD,
    &numargs_compound_ERD,
    &array_nfscmd_compound_compound_nfsv4_ERD
};

static const ERD compound_nfsv4_ERD = {
    {
        NULL, // namedQName.prefix
        "compound", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    compound_nfsv4__childrenOffsets,
    compound_nfsv4__childrenERDs,
    (ERDParseSelf)&compound_nfsv4__parseSelf,
    (ERDUnparseSelf)&compound_nfsv4__unparseSelf,
    {.initChoice = NULL}
};

static const nfsv4_call_dispatch_call_body_ nfsv4_call_dispatch_call_body__compute_offsets;

static const size_t nfsv4_call_dispatch_call_body__childrenOffsets[3] = {
    (const char *)&nfsv4_call_dispatch_call_body__compute_offsets._choice - (const char *)&nfsv4_call_dispatch_call_body__compute_offsets,
    (const char *)&nfsv4_call_dispatch_call_body__compute_offsets.null - (const char *)&nfsv4_call_dispatch_call_body__compute_offsets,
    (const char *)&nfsv4_call_dispatch_call_body__compute_offsets.compound - (const char *)&nfsv4_call_dispatch_call_body__compute_offsets
};

static const ERD *const nfsv4_call_dispatch_call_body__childrenERDs[3] = {
    &_choice_nfsv4_call_dispatch_call_body_ERD,
    &null_nfsv4_ERD,
    &compound_nfsv4_ERD
};

static const ERD nfsv4_call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "nfsv4", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    nfsv4_call_dispatch_call_body__childrenOffsets,
    nfsv4_call_dispatch_call_body__childrenERDs,
    (ERDParseSelf)&nfsv4_call_dispatch_call_body__parseSelf,
    (ERDUnparseSelf)&nfsv4_call_dispatch_call_body__unparseSelf,
    {.initChoice = (InitChoiceRD)&nfsv4_call_dispatch_call_body__initChoice}
};

static const call_dispatch_call_body_ call_dispatch_call_body__compute_offsets;

static const size_t call_dispatch_call_body__childrenOffsets[3] = {
    (const char *)&call_dispatch_call_body__compute_offsets._choice - (const char *)&call_dispatch_call_body__compute_offsets,
    (const char *)&call_dispatch_call_body__compute_offsets.v3_dispatch - (const char *)&call_dispatch_call_body__compute_offsets,
    (const char *)&call_dispatch_call_body__compute_offsets.nfsv4 - (const char *)&call_dispatch_call_body__compute_offsets
};

static const ERD *const call_dispatch_call_body__childrenERDs[3] = {
    &_choice_call_dispatch_call_body_ERD,
    &v3_dispatch_call_dispatch_call_body_ERD,
    &nfsv4_call_dispatch_call_body_ERD
};

static const ERD call_dispatch_call_body_ERD = {
    {
        NULL, // namedQName.prefix
        "call_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    call_dispatch_call_body__childrenOffsets,
    call_dispatch_call_body__childrenERDs,
    (ERDParseSelf)&call_dispatch_call_body__parseSelf,
    (ERDUnparseSelf)&call_dispatch_call_body__unparseSelf,
    {.initChoice = (InitChoiceRD)&call_dispatch_call_body__initChoice}
};

static const call_body_entry_dispatch_entry_point_ call_body_entry_dispatch_entry_point__compute_offsets;

static const size_t call_body_entry_dispatch_entry_point__childrenOffsets[7] = {
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.rpcvers - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.prog - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.vers - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.proc - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.cred - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.verf - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&call_body_entry_dispatch_entry_point__compute_offsets.call_dispatch - (const char *)&call_body_entry_dispatch_entry_point__compute_offsets
};

static const ERD *const call_body_entry_dispatch_entry_point__childrenERDs[7] = {
    &rpcvers_call_body_ERD,
    &prog_call_body_ERD,
    &vers_call_body_ERD,
    &proc_call_body_ERD,
    &cred_call_body_ERD,
    &verf_call_body_ERD,
    &call_dispatch_call_body_ERD
};

static const ERD call_body_entry_dispatch_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "call_body", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    call_body_entry_dispatch_entry_point__childrenOffsets,
    call_body_entry_dispatch_entry_point__childrenERDs,
    (ERDParseSelf)&call_body_entry_dispatch_entry_point__parseSelf,
    (ERDUnparseSelf)&call_body_entry_dispatch_entry_point__unparseSelf,
    {.initChoice = NULL}
};

static const ERD status_reply_body_ERD = {
    {
        NULL, // namedQName.prefix
        "status", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_reply_dispatch_reply_body_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const verf_accept_reply_ verf_accept_reply__compute_offsets;

static const size_t verf_accept_reply__childrenOffsets[2] = {
    (const char *)&verf_accept_reply__compute_offsets.auth_type - (const char *)&verf_accept_reply__compute_offsets,
    (const char *)&verf_accept_reply__compute_offsets.auth_dispatch - (const char *)&verf_accept_reply__compute_offsets
};

static const ERD *const verf_accept_reply__childrenERDs[2] = {
    &auth_type_opaque_auth_ERD,
    &auth_dispatch_opaque_auth_ERD
};

static const ERD verf_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "verf", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    verf_accept_reply__childrenOffsets,
    verf_accept_reply__childrenERDs,
    (ERDParseSelf)&verf_accept_reply__parseSelf,
    (ERDUnparseSelf)&verf_accept_reply__unparseSelf,
    {.initChoice = NULL}
};

static const ERD accept_status_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "accept_status", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_accept_dispatch_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD status_nfsv4reply_ERD = {
    {
        NULL, // namedQName.prefix
        "status", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const tag_nfsv4reply_ tag_nfsv4reply__compute_offsets;

static const size_t tag_nfsv4reply__childrenOffsets[1] = {
    (const char *)&tag_nfsv4reply__compute_offsets.opaque - (const char *)&tag_nfsv4reply__compute_offsets
};

static const ERD *const tag_nfsv4reply__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD tag_nfsv4reply_ERD = {
    {
        NULL, // namedQName.prefix
        "tag", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    tag_nfsv4reply__childrenOffsets,
    tag_nfsv4reply__childrenERDs,
    (ERDParseSelf)&tag_nfsv4reply__parseSelf,
    (ERDUnparseSelf)&tag_nfsv4reply__unparseSelf,
    {.initChoice = NULL}
};

static const ERD numargs_nfsv4reply_ERD = {
    {
        NULL, // namedQName.prefix
        "numargs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD opcode_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "opcode", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD status_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "status", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD supported_access_ERD = {
    {
        NULL, // namedQName.prefix
        "supported", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD access_access_ERD = {
    {
        NULL, // namedQName.prefix
        "access", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const access_op_dispatch_v4reply_ops_ access_op_dispatch_v4reply_ops__compute_offsets;

static const size_t access_op_dispatch_v4reply_ops__childrenOffsets[2] = {
    (const char *)&access_op_dispatch_v4reply_ops__compute_offsets.supported - (const char *)&access_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&access_op_dispatch_v4reply_ops__compute_offsets.access - (const char *)&access_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const access_op_dispatch_v4reply_ops__childrenERDs[2] = {
    &supported_access_ERD,
    &access_access_ERD
};

static const ERD access_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "access", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    access_op_dispatch_v4reply_ops__childrenOffsets,
    access_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&access_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&access_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const close_op_dispatch_v4reply_ops_ close_op_dispatch_v4reply_ops__compute_offsets;

static const size_t close_op_dispatch_v4reply_ops__childrenOffsets[1] = {
    (const char *)&close_op_dispatch_v4reply_ops__compute_offsets.open_stateid - (const char *)&close_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const close_op_dispatch_v4reply_ops__childrenERDs[1] = {
    &open_stateid_close_ERD
};

static const ERD close_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "close", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    close_op_dispatch_v4reply_ops__childrenOffsets,
    close_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&close_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&close_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const obj_attributes_getattr_ array_attrmask_fattr4_obj_attributes_getattr__compute_offsets;

static const size_t array_attrmask_fattr4_obj_attributes_getattr__childrenOffsets[1] = {
    (const char *)&array_attrmask_fattr4_obj_attributes_getattr__compute_offsets.attrmask[1] - (const char *)&array_attrmask_fattr4_obj_attributes_getattr__compute_offsets.attrmask[0]
};

static const ERD *const array_attrmask_fattr4_obj_attributes_getattr__childrenERDs[1] = {
    &attrmask_fattr4_ERD
};

static const ERD array_attrmask_fattr4_obj_attributes_getattr_ERD = {
    {
        NULL, // namedQName.prefix
        "attrmask", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_attrmask_fattr4_obj_attributes_getattr__childrenOffsets,
    array_attrmask_fattr4_obj_attributes_getattr__childrenERDs,
    (ERDParseSelf)&array_attrmask_fattr4_obj_attributes_getattr__parseSelf,
    (ERDUnparseSelf)&array_attrmask_fattr4_obj_attributes_getattr__unparseSelf,
    {.getArraySize = (GetArraySize)&array_attrmask_fattr4_obj_attributes_getattr__getArraySize}
};

static const obj_attributes_getattr_ obj_attributes_getattr__compute_offsets;

static const size_t obj_attributes_getattr__childrenOffsets[3] = {
    (const char *)&obj_attributes_getattr__compute_offsets.numargs - (const char *)&obj_attributes_getattr__compute_offsets,
    (const char *)&obj_attributes_getattr__compute_offsets.attrmask[0] - (const char *)&obj_attributes_getattr__compute_offsets,
    (const char *)&obj_attributes_getattr__compute_offsets.attr_vals - (const char *)&obj_attributes_getattr__compute_offsets
};

static const ERD *const obj_attributes_getattr__childrenERDs[3] = {
    &numargs_fattr4_ERD,
    &array_attrmask_fattr4_obj_attributes_getattr_ERD,
    &attr_vals_fattr4_ERD
};

static const ERD obj_attributes_getattr_ERD = {
    {
        NULL, // namedQName.prefix
        "obj_attributes", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    obj_attributes_getattr__childrenOffsets,
    obj_attributes_getattr__childrenERDs,
    (ERDParseSelf)&obj_attributes_getattr__parseSelf,
    (ERDUnparseSelf)&obj_attributes_getattr__unparseSelf,
    {.initChoice = NULL}
};

static const getattr_op_dispatch_v4reply_ops_ getattr_op_dispatch_v4reply_ops__compute_offsets;

static const size_t getattr_op_dispatch_v4reply_ops__childrenOffsets[1] = {
    (const char *)&getattr_op_dispatch_v4reply_ops__compute_offsets.obj_attributes - (const char *)&getattr_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const getattr_op_dispatch_v4reply_ops__childrenERDs[1] = {
    &obj_attributes_getattr_ERD
};

static const ERD getattr_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getattr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    getattr_op_dispatch_v4reply_ops__childrenOffsets,
    getattr_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&getattr_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&getattr_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const nfs_fh4_getfh_ nfs_fh4_getfh__compute_offsets;

static const size_t nfs_fh4_getfh__childrenOffsets[1] = {
    (const char *)&nfs_fh4_getfh__compute_offsets.opaque - (const char *)&nfs_fh4_getfh__compute_offsets
};

static const ERD *const nfs_fh4_getfh__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD nfs_fh4_getfh_ERD = {
    {
        NULL, // namedQName.prefix
        "nfs_fh4", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    nfs_fh4_getfh__childrenOffsets,
    nfs_fh4_getfh__childrenERDs,
    (ERDParseSelf)&nfs_fh4_getfh__parseSelf,
    (ERDUnparseSelf)&nfs_fh4_getfh__unparseSelf,
    {.initChoice = NULL}
};

static const getfh_op_dispatch_v4reply_ops_ getfh_op_dispatch_v4reply_ops__compute_offsets;

static const size_t getfh_op_dispatch_v4reply_ops__childrenOffsets[1] = {
    (const char *)&getfh_op_dispatch_v4reply_ops__compute_offsets.nfs_fh4 - (const char *)&getfh_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const getfh_op_dispatch_v4reply_ops__childrenERDs[1] = {
    &nfs_fh4_getfh_ERD
};

static const ERD getfh_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "getfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    getfh_op_dispatch_v4reply_ops__childrenOffsets,
    getfh_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&getfh_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&getfh_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD lookup_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "lookup", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&lookup_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&lookup_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const stateid_open4resok_ stateid_open4resok__compute_offsets;

static const size_t stateid_open4resok__childrenOffsets[2] = {
    (const char *)&stateid_open4resok__compute_offsets.seqid - (const char *)&stateid_open4resok__compute_offsets,
    (const char *)&stateid_open4resok__compute_offsets.other - (const char *)&stateid_open4resok__compute_offsets
};

static const ERD *const stateid_open4resok__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_open4resok__childrenOffsets,
    stateid_open4resok__childrenERDs,
    (ERDParseSelf)&stateid_open4resok__parseSelf,
    (ERDUnparseSelf)&stateid_open4resok__unparseSelf,
    {.initChoice = NULL}
};

static const ERD atomic_change_info4_ERD = {
    {
        NULL, // namedQName.prefix
        "atomic", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD before_change_info4_ERD = {
    {
        NULL, // namedQName.prefix
        "before", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD after_change_info4_ERD = {
    {
        NULL, // namedQName.prefix
        "after", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const cinfo_open4resok_ cinfo_open4resok__compute_offsets;

static const size_t cinfo_open4resok__childrenOffsets[3] = {
    (const char *)&cinfo_open4resok__compute_offsets.atomic - (const char *)&cinfo_open4resok__compute_offsets,
    (const char *)&cinfo_open4resok__compute_offsets.before - (const char *)&cinfo_open4resok__compute_offsets,
    (const char *)&cinfo_open4resok__compute_offsets.after - (const char *)&cinfo_open4resok__compute_offsets
};

static const ERD *const cinfo_open4resok__childrenERDs[3] = {
    &atomic_change_info4_ERD,
    &before_change_info4_ERD,
    &after_change_info4_ERD
};

static const ERD cinfo_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "cinfo", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    cinfo_open4resok__childrenOffsets,
    cinfo_open4resok__childrenERDs,
    (ERDParseSelf)&cinfo_open4resok__parseSelf,
    (ERDUnparseSelf)&cinfo_open4resok__unparseSelf,
    {.initChoice = NULL}
};

static const ERD rflags_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "rflags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const attrset_open4resok_ array_bitmap_bitmap4_attrset_open4resok__compute_offsets;

static const size_t array_bitmap_bitmap4_attrset_open4resok__childrenOffsets[1] = {
    (const char *)&array_bitmap_bitmap4_attrset_open4resok__compute_offsets.bitmap[1] - (const char *)&array_bitmap_bitmap4_attrset_open4resok__compute_offsets.bitmap[0]
};

static const ERD *const array_bitmap_bitmap4_attrset_open4resok__childrenERDs[1] = {
    &bitmap_bitmap4_ERD
};

static const ERD array_bitmap_bitmap4_attrset_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "bitmap", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_bitmap_bitmap4_attrset_open4resok__childrenOffsets,
    array_bitmap_bitmap4_attrset_open4resok__childrenERDs,
    (ERDParseSelf)&array_bitmap_bitmap4_attrset_open4resok__parseSelf,
    (ERDUnparseSelf)&array_bitmap_bitmap4_attrset_open4resok__unparseSelf,
    {.getArraySize = (GetArraySize)&array_bitmap_bitmap4_attrset_open4resok__getArraySize}
};

static const attrset_open4resok_ attrset_open4resok__compute_offsets;

static const size_t attrset_open4resok__childrenOffsets[2] = {
    (const char *)&attrset_open4resok__compute_offsets.numargs - (const char *)&attrset_open4resok__compute_offsets,
    (const char *)&attrset_open4resok__compute_offsets.bitmap[0] - (const char *)&attrset_open4resok__compute_offsets
};

static const ERD *const attrset_open4resok__childrenERDs[2] = {
    &numargs_bitmap4_ERD,
    &array_bitmap_bitmap4_attrset_open4resok_ERD
};

static const ERD attrset_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "attrset", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    attrset_open4resok__childrenOffsets,
    attrset_open4resok__childrenERDs,
    (ERDParseSelf)&attrset_open4resok__parseSelf,
    (ERDUnparseSelf)&attrset_open4resok__unparseSelf,
    {.initChoice = NULL}
};

static const ERD delegation_type_open_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "delegation_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const stateid_open_read_delegation4_ stateid_open_read_delegation4__compute_offsets;

static const size_t stateid_open_read_delegation4__childrenOffsets[2] = {
    (const char *)&stateid_open_read_delegation4__compute_offsets.seqid - (const char *)&stateid_open_read_delegation4__compute_offsets,
    (const char *)&stateid_open_read_delegation4__compute_offsets.other - (const char *)&stateid_open_read_delegation4__compute_offsets
};

static const ERD *const stateid_open_read_delegation4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_open_read_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_open_read_delegation4__childrenOffsets,
    stateid_open_read_delegation4__childrenERDs,
    (ERDParseSelf)&stateid_open_read_delegation4__parseSelf,
    (ERDUnparseSelf)&stateid_open_read_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD recall_open_read_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "recall", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD type_nfsace4_ERD = {
    {
        NULL, // namedQName.prefix
        "type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD flag_nfsace4_ERD = {
    {
        NULL, // namedQName.prefix
        "flag", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD access_mask_nfsace4_ERD = {
    {
        NULL, // namedQName.prefix
        "access_mask", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const who_nfsace4_ who_nfsace4__compute_offsets;

static const size_t who_nfsace4__childrenOffsets[1] = {
    (const char *)&who_nfsace4__compute_offsets.opaque - (const char *)&who_nfsace4__compute_offsets
};

static const ERD *const who_nfsace4__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD who_nfsace4_ERD = {
    {
        NULL, // namedQName.prefix
        "who", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    who_nfsace4__childrenOffsets,
    who_nfsace4__childrenERDs,
    (ERDParseSelf)&who_nfsace4__parseSelf,
    (ERDUnparseSelf)&who_nfsace4__unparseSelf,
    {.initChoice = NULL}
};

static const permissions_open_read_delegation4_ permissions_open_read_delegation4__compute_offsets;

static const size_t permissions_open_read_delegation4__childrenOffsets[4] = {
    (const char *)&permissions_open_read_delegation4__compute_offsets.type - (const char *)&permissions_open_read_delegation4__compute_offsets,
    (const char *)&permissions_open_read_delegation4__compute_offsets.flag - (const char *)&permissions_open_read_delegation4__compute_offsets,
    (const char *)&permissions_open_read_delegation4__compute_offsets.access_mask - (const char *)&permissions_open_read_delegation4__compute_offsets,
    (const char *)&permissions_open_read_delegation4__compute_offsets.who - (const char *)&permissions_open_read_delegation4__compute_offsets
};

static const ERD *const permissions_open_read_delegation4__childrenERDs[4] = {
    &type_nfsace4_ERD,
    &flag_nfsace4_ERD,
    &access_mask_nfsace4_ERD,
    &who_nfsace4_ERD
};

static const ERD permissions_open_read_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "permissions", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    permissions_open_read_delegation4__childrenOffsets,
    permissions_open_read_delegation4__childrenERDs,
    (ERDParseSelf)&permissions_open_read_delegation4__parseSelf,
    (ERDUnparseSelf)&permissions_open_read_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const read_open_delegation4_ read_open_delegation4__compute_offsets;

static const size_t read_open_delegation4__childrenOffsets[3] = {
    (const char *)&read_open_delegation4__compute_offsets.stateid - (const char *)&read_open_delegation4__compute_offsets,
    (const char *)&read_open_delegation4__compute_offsets.recall - (const char *)&read_open_delegation4__compute_offsets,
    (const char *)&read_open_delegation4__compute_offsets.permissions - (const char *)&read_open_delegation4__compute_offsets
};

static const ERD *const read_open_delegation4__childrenERDs[3] = {
    &stateid_open_read_delegation4_ERD,
    &recall_open_read_delegation4_ERD,
    &permissions_open_read_delegation4_ERD
};

static const ERD read_open_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "read", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    read_open_delegation4__childrenOffsets,
    read_open_delegation4__childrenERDs,
    (ERDParseSelf)&read_open_delegation4__parseSelf,
    (ERDUnparseSelf)&read_open_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const stateid_open_write_delegation4_ stateid_open_write_delegation4__compute_offsets;

static const size_t stateid_open_write_delegation4__childrenOffsets[2] = {
    (const char *)&stateid_open_write_delegation4__compute_offsets.seqid - (const char *)&stateid_open_write_delegation4__compute_offsets,
    (const char *)&stateid_open_write_delegation4__compute_offsets.other - (const char *)&stateid_open_write_delegation4__compute_offsets
};

static const ERD *const stateid_open_write_delegation4__childrenERDs[2] = {
    &seqid_stateid4_ERD,
    &other_stateid4_ERD
};

static const ERD stateid_open_write_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    stateid_open_write_delegation4__childrenOffsets,
    stateid_open_write_delegation4__childrenERDs,
    (ERDParseSelf)&stateid_open_write_delegation4__parseSelf,
    (ERDUnparseSelf)&stateid_open_write_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD recall_open_write_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "recall", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD limitby_nfs_space_limit4_ERD = {
    {
        NULL, // namedQName.prefix
        "limitby", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD filesize_nfs_space_limit4_ERD = {
    {
        NULL, // namedQName.prefix
        "filesize", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD num_blocks_nfs_modified_limit4_ERD = {
    {
        NULL, // namedQName.prefix
        "num_blocks", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD bytes_per_block_nfs_modified_limit4_ERD = {
    {
        NULL, // namedQName.prefix
        "bytes_per_block", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const mod_blocks_nfs_space_limit4_ mod_blocks_nfs_space_limit4__compute_offsets;

static const size_t mod_blocks_nfs_space_limit4__childrenOffsets[2] = {
    (const char *)&mod_blocks_nfs_space_limit4__compute_offsets.num_blocks - (const char *)&mod_blocks_nfs_space_limit4__compute_offsets,
    (const char *)&mod_blocks_nfs_space_limit4__compute_offsets.bytes_per_block - (const char *)&mod_blocks_nfs_space_limit4__compute_offsets
};

static const ERD *const mod_blocks_nfs_space_limit4__childrenERDs[2] = {
    &num_blocks_nfs_modified_limit4_ERD,
    &bytes_per_block_nfs_modified_limit4_ERD
};

static const ERD mod_blocks_nfs_space_limit4_ERD = {
    {
        NULL, // namedQName.prefix
        "mod_blocks", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    mod_blocks_nfs_space_limit4__childrenOffsets,
    mod_blocks_nfs_space_limit4__childrenERDs,
    (ERDParseSelf)&mod_blocks_nfs_space_limit4__parseSelf,
    (ERDUnparseSelf)&mod_blocks_nfs_space_limit4__unparseSelf,
    {.initChoice = NULL}
};

static const space_limit_open_write_delegation4_ space_limit_open_write_delegation4__compute_offsets;

static const size_t space_limit_open_write_delegation4__childrenOffsets[3] = {
    (const char *)&space_limit_open_write_delegation4__compute_offsets.limitby - (const char *)&space_limit_open_write_delegation4__compute_offsets,
    (const char *)&space_limit_open_write_delegation4__compute_offsets.filesize - (const char *)&space_limit_open_write_delegation4__compute_offsets,
    (const char *)&space_limit_open_write_delegation4__compute_offsets.mod_blocks - (const char *)&space_limit_open_write_delegation4__compute_offsets
};

static const ERD *const space_limit_open_write_delegation4__childrenERDs[3] = {
    &limitby_nfs_space_limit4_ERD,
    &filesize_nfs_space_limit4_ERD,
    &mod_blocks_nfs_space_limit4_ERD
};

static const ERD space_limit_open_write_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "space_limit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    space_limit_open_write_delegation4__childrenOffsets,
    space_limit_open_write_delegation4__childrenERDs,
    (ERDParseSelf)&space_limit_open_write_delegation4__parseSelf,
    (ERDUnparseSelf)&space_limit_open_write_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const permissions_open_write_delegation4_ permissions_open_write_delegation4__compute_offsets;

static const size_t permissions_open_write_delegation4__childrenOffsets[4] = {
    (const char *)&permissions_open_write_delegation4__compute_offsets.type - (const char *)&permissions_open_write_delegation4__compute_offsets,
    (const char *)&permissions_open_write_delegation4__compute_offsets.flag - (const char *)&permissions_open_write_delegation4__compute_offsets,
    (const char *)&permissions_open_write_delegation4__compute_offsets.access_mask - (const char *)&permissions_open_write_delegation4__compute_offsets,
    (const char *)&permissions_open_write_delegation4__compute_offsets.who - (const char *)&permissions_open_write_delegation4__compute_offsets
};

static const ERD *const permissions_open_write_delegation4__childrenERDs[4] = {
    &type_nfsace4_ERD,
    &flag_nfsace4_ERD,
    &access_mask_nfsace4_ERD,
    &who_nfsace4_ERD
};

static const ERD permissions_open_write_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "permissions", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    permissions_open_write_delegation4__childrenOffsets,
    permissions_open_write_delegation4__childrenERDs,
    (ERDParseSelf)&permissions_open_write_delegation4__parseSelf,
    (ERDUnparseSelf)&permissions_open_write_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const write_open_delegation4_ write_open_delegation4__compute_offsets;

static const size_t write_open_delegation4__childrenOffsets[4] = {
    (const char *)&write_open_delegation4__compute_offsets.stateid - (const char *)&write_open_delegation4__compute_offsets,
    (const char *)&write_open_delegation4__compute_offsets.recall - (const char *)&write_open_delegation4__compute_offsets,
    (const char *)&write_open_delegation4__compute_offsets.space_limit - (const char *)&write_open_delegation4__compute_offsets,
    (const char *)&write_open_delegation4__compute_offsets.permissions - (const char *)&write_open_delegation4__compute_offsets
};

static const ERD *const write_open_delegation4__childrenERDs[4] = {
    &stateid_open_write_delegation4_ERD,
    &recall_open_write_delegation4_ERD,
    &space_limit_open_write_delegation4_ERD,
    &permissions_open_write_delegation4_ERD
};

static const ERD write_open_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "write", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    write_open_delegation4__childrenOffsets,
    write_open_delegation4__childrenERDs,
    (ERDParseSelf)&write_open_delegation4__parseSelf,
    (ERDUnparseSelf)&write_open_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const ERD why_open_none_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "why", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD server_push_open_none_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "server_push", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD server_signal_open_none_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "server_signal", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_BOOLEAN, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ext_open_delegation4_ ext_open_delegation4__compute_offsets;

static const size_t ext_open_delegation4__childrenOffsets[3] = {
    (const char *)&ext_open_delegation4__compute_offsets.why - (const char *)&ext_open_delegation4__compute_offsets,
    (const char *)&ext_open_delegation4__compute_offsets.server_push - (const char *)&ext_open_delegation4__compute_offsets,
    (const char *)&ext_open_delegation4__compute_offsets.server_signal - (const char *)&ext_open_delegation4__compute_offsets
};

static const ERD *const ext_open_delegation4__childrenERDs[3] = {
    &why_open_none_delegation4_ERD,
    &server_push_open_none_delegation4_ERD,
    &server_signal_open_none_delegation4_ERD
};

static const ERD ext_open_delegation4_ERD = {
    {
        NULL, // namedQName.prefix
        "ext", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    ext_open_delegation4__childrenOffsets,
    ext_open_delegation4__childrenERDs,
    (ERDParseSelf)&ext_open_delegation4__parseSelf,
    (ERDUnparseSelf)&ext_open_delegation4__unparseSelf,
    {.initChoice = NULL}
};

static const delegation_open4resok_ delegation_open4resok__compute_offsets;

static const size_t delegation_open4resok__childrenOffsets[4] = {
    (const char *)&delegation_open4resok__compute_offsets.delegation_type - (const char *)&delegation_open4resok__compute_offsets,
    (const char *)&delegation_open4resok__compute_offsets.read - (const char *)&delegation_open4resok__compute_offsets,
    (const char *)&delegation_open4resok__compute_offsets.write - (const char *)&delegation_open4resok__compute_offsets,
    (const char *)&delegation_open4resok__compute_offsets.ext - (const char *)&delegation_open4resok__compute_offsets
};

static const ERD *const delegation_open4resok__childrenERDs[4] = {
    &delegation_type_open_delegation4_ERD,
    &read_open_delegation4_ERD,
    &write_open_delegation4_ERD,
    &ext_open_delegation4_ERD
};

static const ERD delegation_open4resok_ERD = {
    {
        NULL, // namedQName.prefix
        "delegation", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    delegation_open4resok__childrenOffsets,
    delegation_open4resok__childrenERDs,
    (ERDParseSelf)&delegation_open4resok__parseSelf,
    (ERDUnparseSelf)&delegation_open4resok__unparseSelf,
    {.initChoice = NULL}
};

static const resok4_open_ resok4_open__compute_offsets;

static const size_t resok4_open__childrenOffsets[5] = {
    (const char *)&resok4_open__compute_offsets.stateid - (const char *)&resok4_open__compute_offsets,
    (const char *)&resok4_open__compute_offsets.cinfo - (const char *)&resok4_open__compute_offsets,
    (const char *)&resok4_open__compute_offsets.rflags - (const char *)&resok4_open__compute_offsets,
    (const char *)&resok4_open__compute_offsets.attrset - (const char *)&resok4_open__compute_offsets,
    (const char *)&resok4_open__compute_offsets.delegation - (const char *)&resok4_open__compute_offsets
};

static const ERD *const resok4_open__childrenERDs[5] = {
    &stateid_open4resok_ERD,
    &cinfo_open4resok_ERD,
    &rflags_open4resok_ERD,
    &attrset_open4resok_ERD,
    &delegation_open4resok_ERD
};

static const ERD resok4_open_ERD = {
    {
        NULL, // namedQName.prefix
        "resok4", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    resok4_open__childrenOffsets,
    resok4_open__childrenERDs,
    (ERDParseSelf)&resok4_open__parseSelf,
    (ERDUnparseSelf)&resok4_open__unparseSelf,
    {.initChoice = NULL}
};

static const open_op_dispatch_v4reply_ops_ open_op_dispatch_v4reply_ops__compute_offsets;

static const size_t open_op_dispatch_v4reply_ops__childrenOffsets[1] = {
    (const char *)&open_op_dispatch_v4reply_ops__compute_offsets.resok4 - (const char *)&open_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const open_op_dispatch_v4reply_ops__childrenERDs[1] = {
    &resok4_open_ERD
};

static const ERD open_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "open", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    open_op_dispatch_v4reply_ops__childrenOffsets,
    open_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&open_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&open_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD putfh_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&putfh_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&putfh_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD putpubfh_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putpubfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&putpubfh_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&putpubfh_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD putrootfh_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "putrootfh", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&putrootfh_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&putrootfh_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD eof_read_ERD = {
    {
        NULL, // namedQName.prefix
        "eof", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const data_read_ data_read__compute_offsets;

static const size_t data_read__childrenOffsets[1] = {
    (const char *)&data_read__compute_offsets.opaque - (const char *)&data_read__compute_offsets
};

static const ERD *const data_read__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD data_read_ERD = {
    {
        NULL, // namedQName.prefix
        "data", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    data_read__childrenOffsets,
    data_read__childrenERDs,
    (ERDParseSelf)&data_read__parseSelf,
    (ERDUnparseSelf)&data_read__unparseSelf,
    {.initChoice = NULL}
};

static const read_op_dispatch_v4reply_ops_ read_op_dispatch_v4reply_ops__compute_offsets;

static const size_t read_op_dispatch_v4reply_ops__childrenOffsets[2] = {
    (const char *)&read_op_dispatch_v4reply_ops__compute_offsets.eof - (const char *)&read_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&read_op_dispatch_v4reply_ops__compute_offsets.data - (const char *)&read_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const read_op_dispatch_v4reply_ops__childrenERDs[2] = {
    &eof_read_ERD,
    &data_read_ERD
};

static const ERD read_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "read", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    read_op_dispatch_v4reply_ops__childrenOffsets,
    read_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&read_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&read_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD readdir_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "readdir", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&readdir_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&readdir_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD count_write_ERD = {
    {
        NULL, // namedQName.prefix
        "count", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD committed_write_ERD = {
    {
        NULL, // namedQName.prefix
        "committed", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD writeverf_write_ERD = {
    {
        NULL, // namedQName.prefix
        "writeverf", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const write_op_dispatch_v4reply_ops_ write_op_dispatch_v4reply_ops__compute_offsets;

static const size_t write_op_dispatch_v4reply_ops__childrenOffsets[3] = {
    (const char *)&write_op_dispatch_v4reply_ops__compute_offsets.count - (const char *)&write_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&write_op_dispatch_v4reply_ops__compute_offsets.committed - (const char *)&write_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&write_op_dispatch_v4reply_ops__compute_offsets.writeverf - (const char *)&write_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const write_op_dispatch_v4reply_ops__childrenERDs[3] = {
    &count_write_ERD,
    &committed_write_ERD,
    &writeverf_write_ERD
};

static const ERD write_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "write", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    write_op_dispatch_v4reply_ops__childrenOffsets,
    write_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&write_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&write_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD eir_clientid_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD eir_sequenceid_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_sequenceid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD eir_flags_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const eir_state_protect_exchange_id_ eir_state_protect_exchange_id__compute_offsets;

static const size_t eir_state_protect_exchange_id__childrenOffsets[2] = {
    (const char *)&eir_state_protect_exchange_id__compute_offsets.mode - (const char *)&eir_state_protect_exchange_id__compute_offsets,
    (const char *)&eir_state_protect_exchange_id__compute_offsets.protect_dispatch - (const char *)&eir_state_protect_exchange_id__compute_offsets
};

static const ERD *const eir_state_protect_exchange_id__childrenERDs[2] = {
    &mode_state_protect4_a_ERD,
    &protect_dispatch_state_protect4_a_ERD
};

static const ERD eir_state_protect_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_state_protect", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    eir_state_protect_exchange_id__childrenOffsets,
    eir_state_protect_exchange_id__childrenERDs,
    (ERDParseSelf)&eir_state_protect_exchange_id__parseSelf,
    (ERDUnparseSelf)&eir_state_protect_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const ERD so_minor_id_server_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "so_minor_id", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT64, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD so_major_id_server_owner4_ERD = {
    {
        NULL, // namedQName.prefix
        "so_major_id", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const eir_server_owner_exchange_id_ eir_server_owner_exchange_id__compute_offsets;

static const size_t eir_server_owner_exchange_id__childrenOffsets[2] = {
    (const char *)&eir_server_owner_exchange_id__compute_offsets.so_minor_id - (const char *)&eir_server_owner_exchange_id__compute_offsets,
    (const char *)&eir_server_owner_exchange_id__compute_offsets.so_major_id - (const char *)&eir_server_owner_exchange_id__compute_offsets
};

static const ERD *const eir_server_owner_exchange_id__childrenERDs[2] = {
    &so_minor_id_server_owner4_ERD,
    &so_major_id_server_owner4_ERD
};

static const ERD eir_server_owner_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_server_owner", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    eir_server_owner_exchange_id__childrenOffsets,
    eir_server_owner_exchange_id__childrenERDs,
    (ERDParseSelf)&eir_server_owner_exchange_id__parseSelf,
    (ERDUnparseSelf)&eir_server_owner_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const eir_server_scope_exchange_id_ eir_server_scope_exchange_id__compute_offsets;

static const size_t eir_server_scope_exchange_id__childrenOffsets[1] = {
    (const char *)&eir_server_scope_exchange_id__compute_offsets.opaque - (const char *)&eir_server_scope_exchange_id__compute_offsets
};

static const ERD *const eir_server_scope_exchange_id__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD eir_server_scope_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_server_scope", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    eir_server_scope_exchange_id__childrenOffsets,
    eir_server_scope_exchange_id__childrenERDs,
    (ERDParseSelf)&eir_server_scope_exchange_id__parseSelf,
    (ERDUnparseSelf)&eir_server_scope_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const eir_server_impl_id_exchange_id_ eir_server_impl_id_exchange_id__compute_offsets;

static const size_t eir_server_impl_id_exchange_id__childrenOffsets[3] = {
    (const char *)&eir_server_impl_id_exchange_id__compute_offsets.nii_domain - (const char *)&eir_server_impl_id_exchange_id__compute_offsets,
    (const char *)&eir_server_impl_id_exchange_id__compute_offsets.nii_name - (const char *)&eir_server_impl_id_exchange_id__compute_offsets,
    (const char *)&eir_server_impl_id_exchange_id__compute_offsets.nii_date - (const char *)&eir_server_impl_id_exchange_id__compute_offsets
};

static const ERD *const eir_server_impl_id_exchange_id__childrenERDs[3] = {
    &nii_domain_nfs_impl_id4_ERD,
    &nii_name_nfs_impl_id4_ERD,
    &nii_date_nfs_impl_id4_ERD
};

static const ERD eir_server_impl_id_exchange_id_ERD = {
    {
        NULL, // namedQName.prefix
        "eir_server_impl_id", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    eir_server_impl_id_exchange_id__childrenOffsets,
    eir_server_impl_id_exchange_id__childrenERDs,
    (ERDParseSelf)&eir_server_impl_id_exchange_id__parseSelf,
    (ERDUnparseSelf)&eir_server_impl_id_exchange_id__unparseSelf,
    {.initChoice = NULL}
};

static const exchange_id_op_dispatch_v4reply_ops_ exchange_id_op_dispatch_v4reply_ops__compute_offsets;

static const size_t exchange_id_op_dispatch_v4reply_ops__childrenOffsets[7] = {
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_clientid - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_sequenceid - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_flags - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_state_protect - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_server_owner - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_server_scope - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets.eir_server_impl_id - (const char *)&exchange_id_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const exchange_id_op_dispatch_v4reply_ops__childrenERDs[7] = {
    &eir_clientid_exchange_id_ERD,
    &eir_sequenceid_exchange_id_ERD,
    &eir_flags_exchange_id_ERD,
    &eir_state_protect_exchange_id_ERD,
    &eir_server_owner_exchange_id_ERD,
    &eir_server_scope_exchange_id_ERD,
    &eir_server_impl_id_exchange_id_ERD
};

static const ERD exchange_id_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "exchange_id", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    exchange_id_op_dispatch_v4reply_ops__childrenOffsets,
    exchange_id_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&exchange_id_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&exchange_id_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD csr_sessionid_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csr_sessionid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD csr_sequence_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csr_sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD csr_flags_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csr_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const csr_fore_chan_attrs_create_session_ csr_fore_chan_attrs_create_session__compute_offsets;

static const size_t csr_fore_chan_attrs_create_session__childrenOffsets[7] = {
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_headerpadsize - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_maxrequestsize - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_maxresponsesize - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_maxresponsesize_cached - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_maxoperations - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_maxrequests - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_fore_chan_attrs_create_session__compute_offsets.ca_rdma_ird - (const char *)&csr_fore_chan_attrs_create_session__compute_offsets
};

static const ERD *const csr_fore_chan_attrs_create_session__childrenERDs[7] = {
    &ca_headerpadsize_channel_attrs4_ERD,
    &ca_maxrequestsize_channel_attrs4_ERD,
    &ca_maxresponsesize_channel_attrs4_ERD,
    &ca_maxresponsesize_cached_channel_attrs4_ERD,
    &ca_maxoperations_channel_attrs4_ERD,
    &ca_maxrequests_channel_attrs4_ERD,
    &ca_rdma_ird_channel_attrs4_ERD
};

static const ERD csr_fore_chan_attrs_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csr_fore_chan_attrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    csr_fore_chan_attrs_create_session__childrenOffsets,
    csr_fore_chan_attrs_create_session__childrenERDs,
    (ERDParseSelf)&csr_fore_chan_attrs_create_session__parseSelf,
    (ERDUnparseSelf)&csr_fore_chan_attrs_create_session__unparseSelf,
    {.initChoice = NULL}
};

static const csr_back_chan_attrs_create_session_ csr_back_chan_attrs_create_session__compute_offsets;

static const size_t csr_back_chan_attrs_create_session__childrenOffsets[7] = {
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_headerpadsize - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_maxrequestsize - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_maxresponsesize - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_maxresponsesize_cached - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_maxoperations - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_maxrequests - (const char *)&csr_back_chan_attrs_create_session__compute_offsets,
    (const char *)&csr_back_chan_attrs_create_session__compute_offsets.ca_rdma_ird - (const char *)&csr_back_chan_attrs_create_session__compute_offsets
};

static const ERD *const csr_back_chan_attrs_create_session__childrenERDs[7] = {
    &ca_headerpadsize_channel_attrs4_ERD,
    &ca_maxrequestsize_channel_attrs4_ERD,
    &ca_maxresponsesize_channel_attrs4_ERD,
    &ca_maxresponsesize_cached_channel_attrs4_ERD,
    &ca_maxoperations_channel_attrs4_ERD,
    &ca_maxrequests_channel_attrs4_ERD,
    &ca_rdma_ird_channel_attrs4_ERD
};

static const ERD csr_back_chan_attrs_create_session_ERD = {
    {
        NULL, // namedQName.prefix
        "csr_back_chan_attrs", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    csr_back_chan_attrs_create_session__childrenOffsets,
    csr_back_chan_attrs_create_session__childrenERDs,
    (ERDParseSelf)&csr_back_chan_attrs_create_session__parseSelf,
    (ERDUnparseSelf)&csr_back_chan_attrs_create_session__unparseSelf,
    {.initChoice = NULL}
};

static const create_session_op_dispatch_v4reply_ops_ create_session_op_dispatch_v4reply_ops__compute_offsets;

static const size_t create_session_op_dispatch_v4reply_ops__childrenOffsets[5] = {
    (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets.csr_sessionid - (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets.csr_sequence - (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets.csr_flags - (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets.csr_fore_chan_attrs - (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets.csr_back_chan_attrs - (const char *)&create_session_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const create_session_op_dispatch_v4reply_ops__childrenERDs[5] = {
    &csr_sessionid_create_session_ERD,
    &csr_sequence_create_session_ERD,
    &csr_flags_create_session_ERD,
    &csr_fore_chan_attrs_create_session_ERD,
    &csr_back_chan_attrs_create_session_ERD
};

static const ERD create_session_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "create_session", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    create_session_op_dispatch_v4reply_ops__childrenOffsets,
    create_session_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&create_session_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&create_session_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD destroy_session_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "destroy_session", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&destroy_session_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&destroy_session_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD state_present_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "state_present", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD lrs_stateid_layoutreturn_ERD = {
    {
        NULL, // namedQName.prefix
        "lrs_stateid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const layoutreturn_op_dispatch_v4reply_ops_ layoutreturn_op_dispatch_v4reply_ops__compute_offsets;

static const size_t layoutreturn_op_dispatch_v4reply_ops__childrenOffsets[2] = {
    (const char *)&layoutreturn_op_dispatch_v4reply_ops__compute_offsets.state_present - (const char *)&layoutreturn_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&layoutreturn_op_dispatch_v4reply_ops__compute_offsets.lrs_stateid - (const char *)&layoutreturn_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const layoutreturn_op_dispatch_v4reply_ops__childrenERDs[2] = {
    &state_present_layoutreturn_ERD,
    &lrs_stateid_layoutreturn_ERD
};

static const ERD layoutreturn_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "layoutreturn", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    layoutreturn_op_dispatch_v4reply_ops__childrenOffsets,
    layoutreturn_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&layoutreturn_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&layoutreturn_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD flavor_num_secinfo_no_name_ERD = {
    {
        NULL, // namedQName.prefix
        "flavor_num", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD flavor_secinfo4_switch_ERD = {
    {
        NULL, // namedQName.prefix
        "flavor", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const oid_rpcsec_gss_info_ oid_rpcsec_gss_info__compute_offsets;

static const size_t oid_rpcsec_gss_info__childrenOffsets[1] = {
    (const char *)&oid_rpcsec_gss_info__compute_offsets.opaque - (const char *)&oid_rpcsec_gss_info__compute_offsets
};

static const ERD *const oid_rpcsec_gss_info__childrenERDs[1] = {
    &opaque_opaque_ERD
};

static const ERD oid_rpcsec_gss_info_ERD = {
    {
        NULL, // namedQName.prefix
        "oid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    oid_rpcsec_gss_info__childrenOffsets,
    oid_rpcsec_gss_info__childrenERDs,
    (ERDParseSelf)&oid_rpcsec_gss_info__parseSelf,
    (ERDUnparseSelf)&oid_rpcsec_gss_info__unparseSelf,
    {.initChoice = NULL}
};

static const ERD qop_rpcsec_gss_info_ERD = {
    {
        NULL, // namedQName.prefix
        "qop", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD service_rpcsec_gss_info_ERD = {
    {
        NULL, // namedQName.prefix
        "service", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const gss_info_secinfo4_switch_ gss_info_secinfo4_switch__compute_offsets;

static const size_t gss_info_secinfo4_switch__childrenOffsets[3] = {
    (const char *)&gss_info_secinfo4_switch__compute_offsets.oid - (const char *)&gss_info_secinfo4_switch__compute_offsets,
    (const char *)&gss_info_secinfo4_switch__compute_offsets.qop - (const char *)&gss_info_secinfo4_switch__compute_offsets,
    (const char *)&gss_info_secinfo4_switch__compute_offsets.service - (const char *)&gss_info_secinfo4_switch__compute_offsets
};

static const ERD *const gss_info_secinfo4_switch__childrenERDs[3] = {
    &oid_rpcsec_gss_info_ERD,
    &qop_rpcsec_gss_info_ERD,
    &service_rpcsec_gss_info_ERD
};

static const ERD gss_info_secinfo4_switch_ERD = {
    {
        NULL, // namedQName.prefix
        "gss_info", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    gss_info_secinfo4_switch__childrenOffsets,
    gss_info_secinfo4_switch__childrenERDs,
    (ERDParseSelf)&gss_info_secinfo4_switch__parseSelf,
    (ERDUnparseSelf)&gss_info_secinfo4_switch__unparseSelf,
    {.initChoice = NULL}
};

static const sec_type_secinfo_no_name_ sec_type_secinfo_no_name__compute_offsets;

static const size_t sec_type_secinfo_no_name__childrenOffsets[2] = {
    (const char *)&sec_type_secinfo_no_name__compute_offsets.flavor - (const char *)&sec_type_secinfo_no_name__compute_offsets,
    (const char *)&sec_type_secinfo_no_name__compute_offsets.gss_info - (const char *)&sec_type_secinfo_no_name__compute_offsets
};

static const ERD *const sec_type_secinfo_no_name__childrenERDs[2] = {
    &flavor_secinfo4_switch_ERD,
    &gss_info_secinfo4_switch_ERD
};

static const ERD sec_type_secinfo_no_name_ERD = {
    {
        NULL, // namedQName.prefix
        "sec_type", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    sec_type_secinfo_no_name__childrenOffsets,
    sec_type_secinfo_no_name__childrenERDs,
    (ERDParseSelf)&sec_type_secinfo_no_name__parseSelf,
    (ERDUnparseSelf)&sec_type_secinfo_no_name__unparseSelf,
    {.initChoice = NULL}
};

static const secinfo_no_name_op_dispatch_v4reply_ops_ array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets;

static const size_t array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__childrenOffsets[1] = {
    (const char *)&array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets.sec_type[1] - (const char *)&array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets.sec_type[0]
};

static const ERD *const array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__childrenERDs[1] = {
    &sec_type_secinfo_no_name_ERD
};

static const ERD array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "sec_type", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__childrenOffsets,
    array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf,
    {.getArraySize = (GetArraySize)&array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__getArraySize}
};

static const secinfo_no_name_op_dispatch_v4reply_ops_ secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets;

static const size_t secinfo_no_name_op_dispatch_v4reply_ops__childrenOffsets[2] = {
    (const char *)&secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets.flavor_num - (const char *)&secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets.sec_type[0] - (const char *)&secinfo_no_name_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const secinfo_no_name_op_dispatch_v4reply_ops__childrenERDs[2] = {
    &flavor_num_secinfo_no_name_ERD,
    &array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops_ERD
};

static const ERD secinfo_no_name_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "secinfo_no_name", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    secinfo_no_name_op_dispatch_v4reply_ops__childrenOffsets,
    secinfo_no_name_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&secinfo_no_name_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD sr_sessionid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_sessionid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sr_sequenceid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_sequenceid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sr_slotid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_slotid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sr_highest_slotid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_highest_slotid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sr_target_highest_slotid_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_target_highest_slotid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sr_status_flags_sequence_ERD = {
    {
        NULL, // namedQName.prefix
        "sr_status_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sequence_op_dispatch_v4reply_ops_ sequence_op_dispatch_v4reply_ops__compute_offsets;

static const size_t sequence_op_dispatch_v4reply_ops__childrenOffsets[6] = {
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_sessionid - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_sequenceid - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_slotid - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_highest_slotid - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_target_highest_slotid - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets.sr_status_flags - (const char *)&sequence_op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const sequence_op_dispatch_v4reply_ops__childrenERDs[6] = {
    &sr_sessionid_sequence_ERD,
    &sr_sequenceid_sequence_ERD,
    &sr_slotid_sequence_ERD,
    &sr_highest_slotid_sequence_ERD,
    &sr_target_highest_slotid_sequence_ERD,
    &sr_status_flags_sequence_ERD
};

static const ERD sequence_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    sequence_op_dispatch_v4reply_ops__childrenOffsets,
    sequence_op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&sequence_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&sequence_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD destroy_clientid_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "destroy_clientid", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&destroy_clientid_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&destroy_clientid_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const ERD reclaim_complete_op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "reclaim_complete", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    0, // numChildren
    NULL, // childrenOffsets
    NULL, // childrenERDs
    (ERDParseSelf)&reclaim_complete_op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&reclaim_complete_op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = NULL}
};

static const op_dispatch_v4reply_ops_ op_dispatch_v4reply_ops__compute_offsets;

static const size_t op_dispatch_v4reply_ops__childrenOffsets[21] = {
    (const char *)&op_dispatch_v4reply_ops__compute_offsets._choice - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.access - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.close - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.getattr - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.getfh - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.lookup - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.open - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.putfh - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.putpubfh - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.putrootfh - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.read - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.readdir - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.write - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.exchange_id - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.create_session - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.destroy_session - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.layoutreturn - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.secinfo_no_name - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.sequence - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.destroy_clientid - (const char *)&op_dispatch_v4reply_ops__compute_offsets,
    (const char *)&op_dispatch_v4reply_ops__compute_offsets.reclaim_complete - (const char *)&op_dispatch_v4reply_ops__compute_offsets
};

static const ERD *const op_dispatch_v4reply_ops__childrenERDs[21] = {
    &_choice_op_dispatch_v4reply_ops_ERD,
    &access_op_dispatch_v4reply_ops_ERD,
    &close_op_dispatch_v4reply_ops_ERD,
    &getattr_op_dispatch_v4reply_ops_ERD,
    &getfh_op_dispatch_v4reply_ops_ERD,
    &lookup_op_dispatch_v4reply_ops_ERD,
    &open_op_dispatch_v4reply_ops_ERD,
    &putfh_op_dispatch_v4reply_ops_ERD,
    &putpubfh_op_dispatch_v4reply_ops_ERD,
    &putrootfh_op_dispatch_v4reply_ops_ERD,
    &read_op_dispatch_v4reply_ops_ERD,
    &readdir_op_dispatch_v4reply_ops_ERD,
    &write_op_dispatch_v4reply_ops_ERD,
    &exchange_id_op_dispatch_v4reply_ops_ERD,
    &create_session_op_dispatch_v4reply_ops_ERD,
    &destroy_session_op_dispatch_v4reply_ops_ERD,
    &layoutreturn_op_dispatch_v4reply_ops_ERD,
    &secinfo_no_name_op_dispatch_v4reply_ops_ERD,
    &sequence_op_dispatch_v4reply_ops_ERD,
    &destroy_clientid_op_dispatch_v4reply_ops_ERD,
    &reclaim_complete_op_dispatch_v4reply_ops_ERD
};

static const ERD op_dispatch_v4reply_ops_ERD = {
    {
        NULL, // namedQName.prefix
        "op_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    op_dispatch_v4reply_ops__childrenOffsets,
    op_dispatch_v4reply_ops__childrenERDs,
    (ERDParseSelf)&op_dispatch_v4reply_ops__parseSelf,
    (ERDUnparseSelf)&op_dispatch_v4reply_ops__unparseSelf,
    {.initChoice = (InitChoiceRD)&op_dispatch_v4reply_ops__initChoice}
};

static const nfscmd_nfsv4reply_ nfscmd_nfsv4reply__compute_offsets;

static const size_t nfscmd_nfsv4reply__childrenOffsets[3] = {
    (const char *)&nfscmd_nfsv4reply__compute_offsets.opcode - (const char *)&nfscmd_nfsv4reply__compute_offsets,
    (const char *)&nfscmd_nfsv4reply__compute_offsets.status - (const char *)&nfscmd_nfsv4reply__compute_offsets,
    (const char *)&nfscmd_nfsv4reply__compute_offsets.op_dispatch - (const char *)&nfscmd_nfsv4reply__compute_offsets
};

static const ERD *const nfscmd_nfsv4reply__childrenERDs[3] = {
    &opcode_v4reply_ops_ERD,
    &status_v4reply_ops_ERD,
    &op_dispatch_v4reply_ops_ERD
};

static const ERD nfscmd_nfsv4reply_ERD = {
    {
        NULL, // namedQName.prefix
        "nfscmd", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    nfscmd_nfsv4reply__childrenOffsets,
    nfscmd_nfsv4reply__childrenERDs,
    (ERDParseSelf)&nfscmd_nfsv4reply__parseSelf,
    (ERDUnparseSelf)&nfscmd_nfsv4reply__unparseSelf,
    {.initChoice = NULL}
};

static const nfsv4_accept_dispatch_accept_reply_ array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__compute_offsets;

static const size_t array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__childrenOffsets[1] = {
    (const char *)&array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__compute_offsets.nfscmd[1] - (const char *)&array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__compute_offsets.nfscmd[0]
};

static const ERD *const array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__childrenERDs[1] = {
    &nfscmd_nfsv4reply_ERD
};

static const ERD array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "nfscmd", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    16, // maxOccurs
    array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__childrenOffsets,
    array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__childrenERDs,
    (ERDParseSelf)&array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__parseSelf,
    (ERDUnparseSelf)&array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__unparseSelf,
    {.getArraySize = (GetArraySize)&array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__getArraySize}
};

static const nfsv4_accept_dispatch_accept_reply_ nfsv4_accept_dispatch_accept_reply__compute_offsets;

static const size_t nfsv4_accept_dispatch_accept_reply__childrenOffsets[4] = {
    (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets.status - (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets,
    (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets.tag - (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets,
    (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets.numargs - (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets,
    (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets.nfscmd[0] - (const char *)&nfsv4_accept_dispatch_accept_reply__compute_offsets
};

static const ERD *const nfsv4_accept_dispatch_accept_reply__childrenERDs[4] = {
    &status_nfsv4reply_ERD,
    &tag_nfsv4reply_ERD,
    &numargs_nfsv4reply_ERD,
    &array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply_ERD
};

static const ERD nfsv4_accept_dispatch_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "nfsv4", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    nfsv4_accept_dispatch_accept_reply__childrenOffsets,
    nfsv4_accept_dispatch_accept_reply__childrenERDs,
    (ERDParseSelf)&nfsv4_accept_dispatch_accept_reply__parseSelf,
    (ERDUnparseSelf)&nfsv4_accept_dispatch_accept_reply__unparseSelf,
    {.initChoice = NULL}
};

static const accept_dispatch_accept_reply_ accept_dispatch_accept_reply__compute_offsets;

static const size_t accept_dispatch_accept_reply__childrenOffsets[2] = {
    (const char *)&accept_dispatch_accept_reply__compute_offsets._choice - (const char *)&accept_dispatch_accept_reply__compute_offsets,
    (const char *)&accept_dispatch_accept_reply__compute_offsets.nfsv4 - (const char *)&accept_dispatch_accept_reply__compute_offsets
};

static const ERD *const accept_dispatch_accept_reply__childrenERDs[2] = {
    &_choice_accept_dispatch_accept_reply_ERD,
    &nfsv4_accept_dispatch_accept_reply_ERD
};

static const ERD accept_dispatch_accept_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "accept_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    accept_dispatch_accept_reply__childrenOffsets,
    accept_dispatch_accept_reply__childrenERDs,
    (ERDParseSelf)&accept_dispatch_accept_reply__parseSelf,
    (ERDUnparseSelf)&accept_dispatch_accept_reply__unparseSelf,
    {.initChoice = (InitChoiceRD)&accept_dispatch_accept_reply__initChoice}
};

static const accept_reply_reply_dispatch_reply_body_ accept_reply_reply_dispatch_reply_body__compute_offsets;

static const size_t accept_reply_reply_dispatch_reply_body__childrenOffsets[3] = {
    (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets.verf - (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets,
    (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets.accept_status - (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets,
    (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets.accept_dispatch - (const char *)&accept_reply_reply_dispatch_reply_body__compute_offsets
};

static const ERD *const accept_reply_reply_dispatch_reply_body__childrenERDs[3] = {
    &verf_accept_reply_ERD,
    &accept_status_accept_reply_ERD,
    &accept_dispatch_accept_reply_ERD
};

static const ERD accept_reply_reply_dispatch_reply_body_ERD = {
    {
        NULL, // namedQName.prefix
        "accept_reply", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    accept_reply_reply_dispatch_reply_body__childrenOffsets,
    accept_reply_reply_dispatch_reply_body__childrenERDs,
    (ERDParseSelf)&accept_reply_reply_dispatch_reply_body__parseSelf,
    (ERDUnparseSelf)&accept_reply_reply_dispatch_reply_body__unparseSelf,
    {.initChoice = NULL}
};

static const ERD reject_status_reject_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "reject_status", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD _choice_reject_dispatch_reject_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "_choice", // namedQName.local
        NULL, // namedQName.ns
    },
    CHOICE, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD low_rpc_mismatch_ERD = {
    {
        NULL, // namedQName.prefix
        "low", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD high_rpc_mismatch_ERD = {
    {
        NULL, // namedQName.prefix
        "high", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const rpc_mismatch_reject_dispatch_reject_reply_ rpc_mismatch_reject_dispatch_reject_reply__compute_offsets;

static const size_t rpc_mismatch_reject_dispatch_reject_reply__childrenOffsets[2] = {
    (const char *)&rpc_mismatch_reject_dispatch_reject_reply__compute_offsets.low - (const char *)&rpc_mismatch_reject_dispatch_reject_reply__compute_offsets,
    (const char *)&rpc_mismatch_reject_dispatch_reject_reply__compute_offsets.high - (const char *)&rpc_mismatch_reject_dispatch_reject_reply__compute_offsets
};

static const ERD *const rpc_mismatch_reject_dispatch_reject_reply__childrenERDs[2] = {
    &low_rpc_mismatch_ERD,
    &high_rpc_mismatch_ERD
};

static const ERD rpc_mismatch_reject_dispatch_reject_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "rpc_mismatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    rpc_mismatch_reject_dispatch_reject_reply__childrenOffsets,
    rpc_mismatch_reject_dispatch_reject_reply__childrenERDs,
    (ERDParseSelf)&rpc_mismatch_reject_dispatch_reject_reply__parseSelf,
    (ERDUnparseSelf)&rpc_mismatch_reject_dispatch_reject_reply__unparseSelf,
    {.initChoice = NULL}
};

static const ERD stat_auth_error_ERD = {
    {
        NULL, // namedQName.prefix
        "stat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const auth_error_reject_dispatch_reject_reply_ auth_error_reject_dispatch_reject_reply__compute_offsets;

static const size_t auth_error_reject_dispatch_reject_reply__childrenOffsets[1] = {
    (const char *)&auth_error_reject_dispatch_reject_reply__compute_offsets.stat - (const char *)&auth_error_reject_dispatch_reject_reply__compute_offsets
};

static const ERD *const auth_error_reject_dispatch_reject_reply__childrenERDs[1] = {
    &stat_auth_error_ERD
};

static const ERD auth_error_reject_dispatch_reject_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "auth_error", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    auth_error_reject_dispatch_reject_reply__childrenOffsets,
    auth_error_reject_dispatch_reject_reply__childrenERDs,
    (ERDParseSelf)&auth_error_reject_dispatch_reject_reply__parseSelf,
    (ERDUnparseSelf)&auth_error_reject_dispatch_reject_reply__unparseSelf,
    {.initChoice = NULL}
};

static const reject_dispatch_reject_reply_ reject_dispatch_reject_reply__compute_offsets;

static const size_t reject_dispatch_reject_reply__childrenOffsets[3] = {
    (const char *)&reject_dispatch_reject_reply__compute_offsets._choice - (const char *)&reject_dispatch_reject_reply__compute_offsets,
    (const char *)&reject_dispatch_reject_reply__compute_offsets.rpc_mismatch - (const char *)&reject_dispatch_reject_reply__compute_offsets,
    (const char *)&reject_dispatch_reject_reply__compute_offsets.auth_error - (const char *)&reject_dispatch_reject_reply__compute_offsets
};

static const ERD *const reject_dispatch_reject_reply__childrenERDs[3] = {
    &_choice_reject_dispatch_reject_reply_ERD,
    &rpc_mismatch_reject_dispatch_reject_reply_ERD,
    &auth_error_reject_dispatch_reject_reply_ERD
};

static const ERD reject_dispatch_reject_reply_ERD = {
    {
        NULL, // namedQName.prefix
        "reject_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    reject_dispatch_reject_reply__childrenOffsets,
    reject_dispatch_reject_reply__childrenERDs,
    (ERDParseSelf)&reject_dispatch_reject_reply__parseSelf,
    (ERDUnparseSelf)&reject_dispatch_reject_reply__unparseSelf,
    {.initChoice = (InitChoiceRD)&reject_dispatch_reject_reply__initChoice}
};

static const reject_reply_reply_dispatch_reply_body_ reject_reply_reply_dispatch_reply_body__compute_offsets;

static const size_t reject_reply_reply_dispatch_reply_body__childrenOffsets[2] = {
    (const char *)&reject_reply_reply_dispatch_reply_body__compute_offsets.reject_status - (const char *)&reject_reply_reply_dispatch_reply_body__compute_offsets,
    (const char *)&reject_reply_reply_dispatch_reply_body__compute_offsets.reject_dispatch - (const char *)&reject_reply_reply_dispatch_reply_body__compute_offsets
};

static const ERD *const reject_reply_reply_dispatch_reply_body__childrenERDs[2] = {
    &reject_status_reject_reply_ERD,
    &reject_dispatch_reject_reply_ERD
};

static const ERD reject_reply_reply_dispatch_reply_body_ERD = {
    {
        NULL, // namedQName.prefix
        "reject_reply", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    reject_reply_reply_dispatch_reply_body__childrenOffsets,
    reject_reply_reply_dispatch_reply_body__childrenERDs,
    (ERDParseSelf)&reject_reply_reply_dispatch_reply_body__parseSelf,
    (ERDUnparseSelf)&reject_reply_reply_dispatch_reply_body__unparseSelf,
    {.initChoice = NULL}
};

static const reply_dispatch_reply_body_ reply_dispatch_reply_body__compute_offsets;

static const size_t reply_dispatch_reply_body__childrenOffsets[3] = {
    (const char *)&reply_dispatch_reply_body__compute_offsets._choice - (const char *)&reply_dispatch_reply_body__compute_offsets,
    (const char *)&reply_dispatch_reply_body__compute_offsets.accept_reply - (const char *)&reply_dispatch_reply_body__compute_offsets,
    (const char *)&reply_dispatch_reply_body__compute_offsets.reject_reply - (const char *)&reply_dispatch_reply_body__compute_offsets
};

static const ERD *const reply_dispatch_reply_body__childrenERDs[3] = {
    &_choice_reply_dispatch_reply_body_ERD,
    &accept_reply_reply_dispatch_reply_body_ERD,
    &reject_reply_reply_dispatch_reply_body_ERD
};

static const ERD reply_dispatch_reply_body_ERD = {
    {
        NULL, // namedQName.prefix
        "reply_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    reply_dispatch_reply_body__childrenOffsets,
    reply_dispatch_reply_body__childrenERDs,
    (ERDParseSelf)&reply_dispatch_reply_body__parseSelf,
    (ERDUnparseSelf)&reply_dispatch_reply_body__unparseSelf,
    {.initChoice = (InitChoiceRD)&reply_dispatch_reply_body__initChoice}
};

static const reply_body_entry_dispatch_entry_point_ reply_body_entry_dispatch_entry_point__compute_offsets;

static const size_t reply_body_entry_dispatch_entry_point__childrenOffsets[2] = {
    (const char *)&reply_body_entry_dispatch_entry_point__compute_offsets.status - (const char *)&reply_body_entry_dispatch_entry_point__compute_offsets,
    (const char *)&reply_body_entry_dispatch_entry_point__compute_offsets.reply_dispatch - (const char *)&reply_body_entry_dispatch_entry_point__compute_offsets
};

static const ERD *const reply_body_entry_dispatch_entry_point__childrenERDs[2] = {
    &status_reply_body_ERD,
    &reply_dispatch_reply_body_ERD
};

static const ERD reply_body_entry_dispatch_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "reply_body", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    reply_body_entry_dispatch_entry_point__childrenOffsets,
    reply_body_entry_dispatch_entry_point__childrenERDs,
    (ERDParseSelf)&reply_body_entry_dispatch_entry_point__parseSelf,
    (ERDUnparseSelf)&reply_body_entry_dispatch_entry_point__unparseSelf,
    {.initChoice = NULL}
};

static const entry_dispatch_entry_point_ entry_dispatch_entry_point__compute_offsets;

static const size_t entry_dispatch_entry_point__childrenOffsets[3] = {
    (const char *)&entry_dispatch_entry_point__compute_offsets._choice - (const char *)&entry_dispatch_entry_point__compute_offsets,
    (const char *)&entry_dispatch_entry_point__compute_offsets.call_body - (const char *)&entry_dispatch_entry_point__compute_offsets,
    (const char *)&entry_dispatch_entry_point__compute_offsets.reply_body - (const char *)&entry_dispatch_entry_point__compute_offsets
};

static const ERD *const entry_dispatch_entry_point__childrenERDs[3] = {
    &_choice_entry_dispatch_entry_point_ERD,
    &call_body_entry_dispatch_entry_point_ERD,
    &reply_body_entry_dispatch_entry_point_ERD
};

static const ERD entry_dispatch_entry_point_ERD = {
    {
        NULL, // namedQName.prefix
        "entry_dispatch", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    entry_dispatch_entry_point__childrenOffsets,
    entry_dispatch_entry_point__childrenERDs,
    (ERDParseSelf)&entry_dispatch_entry_point__parseSelf,
    (ERDUnparseSelf)&entry_dispatch_entry_point__unparseSelf,
    {.initChoice = (InitChoiceRD)&entry_dispatch_entry_point__initChoice}
};

static const Request_RqstRply_ Request_RqstRply__compute_offsets;

static const size_t Request_RqstRply__childrenOffsets[4] = {
    (const char *)&Request_RqstRply__compute_offsets.recfragment - (const char *)&Request_RqstRply__compute_offsets,
    (const char *)&Request_RqstRply__compute_offsets.xid - (const char *)&Request_RqstRply__compute_offsets,
    (const char *)&Request_RqstRply__compute_offsets.mtype - (const char *)&Request_RqstRply__compute_offsets,
    (const char *)&Request_RqstRply__compute_offsets.entry_dispatch - (const char *)&Request_RqstRply__compute_offsets
};

static const ERD *const Request_RqstRply__childrenERDs[4] = {
    &recfragment_entry_point_ERD,
    &xid_entry_point_ERD,
    &mtype_entry_point_ERD,
    &entry_dispatch_entry_point_ERD
};

static const ERD Request_RqstRply_ERD = {
    {
        NULL, // namedQName.prefix
        "Request", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    Request_RqstRply__childrenOffsets,
    Request_RqstRply__childrenERDs,
    (ERDParseSelf)&Request_RqstRply__parseSelf,
    (ERDUnparseSelf)&Request_RqstRply__unparseSelf,
    {.initChoice = NULL}
};

static const Reply_RqstRply_ Reply_RqstRply__compute_offsets;

static const size_t Reply_RqstRply__childrenOffsets[4] = {
    (const char *)&Reply_RqstRply__compute_offsets.recfragment - (const char *)&Reply_RqstRply__compute_offsets,
    (const char *)&Reply_RqstRply__compute_offsets.xid - (const char *)&Reply_RqstRply__compute_offsets,
    (const char *)&Reply_RqstRply__compute_offsets.mtype - (const char *)&Reply_RqstRply__compute_offsets,
    (const char *)&Reply_RqstRply__compute_offsets.entry_dispatch - (const char *)&Reply_RqstRply__compute_offsets
};

static const ERD *const Reply_RqstRply__childrenERDs[4] = {
    &recfragment_entry_point_ERD,
    &xid_entry_point_ERD,
    &mtype_entry_point_ERD,
    &entry_dispatch_entry_point_ERD
};

static const ERD Reply_RqstRply_ERD = {
    {
        NULL, // namedQName.prefix
        "Reply", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    Reply_RqstRply__childrenOffsets,
    Reply_RqstRply__childrenERDs,
    (ERDParseSelf)&Reply_RqstRply__parseSelf,
    (ERDUnparseSelf)&Reply_RqstRply__unparseSelf,
    {.initChoice = NULL}
};

static const RqstRply_ RqstRply__compute_offsets;

static const size_t RqstRply__childrenOffsets[2] = {
    (const char *)&RqstRply__compute_offsets.Request - (const char *)&RqstRply__compute_offsets,
    (const char *)&RqstRply__compute_offsets.Reply - (const char *)&RqstRply__compute_offsets
};

static const ERD *const RqstRply__childrenERDs[2] = {
    &Request_RqstRply_ERD,
    &Reply_RqstRply_ERD
};

static const ERD RqstRply_ERD = {
    {
        "rr4", // namedQName.prefix
        "RqstRply", // namedQName.local
        "urn:RequestReply", // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    RqstRply__childrenOffsets,
    RqstRply__childrenERDs,
    (ERDParseSelf)&RqstRply__parseSelf,
    (ERDUnparseSelf)&RqstRply__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
recfragment_entry_point__initERD(recfragment_entry_point_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &recfragment_entry_point_ERD;
    instance->_base.parent = parent;
}

static void
recfragment_entry_point__parseSelf(recfragment_entry_point_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->fragmentIndicator, 1, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->dataSize, 31, pstate);
    if (pstate->pu.error) return;
}

static void
recfragment_entry_point__unparseSelf(const recfragment_entry_point_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->fragmentIndicator, 1, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->dataSize, 31, ustate);
    if (ustate->pu.error) return;
}

static void
authlen_authnone__initERD(authlen_authnone_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &authlen_authnone_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
authlen_authnone__parseSelf(authlen_authnone_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
authlen_authnone__unparseSelf(const authlen_authnone_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
auth_none_auth_dispatch_opaque_auth__initERD(auth_none_auth_dispatch_opaque_auth_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &auth_none_auth_dispatch_opaque_auth_ERD;
    instance->_base.parent = parent;
    authlen_authnone__initERD(&instance->authlen, (InfosetBase *)instance);
}

static void
auth_none_auth_dispatch_opaque_auth__parseSelf(auth_none_auth_dispatch_opaque_auth_ *instance, PState *pstate)
{
    authlen_authnone__parseSelf(&instance->authlen, pstate);
    if (pstate->pu.error) return;
}

static void
auth_none_auth_dispatch_opaque_auth__unparseSelf(const auth_none_auth_dispatch_opaque_auth_ *instance, UState *ustate)
{
    authlen_authnone__unparseSelf(&instance->authlen, ustate);
    if (ustate->pu.error) return;
}

static void
machineName_authunix__initERD(machineName_authunix_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &machineName_authunix_ERD;
    instance->_base.parent = parent;
    instance->strValue.dynamic = true;
}

static void
machineName_authunix__parseSelf(machineName_authunix_ *instance, PState *pstate)
{
    uint32_t _l_strValue;
    parse_be_uint32(&_l_strValue, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->strValue, _l_strValue, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->strValue, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
machineName_authunix__unparseSelf(const machineName_authunix_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->strValue.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->strValue, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__initERD(auth_unix_auth_dispatch_opaque_auth_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__parseSelf(auth_unix_auth_dispatch_opaque_auth_ *instance, PState *pstate)
{
    const size_t arraySize = array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__getArraySize(instance);
    validate_array_bounds("array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->GIDValues[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__unparseSelf(const auth_unix_auth_dispatch_opaque_auth_ *instance, UState *ustate)
{
    const size_t arraySize = array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__getArraySize(instance);
    validate_array_bounds("array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->GIDValues[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__getArraySize(const auth_unix_auth_dispatch_opaque_auth_ *instance)
{
    return instance->auxGIDElements;
}

static void
auth_unix_auth_dispatch_opaque_auth__initERD(auth_unix_auth_dispatch_opaque_auth_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &auth_unix_auth_dispatch_opaque_auth_ERD;
    instance->_base.parent = parent;
    machineName_authunix__initERD(&instance->machineName, (InfosetBase *)instance);
    array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__initERD(instance, parent);
}

static void
auth_unix_auth_dispatch_opaque_auth__parseSelf(auth_unix_auth_dispatch_opaque_auth_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->authlen, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->stamp, 32, pstate);
    if (pstate->pu.error) return;
    machineName_authunix__parseSelf(&instance->machineName, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->uid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->gid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->auxGIDElements, 32, pstate);
    if (pstate->pu.error) return;
    array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
auth_unix_auth_dispatch_opaque_auth__unparseSelf(const auth_unix_auth_dispatch_opaque_auth_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->authlen, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->stamp, 32, ustate);
    if (ustate->pu.error) return;
    machineName_authunix__unparseSelf(&instance->machineName, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->uid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->gid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->auxGIDElements, 32, ustate);
    if (ustate->pu.error) return;
    array_GIDValues_authunix_auth_unix_auth_dispatch_opaque_auth__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
auth_dispatch_opaque_auth__initERD(auth_dispatch_opaque_auth_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &auth_dispatch_opaque_auth_ERD;
    instance->_base.parent = parent;
}

static const Error *
auth_dispatch_opaque_auth__initChoice(auth_dispatch_opaque_auth_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((cred_call_body_ *)instance->_base.parent)->auth_type;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        auth_none_auth_dispatch_opaque_auth__initERD(&instance->auth_none, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        auth_unix_auth_dispatch_opaque_auth__initERD(&instance->auth_unix, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
auth_dispatch_opaque_auth__parseSelf(auth_dispatch_opaque_auth_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        auth_none_auth_dispatch_opaque_auth__parseSelf(&instance->auth_none, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        auth_unix_auth_dispatch_opaque_auth__parseSelf(&instance->auth_unix, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
auth_dispatch_opaque_auth__unparseSelf(const auth_dispatch_opaque_auth_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        auth_none_auth_dispatch_opaque_auth__unparseSelf(&instance->auth_none, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        auth_unix_auth_dispatch_opaque_auth__unparseSelf(&instance->auth_unix, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
cred_call_body__initERD(cred_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &cred_call_body_ERD;
    instance->_base.parent = parent;
    auth_dispatch_opaque_auth__initERD(&instance->auth_dispatch, (InfosetBase *)instance);
}

static void
cred_call_body__parseSelf(cred_call_body_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->auth_type, 32, pstate);
    if (pstate->pu.error) return;
    auth_dispatch_opaque_auth__parseSelf(&instance->auth_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
cred_call_body__unparseSelf(const cred_call_body_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->auth_type, 32, ustate);
    if (ustate->pu.error) return;
    auth_dispatch_opaque_auth__unparseSelf(&instance->auth_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
verf_call_body__initERD(verf_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &verf_call_body_ERD;
    instance->_base.parent = parent;
    auth_dispatch_opaque_auth__initERD(&instance->auth_dispatch, (InfosetBase *)instance);
}

static void
verf_call_body__parseSelf(verf_call_body_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->auth_type, 32, pstate);
    if (pstate->pu.error) return;
    auth_dispatch_opaque_auth__parseSelf(&instance->auth_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
verf_call_body__unparseSelf(const verf_call_body_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->auth_type, 32, ustate);
    if (ustate->pu.error) return;
    auth_dispatch_opaque_auth__unparseSelf(&instance->auth_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
mountd_null_mountd__initERD(mountd_null_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_null_mountd_ERD;
    instance->_base.parent = parent;
}

static void
mountd_null_mountd__parseSelf(mountd_null_mountd_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
mountd_null_mountd__unparseSelf(const mountd_null_mountd_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
mountPath_mountd_mt__initERD(mountPath_mountd_mt_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountPath_mountd_mt_ERD;
    instance->_base.parent = parent;
    instance->strValue.dynamic = true;
}

static void
mountPath_mountd_mt__parseSelf(mountPath_mountd_mt_ *instance, PState *pstate)
{
    uint32_t _l_strValue;
    parse_be_uint32(&_l_strValue, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->strValue, _l_strValue, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->strValue, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
mountPath_mountd_mt__unparseSelf(const mountPath_mountd_mt_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->strValue.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->strValue, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
mountd_mt_mountd__initERD(mountd_mt_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_mt_mountd_ERD;
    instance->_base.parent = parent;
    mountPath_mountd_mt__initERD(&instance->mountPath, (InfosetBase *)instance);
}

static void
mountd_mt_mountd__parseSelf(mountd_mt_mountd_ *instance, PState *pstate)
{
    mountPath_mountd_mt__parseSelf(&instance->mountPath, pstate);
    if (pstate->pu.error) return;
}

static void
mountd_mt_mountd__unparseSelf(const mountd_mt_mountd_ *instance, UState *ustate)
{
    mountPath_mountd_mt__unparseSelf(&instance->mountPath, ustate);
    if (ustate->pu.error) return;
}

static void
mountd_dump_mountd__initERD(mountd_dump_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_dump_mountd_ERD;
    instance->_base.parent = parent;
}

static void
mountd_dump_mountd__parseSelf(mountd_dump_mountd_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
mountd_dump_mountd__unparseSelf(const mountd_dump_mountd_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
unmountPath_mountd_umt__initERD(unmountPath_mountd_umt_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &unmountPath_mountd_umt_ERD;
    instance->_base.parent = parent;
    instance->strValue.dynamic = true;
}

static void
unmountPath_mountd_umt__parseSelf(unmountPath_mountd_umt_ *instance, PState *pstate)
{
    uint32_t _l_strValue;
    parse_be_uint32(&_l_strValue, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->strValue, _l_strValue, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->strValue, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
unmountPath_mountd_umt__unparseSelf(const unmountPath_mountd_umt_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->strValue.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->strValue, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
mountd_umt_mountd__initERD(mountd_umt_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_umt_mountd_ERD;
    instance->_base.parent = parent;
    unmountPath_mountd_umt__initERD(&instance->unmountPath, (InfosetBase *)instance);
}

static void
mountd_umt_mountd__parseSelf(mountd_umt_mountd_ *instance, PState *pstate)
{
    unmountPath_mountd_umt__parseSelf(&instance->unmountPath, pstate);
    if (pstate->pu.error) return;
}

static void
mountd_umt_mountd__unparseSelf(const mountd_umt_mountd_ *instance, UState *ustate)
{
    unmountPath_mountd_umt__unparseSelf(&instance->unmountPath, ustate);
    if (ustate->pu.error) return;
}

static void
mountd_umntall_mountd__initERD(mountd_umntall_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_umntall_mountd_ERD;
    instance->_base.parent = parent;
}

static void
mountd_umntall_mountd__parseSelf(mountd_umntall_mountd_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
mountd_umntall_mountd__unparseSelf(const mountd_umntall_mountd_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
mountd_export_mountd__initERD(mountd_export_mountd_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_export_mountd_ERD;
    instance->_base.parent = parent;
}

static void
mountd_export_mountd__parseSelf(mountd_export_mountd_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
mountd_export_mountd__unparseSelf(const mountd_export_mountd_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
mountd_v3_dispatch_call_dispatch_call_body__initERD(mountd_v3_dispatch_call_dispatch_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mountd_v3_dispatch_call_dispatch_call_body_ERD;
    instance->_base.parent = parent;
}

static const Error *
mountd_v3_dispatch_call_dispatch_call_body__initChoice(mountd_v3_dispatch_call_dispatch_call_body_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((call_body_entry_dispatch_entry_point_ *)instance->_base.parent->parent->parent)->proc;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        mountd_null_mountd__initERD(&instance->mountd_null, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        mountd_mt_mountd__initERD(&instance->mountd_mt, (InfosetBase *)instance);
        break;
    case 2:
        instance->_choice = 3;
        mountd_dump_mountd__initERD(&instance->mountd_dump, (InfosetBase *)instance);
        break;
    case 3:
        instance->_choice = 4;
        mountd_umt_mountd__initERD(&instance->mountd_umt, (InfosetBase *)instance);
        break;
    case 4:
        instance->_choice = 5;
        mountd_umntall_mountd__initERD(&instance->mountd_umntall, (InfosetBase *)instance);
        break;
    case 5:
        instance->_choice = 6;
        mountd_export_mountd__initERD(&instance->mountd_export, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
mountd_v3_dispatch_call_dispatch_call_body__parseSelf(mountd_v3_dispatch_call_dispatch_call_body_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        mountd_null_mountd__parseSelf(&instance->mountd_null, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        mountd_mt_mountd__parseSelf(&instance->mountd_mt, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        mountd_dump_mountd__parseSelf(&instance->mountd_dump, pstate);
        if (pstate->pu.error) return;
        break;
    case 4:
        mountd_umt_mountd__parseSelf(&instance->mountd_umt, pstate);
        if (pstate->pu.error) return;
        break;
    case 5:
        mountd_umntall_mountd__parseSelf(&instance->mountd_umntall, pstate);
        if (pstate->pu.error) return;
        break;
    case 6:
        mountd_export_mountd__parseSelf(&instance->mountd_export, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
mountd_v3_dispatch_call_dispatch_call_body__unparseSelf(const mountd_v3_dispatch_call_dispatch_call_body_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        mountd_null_mountd__unparseSelf(&instance->mountd_null, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        mountd_mt_mountd__unparseSelf(&instance->mountd_mt, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        mountd_dump_mountd__unparseSelf(&instance->mountd_dump, ustate);
        if (ustate->pu.error) return;
        break;
    case 4:
        mountd_umt_mountd__unparseSelf(&instance->mountd_umt, ustate);
        if (ustate->pu.error) return;
        break;
    case 5:
        mountd_umntall_mountd__unparseSelf(&instance->mountd_umntall, ustate);
        if (ustate->pu.error) return;
        break;
    case 6:
        mountd_export_mountd__unparseSelf(&instance->mountd_export, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
v3_dispatch_call_dispatch_call_body__initERD(v3_dispatch_call_dispatch_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &v3_dispatch_call_dispatch_call_body_ERD;
    instance->_base.parent = parent;
}

static const Error *
v3_dispatch_call_dispatch_call_body__initChoice(v3_dispatch_call_dispatch_call_body_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((call_body_entry_dispatch_entry_point_ *)instance->_base.parent->parent)->prog;
    switch (key)
    {
    case 100005:
        instance->_choice = 1;
        mountd_v3_dispatch_call_dispatch_call_body__initERD(&instance->mountd, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
v3_dispatch_call_dispatch_call_body__parseSelf(v3_dispatch_call_dispatch_call_body_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        mountd_v3_dispatch_call_dispatch_call_body__parseSelf(&instance->mountd, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
v3_dispatch_call_dispatch_call_body__unparseSelf(const v3_dispatch_call_dispatch_call_body_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        mountd_v3_dispatch_call_dispatch_call_body__unparseSelf(&instance->mountd, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
null_nfsv4__initERD(null_nfsv4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &null_nfsv4_ERD;
    instance->_base.parent = parent;
}

static void
null_nfsv4__parseSelf(null_nfsv4_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
null_nfsv4__unparseSelf(const null_nfsv4_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
tag_compound__initERD(tag_compound_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &tag_compound_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
tag_compound__parseSelf(tag_compound_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
tag_compound__unparseSelf(const tag_compound_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
access_op_dispatch_nfsv4_ops__initERD(access_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &access_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
access_op_dispatch_nfsv4_ops__parseSelf(access_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->check_access, 32, pstate);
    if (pstate->pu.error) return;
}

static void
access_op_dispatch_nfsv4_ops__unparseSelf(const access_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->check_access, 32, ustate);
    if (ustate->pu.error) return;
}

static void
open_stateid_close__initERD(open_stateid_close_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_stateid_close_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
open_stateid_close__parseSelf(open_stateid_close_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
open_stateid_close__unparseSelf(const open_stateid_close_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
close_op_dispatch_nfsv4_ops__initERD(close_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &close_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    open_stateid_close__initERD(&instance->open_stateid, (InfosetBase *)instance);
}

static void
close_op_dispatch_nfsv4_ops__parseSelf(close_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    open_stateid_close__parseSelf(&instance->open_stateid, pstate);
    if (pstate->pu.error) return;
}

static void
close_op_dispatch_nfsv4_ops__unparseSelf(const close_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    open_stateid_close__unparseSelf(&instance->open_stateid, ustate);
    if (ustate->pu.error) return;
}

static void
commit_op_dispatch_nfsv4_ops__initERD(commit_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &commit_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
commit_op_dispatch_nfsv4_ops__parseSelf(commit_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->count, 32, pstate);
    if (pstate->pu.error) return;
}

static void
commit_op_dispatch_nfsv4_ops__unparseSelf(const commit_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->count, 32, ustate);
    if (ustate->pu.error) return;
}

static void
linkdata_create_dispatch_createtype4__initERD(linkdata_create_dispatch_createtype4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &linkdata_create_dispatch_createtype4_ERD;
    instance->_base.parent = parent;
    instance->strValue.dynamic = true;
}

static void
linkdata_create_dispatch_createtype4__parseSelf(linkdata_create_dispatch_createtype4_ *instance, PState *pstate)
{
    uint32_t _l_strValue;
    parse_be_uint32(&_l_strValue, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->strValue, _l_strValue, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->strValue, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
linkdata_create_dispatch_createtype4__unparseSelf(const linkdata_create_dispatch_createtype4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->strValue.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->strValue, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
devdata_create_dispatch_createtype4__initERD(devdata_create_dispatch_createtype4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &devdata_create_dispatch_createtype4_ERD;
    instance->_base.parent = parent;
}

static void
devdata_create_dispatch_createtype4__parseSelf(devdata_create_dispatch_createtype4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->specdata1, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->specdata2, 32, pstate);
    if (pstate->pu.error) return;
}

static void
devdata_create_dispatch_createtype4__unparseSelf(const devdata_create_dispatch_createtype4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->specdata1, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->specdata2, 32, ustate);
    if (ustate->pu.error) return;
}

static void
create_dispatch_createtype4__initERD(create_dispatch_createtype4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &create_dispatch_createtype4_ERD;
    instance->_base.parent = parent;
}

static const Error *
create_dispatch_createtype4__initChoice(create_dispatch_createtype4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((objtype_create_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 2:
    case 6:
    case 7:
        instance->_choice = 1;
        break;
    case 5:
        instance->_choice = 2;
        linkdata_create_dispatch_createtype4__initERD(&instance->linkdata, (InfosetBase *)instance);
        break;
    case 3:
    case 4:
        instance->_choice = 3;
        devdata_create_dispatch_createtype4__initERD(&instance->devdata, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
create_dispatch_createtype4__parseSelf(create_dispatch_createtype4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        parse_be_int32(&instance->createvoid, 32, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        linkdata_create_dispatch_createtype4__parseSelf(&instance->linkdata, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        devdata_create_dispatch_createtype4__parseSelf(&instance->devdata, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
create_dispatch_createtype4__unparseSelf(const create_dispatch_createtype4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        unparse_be_int32(instance->createvoid, 32, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        linkdata_create_dispatch_createtype4__unparseSelf(&instance->linkdata, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        devdata_create_dispatch_createtype4__unparseSelf(&instance->devdata, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
objtype_create__initERD(objtype_create_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &objtype_create_ERD;
    instance->_base.parent = parent;
    create_dispatch_createtype4__initERD(&instance->create_dispatch, (InfosetBase *)instance);
}

static void
objtype_create__parseSelf(objtype_create_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode >= 1 && instance->mode <= 9, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    create_dispatch_createtype4__parseSelf(&instance->create_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
objtype_create__unparseSelf(const objtype_create_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode >= 1 && instance->mode <= 9, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    create_dispatch_createtype4__unparseSelf(&instance->create_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
objname_create__initERD(objname_create_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &objname_create_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
objname_create__parseSelf(objname_create_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
objname_create__unparseSelf(const objname_create_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
array_attrmask_fattr4_createattrs_create__initERD(createattrs_create_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_createattrs_create__parseSelf(createattrs_create_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_createattrs_create__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_createattrs_create_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_createattrs_create__unparseSelf(const createattrs_create_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_createattrs_create__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_createattrs_create_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_createattrs_create__getArraySize(const createattrs_create_ *instance)
{
    return instance->numargs;
}

static void
attr_vals_fattr4__initERD(attr_vals_fattr4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &attr_vals_fattr4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
attr_vals_fattr4__parseSelf(attr_vals_fattr4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
attr_vals_fattr4__unparseSelf(const attr_vals_fattr4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
createattrs_create__initERD(createattrs_create_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &createattrs_create_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_createattrs_create__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
createattrs_create__parseSelf(createattrs_create_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_createattrs_create__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
createattrs_create__unparseSelf(const createattrs_create_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_createattrs_create__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
create_op_dispatch_nfsv4_ops__initERD(create_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &create_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    objtype_create__initERD(&instance->objtype, (InfosetBase *)instance);
    objname_create__initERD(&instance->objname, (InfosetBase *)instance);
    createattrs_create__initERD(&instance->createattrs, (InfosetBase *)instance);
}

static void
create_op_dispatch_nfsv4_ops__parseSelf(create_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    objtype_create__parseSelf(&instance->objtype, pstate);
    if (pstate->pu.error) return;
    objname_create__parseSelf(&instance->objname, pstate);
    if (pstate->pu.error) return;
    createattrs_create__parseSelf(&instance->createattrs, pstate);
    if (pstate->pu.error) return;
}

static void
create_op_dispatch_nfsv4_ops__unparseSelf(const create_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    objtype_create__unparseSelf(&instance->objtype, ustate);
    if (ustate->pu.error) return;
    objname_create__unparseSelf(&instance->objname, ustate);
    if (ustate->pu.error) return;
    createattrs_create__unparseSelf(&instance->createattrs, ustate);
    if (ustate->pu.error) return;
}

static void
delegpurge_op_dispatch_nfsv4_ops__initERD(delegpurge_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &delegpurge_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
delegpurge_op_dispatch_nfsv4_ops__parseSelf(delegpurge_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
delegpurge_op_dispatch_nfsv4_ops__unparseSelf(const delegpurge_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
delegreturn_op_dispatch_nfsv4_ops__initERD(delegreturn_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &delegreturn_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
delegreturn_op_dispatch_nfsv4_ops__parseSelf(delegreturn_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
delegreturn_op_dispatch_nfsv4_ops__unparseSelf(const delegreturn_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__initERD(getattr_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__parseSelf(getattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    const size_t arraySize = array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__getArraySize(instance);
    validate_array_bounds("array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attr_request[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__unparseSelf(const getattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    const size_t arraySize = array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__getArraySize(instance);
    validate_array_bounds("array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attr_request[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__getArraySize(const getattr_op_dispatch_nfsv4_ops_ *instance)
{
    return instance->numargs;
}

static void
getattr_op_dispatch_nfsv4_ops__initERD(getattr_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getattr_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__initERD(instance, parent);
}

static void
getattr_op_dispatch_nfsv4_ops__parseSelf(getattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
getattr_op_dispatch_nfsv4_ops__unparseSelf(const getattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attr_request_getattr_getattr_op_dispatch_nfsv4_ops__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
getfh_op_dispatch_nfsv4_ops__initERD(getfh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getfh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
getfh_op_dispatch_nfsv4_ops__parseSelf(getfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
getfh_op_dispatch_nfsv4_ops__unparseSelf(const getfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
link_op_dispatch_nfsv4_ops__initERD(link_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &link_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
link_op_dispatch_nfsv4_ops__parseSelf(link_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
link_op_dispatch_nfsv4_ops__unparseSelf(const link_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
owner_lockt__initERD(owner_lockt_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &owner_lockt_ERD;
    instance->_base.parent = parent;
    instance->owner.array = instance->_a_owner;
    instance->owner.lengthInBytes = sizeof(instance->_a_owner);
    instance->owner.dynamic = false;
}

static void
owner_lockt__parseSelf(owner_lockt_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->clientid, 64, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->owner, pstate);
    if (pstate->pu.error) return;
}

static void
owner_lockt__unparseSelf(const owner_lockt_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->clientid, 64, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->owner, ustate);
    if (ustate->pu.error) return;
}

static void
lockt_op_dispatch_nfsv4_ops__initERD(lockt_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lockt_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    owner_lockt__initERD(&instance->owner, (InfosetBase *)instance);
}

static void
lockt_op_dispatch_nfsv4_ops__parseSelf(lockt_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->locktype, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->length, 64, pstate);
    if (pstate->pu.error) return;
    owner_lockt__parseSelf(&instance->owner, pstate);
    if (pstate->pu.error) return;
}

static void
lockt_op_dispatch_nfsv4_ops__unparseSelf(const lockt_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->locktype, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->length, 64, ustate);
    if (ustate->pu.error) return;
    owner_lockt__unparseSelf(&instance->owner, ustate);
    if (ustate->pu.error) return;
}

static void
lock_stateid_locku__initERD(lock_stateid_locku_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_stateid_locku_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
lock_stateid_locku__parseSelf(lock_stateid_locku_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
lock_stateid_locku__unparseSelf(const lock_stateid_locku_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
locku_op_dispatch_nfsv4_ops__initERD(locku_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &locku_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    lock_stateid_locku__initERD(&instance->lock_stateid, (InfosetBase *)instance);
}

static void
locku_op_dispatch_nfsv4_ops__parseSelf(locku_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->locktype, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    lock_stateid_locku__parseSelf(&instance->lock_stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->length, 64, pstate);
    if (pstate->pu.error) return;
}

static void
locku_op_dispatch_nfsv4_ops__unparseSelf(const locku_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->locktype, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    lock_stateid_locku__unparseSelf(&instance->lock_stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->length, 64, ustate);
    if (ustate->pu.error) return;
}

static void
lock_stateid_exist_lock_owner4__initERD(lock_stateid_exist_lock_owner4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_stateid_exist_lock_owner4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
lock_stateid_exist_lock_owner4__parseSelf(lock_stateid_exist_lock_owner4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
lock_stateid_exist_lock_owner4__unparseSelf(const lock_stateid_exist_lock_owner4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
lock_owner_lock_dispatch_locker4__initERD(lock_owner_lock_dispatch_locker4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_owner_lock_dispatch_locker4_ERD;
    instance->_base.parent = parent;
    lock_stateid_exist_lock_owner4__initERD(&instance->lock_stateid, (InfosetBase *)instance);
}

static void
lock_owner_lock_dispatch_locker4__parseSelf(lock_owner_lock_dispatch_locker4_ *instance, PState *pstate)
{
    lock_stateid_exist_lock_owner4__parseSelf(&instance->lock_stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->lock_seqid, 32, pstate);
    if (pstate->pu.error) return;
}

static void
lock_owner_lock_dispatch_locker4__unparseSelf(const lock_owner_lock_dispatch_locker4_ *instance, UState *ustate)
{
    lock_stateid_exist_lock_owner4__unparseSelf(&instance->lock_stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->lock_seqid, 32, ustate);
    if (ustate->pu.error) return;
}

static void
open_stateid_open_to_lock_owner4__initERD(open_stateid_open_to_lock_owner4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_stateid_open_to_lock_owner4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
open_stateid_open_to_lock_owner4__parseSelf(open_stateid_open_to_lock_owner4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
open_stateid_open_to_lock_owner4__unparseSelf(const open_stateid_open_to_lock_owner4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
lock_owner_open_to_lock_owner4__initERD(lock_owner_open_to_lock_owner4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_owner_open_to_lock_owner4_ERD;
    instance->_base.parent = parent;
    instance->owner.array = instance->_a_owner;
    instance->owner.lengthInBytes = sizeof(instance->_a_owner);
    instance->owner.dynamic = false;
}

static void
lock_owner_open_to_lock_owner4__parseSelf(lock_owner_open_to_lock_owner4_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->clientid, 64, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->owner, pstate);
    if (pstate->pu.error) return;
}

static void
lock_owner_open_to_lock_owner4__unparseSelf(const lock_owner_open_to_lock_owner4_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->clientid, 64, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->owner, ustate);
    if (ustate->pu.error) return;
}

static void
open_owner_lock_dispatch_locker4__initERD(open_owner_lock_dispatch_locker4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_owner_lock_dispatch_locker4_ERD;
    instance->_base.parent = parent;
    open_stateid_open_to_lock_owner4__initERD(&instance->open_stateid, (InfosetBase *)instance);
    lock_owner_open_to_lock_owner4__initERD(&instance->lock_owner, (InfosetBase *)instance);
}

static void
open_owner_lock_dispatch_locker4__parseSelf(open_owner_lock_dispatch_locker4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->open_seqid, 32, pstate);
    if (pstate->pu.error) return;
    open_stateid_open_to_lock_owner4__parseSelf(&instance->open_stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->lock_seqid, 32, pstate);
    if (pstate->pu.error) return;
    lock_owner_open_to_lock_owner4__parseSelf(&instance->lock_owner, pstate);
    if (pstate->pu.error) return;
}

static void
open_owner_lock_dispatch_locker4__unparseSelf(const open_owner_lock_dispatch_locker4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->open_seqid, 32, ustate);
    if (ustate->pu.error) return;
    open_stateid_open_to_lock_owner4__unparseSelf(&instance->open_stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->lock_seqid, 32, ustate);
    if (ustate->pu.error) return;
    lock_owner_open_to_lock_owner4__unparseSelf(&instance->lock_owner, ustate);
    if (ustate->pu.error) return;
}

static void
lock_dispatch_locker4__initERD(lock_dispatch_locker4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_dispatch_locker4_ERD;
    instance->_base.parent = parent;
}

static const Error *
lock_dispatch_locker4__initChoice(lock_dispatch_locker4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((locker_lock_ *)instance->_base.parent)->new_lock_owner;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        lock_owner_lock_dispatch_locker4__initERD(&instance->lock_owner, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        open_owner_lock_dispatch_locker4__initERD(&instance->open_owner, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
lock_dispatch_locker4__parseSelf(lock_dispatch_locker4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        lock_owner_lock_dispatch_locker4__parseSelf(&instance->lock_owner, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        open_owner_lock_dispatch_locker4__parseSelf(&instance->open_owner, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
lock_dispatch_locker4__unparseSelf(const lock_dispatch_locker4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        lock_owner_lock_dispatch_locker4__unparseSelf(&instance->lock_owner, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        open_owner_lock_dispatch_locker4__unparseSelf(&instance->open_owner, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
locker_lock__initERD(locker_lock_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &locker_lock_ERD;
    instance->_base.parent = parent;
    lock_dispatch_locker4__initERD(&instance->lock_dispatch, (InfosetBase *)instance);
}

static void
locker_lock__parseSelf(locker_lock_ *instance, PState *pstate)
{
    parse_be_int32(&instance->new_lock_owner, 32, pstate);
    if (pstate->pu.error) return;
    lock_dispatch_locker4__parseSelf(&instance->lock_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
locker_lock__unparseSelf(const locker_lock_ *instance, UState *ustate)
{
    unparse_be_int32(instance->new_lock_owner, 32, ustate);
    if (ustate->pu.error) return;
    lock_dispatch_locker4__unparseSelf(&instance->lock_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
lock_op_dispatch_nfsv4_ops__initERD(lock_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lock_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    locker_lock__initERD(&instance->locker, (InfosetBase *)instance);
}

static void
lock_op_dispatch_nfsv4_ops__parseSelf(lock_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->locktype, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->reclaim, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->length, 64, pstate);
    if (pstate->pu.error) return;
    locker_lock__parseSelf(&instance->locker, pstate);
    if (pstate->pu.error) return;
}

static void
lock_op_dispatch_nfsv4_ops__unparseSelf(const lock_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->locktype, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->locktype >= 1 && instance->locktype <= 4, "locktype", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->reclaim, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->length, 64, ustate);
    if (ustate->pu.error) return;
    locker_lock__unparseSelf(&instance->locker, ustate);
    if (ustate->pu.error) return;
}

static void
name_lookup__initERD(name_lookup_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &name_lookup_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
name_lookup__parseSelf(name_lookup_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
name_lookup__unparseSelf(const name_lookup_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
lookup_op_dispatch_nfsv4_ops__initERD(lookup_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lookup_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    name_lookup__initERD(&instance->name, (InfosetBase *)instance);
}

static void
lookup_op_dispatch_nfsv4_ops__parseSelf(lookup_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    name_lookup__parseSelf(&instance->name, pstate);
    if (pstate->pu.error) return;
}

static void
lookup_op_dispatch_nfsv4_ops__unparseSelf(const lookup_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    name_lookup__unparseSelf(&instance->name, ustate);
    if (ustate->pu.error) return;
}

static void
lookupp_op_dispatch_nfsv4_ops__initERD(lookupp_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lookupp_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
lookupp_op_dispatch_nfsv4_ops__parseSelf(lookupp_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
lookupp_op_dispatch_nfsv4_ops__unparseSelf(const lookupp_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
array_attrmask_fattr4_obj_attributes_nverify__initERD(obj_attributes_nverify_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_obj_attributes_nverify__parseSelf(obj_attributes_nverify_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_nverify__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_nverify_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_obj_attributes_nverify__unparseSelf(const obj_attributes_nverify_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_nverify__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_nverify_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_obj_attributes_nverify__getArraySize(const obj_attributes_nverify_ *instance)
{
    return instance->numargs;
}

static void
obj_attributes_nverify__initERD(obj_attributes_nverify_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &obj_attributes_nverify_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_obj_attributes_nverify__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
obj_attributes_nverify__parseSelf(obj_attributes_nverify_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_nverify__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
obj_attributes_nverify__unparseSelf(const obj_attributes_nverify_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_nverify__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
nverify_op_dispatch_nfsv4_ops__initERD(nverify_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nverify_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    obj_attributes_nverify__initERD(&instance->obj_attributes, (InfosetBase *)instance);
}

static void
nverify_op_dispatch_nfsv4_ops__parseSelf(nverify_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    obj_attributes_nverify__parseSelf(&instance->obj_attributes, pstate);
    if (pstate->pu.error) return;
}

static void
nverify_op_dispatch_nfsv4_ops__unparseSelf(const nverify_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    obj_attributes_nverify__unparseSelf(&instance->obj_attributes, ustate);
    if (ustate->pu.error) return;
}

static void
owner_open_owner4__initERD(owner_open_owner4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &owner_open_owner4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
owner_open_owner4__parseSelf(owner_open_owner4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
owner_open_owner4__unparseSelf(const owner_open_owner4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
owner_open__initERD(owner_open_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &owner_open_ERD;
    instance->_base.parent = parent;
    owner_open_owner4__initERD(&instance->owner, (InfosetBase *)instance);
}

static void
owner_open__parseSelf(owner_open_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->clientid, 64, pstate);
    if (pstate->pu.error) return;
    owner_open_owner4__parseSelf(&instance->owner, pstate);
    if (pstate->pu.error) return;
}

static void
owner_open__unparseSelf(const owner_open_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->clientid, 64, ustate);
    if (ustate->pu.error) return;
    owner_open_owner4__unparseSelf(&instance->owner, ustate);
    if (ustate->pu.error) return;
}

static void
array_attrmask_fattr4_createattrs_create_dispatch_createhow4__initERD(createattrs_create_dispatch_createhow4_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_createattrs_create_dispatch_createhow4__parseSelf(createattrs_create_dispatch_createhow4_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_createattrs_create_dispatch_createhow4__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_createattrs_create_dispatch_createhow4_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_createattrs_create_dispatch_createhow4__unparseSelf(const createattrs_create_dispatch_createhow4_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_createattrs_create_dispatch_createhow4__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_createattrs_create_dispatch_createhow4_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_createattrs_create_dispatch_createhow4__getArraySize(const createattrs_create_dispatch_createhow4_ *instance)
{
    return instance->numargs;
}

static void
createattrs_create_dispatch_createhow4__initERD(createattrs_create_dispatch_createhow4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &createattrs_create_dispatch_createhow4_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_createattrs_create_dispatch_createhow4__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
createattrs_create_dispatch_createhow4__parseSelf(createattrs_create_dispatch_createhow4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_createattrs_create_dispatch_createhow4__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
createattrs_create_dispatch_createhow4__unparseSelf(const createattrs_create_dispatch_createhow4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_createattrs_create_dispatch_createhow4__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
create_dispatch_createhow4__initERD(create_dispatch_createhow4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &create_dispatch_createhow4_ERD;
    instance->_base.parent = parent;
}

static const Error *
create_dispatch_createhow4__initChoice(create_dispatch_createhow4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((how_open_dispatch_openflag4_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 0:
    case 1:
        instance->_choice = 1;
        createattrs_create_dispatch_createhow4__initERD(&instance->createattrs, (InfosetBase *)instance);
        break;
    case 2:
        instance->_choice = 2;
        instance->createverf.array = instance->_a_createverf;
        instance->createverf.lengthInBytes = sizeof(instance->_a_createverf);
        instance->createverf.dynamic = false;
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
create_dispatch_createhow4__parseSelf(create_dispatch_createhow4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        createattrs_create_dispatch_createhow4__parseSelf(&instance->createattrs, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        parse_hexBinary(&instance->createverf, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
create_dispatch_createhow4__unparseSelf(const create_dispatch_createhow4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        createattrs_create_dispatch_createhow4__unparseSelf(&instance->createattrs, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        unparse_hexBinary(instance->createverf, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
how_open_dispatch_openflag4__initERD(how_open_dispatch_openflag4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &how_open_dispatch_openflag4_ERD;
    instance->_base.parent = parent;
    create_dispatch_createhow4__initERD(&instance->create_dispatch, (InfosetBase *)instance);
}

static void
how_open_dispatch_openflag4__parseSelf(how_open_dispatch_openflag4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    create_dispatch_createhow4__parseSelf(&instance->create_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
how_open_dispatch_openflag4__unparseSelf(const how_open_dispatch_openflag4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    create_dispatch_createhow4__unparseSelf(&instance->create_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
open_dispatch_openflag4__initERD(open_dispatch_openflag4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_dispatch_openflag4_ERD;
    instance->_base.parent = parent;
}

static const Error *
open_dispatch_openflag4__initChoice(open_dispatch_openflag4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((openhow_open_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 1:
        instance->_choice = 1;
        how_open_dispatch_openflag4__initERD(&instance->how, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
open_dispatch_openflag4__parseSelf(open_dispatch_openflag4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        how_open_dispatch_openflag4__parseSelf(&instance->how, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
open_dispatch_openflag4__unparseSelf(const open_dispatch_openflag4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        how_open_dispatch_openflag4__unparseSelf(&instance->how, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
openhow_open__initERD(openhow_open_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &openhow_open_ERD;
    instance->_base.parent = parent;
    open_dispatch_openflag4__initERD(&instance->open_dispatch, (InfosetBase *)instance);
}

static void
openhow_open__parseSelf(openhow_open_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 1, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    open_dispatch_openflag4__parseSelf(&instance->open_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
openhow_open__unparseSelf(const openhow_open_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 1, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    open_dispatch_openflag4__unparseSelf(&instance->open_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
file_claim_dispatch_open_claim4__initERD(file_claim_dispatch_open_claim4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &file_claim_dispatch_open_claim4_ERD;
    instance->_base.parent = parent;
    instance->strValue.dynamic = true;
}

static void
file_claim_dispatch_open_claim4__parseSelf(file_claim_dispatch_open_claim4_ *instance, PState *pstate)
{
    uint32_t _l_strValue;
    parse_be_uint32(&_l_strValue, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->strValue, _l_strValue, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->strValue, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
file_claim_dispatch_open_claim4__unparseSelf(const file_claim_dispatch_open_claim4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->strValue.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->strValue, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
delegate_stateid_open_claim_delegate_cur4__initERD(delegate_stateid_open_claim_delegate_cur4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &delegate_stateid_open_claim_delegate_cur4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
delegate_stateid_open_claim_delegate_cur4__parseSelf(delegate_stateid_open_claim_delegate_cur4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
delegate_stateid_open_claim_delegate_cur4__unparseSelf(const delegate_stateid_open_claim_delegate_cur4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
file_open_claim_delegate_cur4__initERD(file_open_claim_delegate_cur4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &file_open_claim_delegate_cur4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
file_open_claim_delegate_cur4__parseSelf(file_open_claim_delegate_cur4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
file_open_claim_delegate_cur4__unparseSelf(const file_open_claim_delegate_cur4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
delegate_cur_info_claim_dispatch_open_claim4__initERD(delegate_cur_info_claim_dispatch_open_claim4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &delegate_cur_info_claim_dispatch_open_claim4_ERD;
    instance->_base.parent = parent;
    delegate_stateid_open_claim_delegate_cur4__initERD(&instance->delegate_stateid, (InfosetBase *)instance);
    file_open_claim_delegate_cur4__initERD(&instance->file, (InfosetBase *)instance);
}

static void
delegate_cur_info_claim_dispatch_open_claim4__parseSelf(delegate_cur_info_claim_dispatch_open_claim4_ *instance, PState *pstate)
{
    delegate_stateid_open_claim_delegate_cur4__parseSelf(&instance->delegate_stateid, pstate);
    if (pstate->pu.error) return;
    file_open_claim_delegate_cur4__parseSelf(&instance->file, pstate);
    if (pstate->pu.error) return;
}

static void
delegate_cur_info_claim_dispatch_open_claim4__unparseSelf(const delegate_cur_info_claim_dispatch_open_claim4_ *instance, UState *ustate)
{
    delegate_stateid_open_claim_delegate_cur4__unparseSelf(&instance->delegate_stateid, ustate);
    if (ustate->pu.error) return;
    file_open_claim_delegate_cur4__unparseSelf(&instance->file, ustate);
    if (ustate->pu.error) return;
}

static void
claim_dispatch_open_claim4__initERD(claim_dispatch_open_claim4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &claim_dispatch_open_claim4_ERD;
    instance->_base.parent = parent;
}

static const Error *
claim_dispatch_open_claim4__initChoice(claim_dispatch_open_claim4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((claim_open_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 0:
    case 3:
        instance->_choice = 1;
        file_claim_dispatch_open_claim4__initERD(&instance->file, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        break;
    case 2:
        instance->_choice = 3;
        delegate_cur_info_claim_dispatch_open_claim4__initERD(&instance->delegate_cur_info, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
claim_dispatch_open_claim4__parseSelf(claim_dispatch_open_claim4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        file_claim_dispatch_open_claim4__parseSelf(&instance->file, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        parse_be_uint32(&instance->delegate_type, 32, pstate);
        if (pstate->pu.error) return;
        validate_schema_range(instance->delegate_type <= 2, "delegate_type", &pstate->pu);
        if (pstate->pu.error) return;
        break;
    case 3:
        delegate_cur_info_claim_dispatch_open_claim4__parseSelf(&instance->delegate_cur_info, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
claim_dispatch_open_claim4__unparseSelf(const claim_dispatch_open_claim4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        file_claim_dispatch_open_claim4__unparseSelf(&instance->file, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        unparse_be_uint32(instance->delegate_type, 32, ustate);
        if (ustate->pu.error) return;
        validate_schema_range(instance->delegate_type <= 2, "delegate_type", &ustate->pu);
        if (ustate->pu.error) return;
        break;
    case 3:
        delegate_cur_info_claim_dispatch_open_claim4__unparseSelf(&instance->delegate_cur_info, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
claim_open__initERD(claim_open_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &claim_open_ERD;
    instance->_base.parent = parent;
    claim_dispatch_open_claim4__initERD(&instance->claim_dispatch, (InfosetBase *)instance);
}

static void
claim_open__parseSelf(claim_open_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 3, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    claim_dispatch_open_claim4__parseSelf(&instance->claim_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
claim_open__unparseSelf(const claim_open_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 3, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    claim_dispatch_open_claim4__unparseSelf(&instance->claim_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
open_op_dispatch_nfsv4_ops__initERD(open_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    owner_open__initERD(&instance->owner, (InfosetBase *)instance);
    openhow_open__initERD(&instance->openhow, (InfosetBase *)instance);
    claim_open__initERD(&instance->claim, (InfosetBase *)instance);
}

static void
open_op_dispatch_nfsv4_ops__parseSelf(open_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->share_access, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->share_deny, 32, pstate);
    if (pstate->pu.error) return;
    owner_open__parseSelf(&instance->owner, pstate);
    if (pstate->pu.error) return;
    openhow_open__parseSelf(&instance->openhow, pstate);
    if (pstate->pu.error) return;
    claim_open__parseSelf(&instance->claim, pstate);
    if (pstate->pu.error) return;
}

static void
open_op_dispatch_nfsv4_ops__unparseSelf(const open_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->share_access, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->share_deny, 32, ustate);
    if (ustate->pu.error) return;
    owner_open__unparseSelf(&instance->owner, ustate);
    if (ustate->pu.error) return;
    openhow_open__unparseSelf(&instance->openhow, ustate);
    if (ustate->pu.error) return;
    claim_open__unparseSelf(&instance->claim, ustate);
    if (ustate->pu.error) return;
}

static void
openattr_op_dispatch_nfsv4_ops__initERD(openattr_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &openattr_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
openattr_op_dispatch_nfsv4_ops__parseSelf(openattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_bool(&instance->createdir, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
}

static void
openattr_op_dispatch_nfsv4_ops__unparseSelf(const openattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_bool(instance->createdir, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
}

static void
open_confirm_op_dispatch_nfsv4_ops__initERD(open_confirm_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_confirm_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
open_confirm_op_dispatch_nfsv4_ops__parseSelf(open_confirm_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
open_confirm_op_dispatch_nfsv4_ops__unparseSelf(const open_confirm_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
open_stateid_open_downgrade__initERD(open_stateid_open_downgrade_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_stateid_open_downgrade_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
open_stateid_open_downgrade__parseSelf(open_stateid_open_downgrade_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
open_stateid_open_downgrade__unparseSelf(const open_stateid_open_downgrade_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
open_downgrade_op_dispatch_nfsv4_ops__initERD(open_downgrade_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_downgrade_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    open_stateid_open_downgrade__initERD(&instance->open_stateid, (InfosetBase *)instance);
}

static void
open_downgrade_op_dispatch_nfsv4_ops__parseSelf(open_downgrade_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    open_stateid_open_downgrade__parseSelf(&instance->open_stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->share_access, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->share_deny, 32, pstate);
    if (pstate->pu.error) return;
}

static void
open_downgrade_op_dispatch_nfsv4_ops__unparseSelf(const open_downgrade_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    open_stateid_open_downgrade__unparseSelf(&instance->open_stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->share_access, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->share_deny, 32, ustate);
    if (ustate->pu.error) return;
}

static void
object_putfh__initERD(object_putfh_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &object_putfh_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
object_putfh__parseSelf(object_putfh_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
object_putfh__unparseSelf(const object_putfh_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
putfh_op_dispatch_nfsv4_ops__initERD(putfh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putfh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    object_putfh__initERD(&instance->object, (InfosetBase *)instance);
}

static void
putfh_op_dispatch_nfsv4_ops__parseSelf(putfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    object_putfh__parseSelf(&instance->object, pstate);
    if (pstate->pu.error) return;
}

static void
putfh_op_dispatch_nfsv4_ops__unparseSelf(const putfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    object_putfh__unparseSelf(&instance->object, ustate);
    if (ustate->pu.error) return;
}

static void
putpubfh_op_dispatch_nfsv4_ops__initERD(putpubfh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putpubfh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
putpubfh_op_dispatch_nfsv4_ops__parseSelf(putpubfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
putpubfh_op_dispatch_nfsv4_ops__unparseSelf(const putpubfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
putrootfh_op_dispatch_nfsv4_ops__initERD(putrootfh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putrootfh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
putrootfh_op_dispatch_nfsv4_ops__parseSelf(putrootfh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
putrootfh_op_dispatch_nfsv4_ops__unparseSelf(const putrootfh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
stateid_read__initERD(stateid_read_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_read_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_read__parseSelf(stateid_read_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_read__unparseSelf(const stateid_read_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
read_op_dispatch_nfsv4_ops__initERD(read_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &read_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    stateid_read__initERD(&instance->stateid, (InfosetBase *)instance);
}

static void
read_op_dispatch_nfsv4_ops__parseSelf(read_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    stateid_read__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->count, 32, pstate);
    if (pstate->pu.error) return;
}

static void
read_op_dispatch_nfsv4_ops__unparseSelf(const read_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    stateid_read__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->count, 32, ustate);
    if (ustate->pu.error) return;
}

static void
array_bitmap_bitmap4_attr_request_readdir__initERD(attr_request_readdir_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_bitmap_bitmap4_attr_request_readdir__parseSelf(attr_request_readdir_ *instance, PState *pstate)
{
    const size_t arraySize = array_bitmap_bitmap4_attr_request_readdir__getArraySize(instance);
    validate_array_bounds("array_bitmap_bitmap4_attr_request_readdir_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->bitmap[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_bitmap_bitmap4_attr_request_readdir__unparseSelf(const attr_request_readdir_ *instance, UState *ustate)
{
    const size_t arraySize = array_bitmap_bitmap4_attr_request_readdir__getArraySize(instance);
    validate_array_bounds("array_bitmap_bitmap4_attr_request_readdir_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->bitmap[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_bitmap_bitmap4_attr_request_readdir__getArraySize(const attr_request_readdir_ *instance)
{
    return instance->numargs;
}

static void
attr_request_readdir__initERD(attr_request_readdir_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &attr_request_readdir_ERD;
    instance->_base.parent = parent;
    array_bitmap_bitmap4_attr_request_readdir__initERD(instance, parent);
}

static void
attr_request_readdir__parseSelf(attr_request_readdir_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_bitmap_bitmap4_attr_request_readdir__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
attr_request_readdir__unparseSelf(const attr_request_readdir_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_bitmap_bitmap4_attr_request_readdir__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
readdir_op_dispatch_nfsv4_ops__initERD(readdir_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &readdir_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    instance->cookieverf.array = instance->_a_cookieverf;
    instance->cookieverf.lengthInBytes = sizeof(instance->_a_cookieverf);
    instance->cookieverf.dynamic = false;
    attr_request_readdir__initERD(&instance->attr_request, (InfosetBase *)instance);
}

static void
readdir_op_dispatch_nfsv4_ops__parseSelf(readdir_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->cookie, 64, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->cookieverf, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->dircount, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->maxcount, 32, pstate);
    if (pstate->pu.error) return;
    attr_request_readdir__parseSelf(&instance->attr_request, pstate);
    if (pstate->pu.error) return;
}

static void
readdir_op_dispatch_nfsv4_ops__unparseSelf(const readdir_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->cookie, 64, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->cookieverf, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->dircount, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->maxcount, 32, ustate);
    if (ustate->pu.error) return;
    attr_request_readdir__unparseSelf(&instance->attr_request, ustate);
    if (ustate->pu.error) return;
}

static void
readlink_op_dispatch_nfsv4_ops__initERD(readlink_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &readlink_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
readlink_op_dispatch_nfsv4_ops__parseSelf(readlink_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
readlink_op_dispatch_nfsv4_ops__unparseSelf(const readlink_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
component_component4__initERD(component_component4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &component_component4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
component_component4__parseSelf(component_component4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
component_component4__unparseSelf(const component_component4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
target_remove__initERD(target_remove_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &target_remove_ERD;
    instance->_base.parent = parent;
    component_component4__initERD(&instance->component, (InfosetBase *)instance);
}

static void
target_remove__parseSelf(target_remove_ *instance, PState *pstate)
{
    component_component4__parseSelf(&instance->component, pstate);
    if (pstate->pu.error) return;
}

static void
target_remove__unparseSelf(const target_remove_ *instance, UState *ustate)
{
    component_component4__unparseSelf(&instance->component, ustate);
    if (ustate->pu.error) return;
}

static void
remove_op_dispatch_nfsv4_ops__initERD(remove_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &remove_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    target_remove__initERD(&instance->target, (InfosetBase *)instance);
}

static void
remove_op_dispatch_nfsv4_ops__parseSelf(remove_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    target_remove__parseSelf(&instance->target, pstate);
    if (pstate->pu.error) return;
}

static void
remove_op_dispatch_nfsv4_ops__unparseSelf(const remove_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    target_remove__unparseSelf(&instance->target, ustate);
    if (ustate->pu.error) return;
}

static void
oldname_rename__initERD(oldname_rename_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &oldname_rename_ERD;
    instance->_base.parent = parent;
    component_component4__initERD(&instance->component, (InfosetBase *)instance);
}

static void
oldname_rename__parseSelf(oldname_rename_ *instance, PState *pstate)
{
    component_component4__parseSelf(&instance->component, pstate);
    if (pstate->pu.error) return;
}

static void
oldname_rename__unparseSelf(const oldname_rename_ *instance, UState *ustate)
{
    component_component4__unparseSelf(&instance->component, ustate);
    if (ustate->pu.error) return;
}

static void
newname_rename__initERD(newname_rename_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &newname_rename_ERD;
    instance->_base.parent = parent;
    component_component4__initERD(&instance->component, (InfosetBase *)instance);
}

static void
newname_rename__parseSelf(newname_rename_ *instance, PState *pstate)
{
    component_component4__parseSelf(&instance->component, pstate);
    if (pstate->pu.error) return;
}

static void
newname_rename__unparseSelf(const newname_rename_ *instance, UState *ustate)
{
    component_component4__unparseSelf(&instance->component, ustate);
    if (ustate->pu.error) return;
}

static void
rename_op_dispatch_nfsv4_ops__initERD(rename_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &rename_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    oldname_rename__initERD(&instance->oldname, (InfosetBase *)instance);
    newname_rename__initERD(&instance->newname, (InfosetBase *)instance);
}

static void
rename_op_dispatch_nfsv4_ops__parseSelf(rename_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    oldname_rename__parseSelf(&instance->oldname, pstate);
    if (pstate->pu.error) return;
    newname_rename__parseSelf(&instance->newname, pstate);
    if (pstate->pu.error) return;
}

static void
rename_op_dispatch_nfsv4_ops__unparseSelf(const rename_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    oldname_rename__unparseSelf(&instance->oldname, ustate);
    if (ustate->pu.error) return;
    newname_rename__unparseSelf(&instance->newname, ustate);
    if (ustate->pu.error) return;
}

static void
renew_op_dispatch_nfsv4_ops__initERD(renew_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &renew_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
renew_op_dispatch_nfsv4_ops__parseSelf(renew_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
renew_op_dispatch_nfsv4_ops__unparseSelf(const renew_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
restorefh_op_dispatch_nfsv4_ops__initERD(restorefh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &restorefh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
restorefh_op_dispatch_nfsv4_ops__parseSelf(restorefh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
restorefh_op_dispatch_nfsv4_ops__unparseSelf(const restorefh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
savefh_op_dispatch_nfsv4_ops__initERD(savefh_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &savefh_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
savefh_op_dispatch_nfsv4_ops__parseSelf(savefh_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
savefh_op_dispatch_nfsv4_ops__unparseSelf(const savefh_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
name_secinfo__initERD(name_secinfo_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &name_secinfo_ERD;
    instance->_base.parent = parent;
    component_component4__initERD(&instance->component, (InfosetBase *)instance);
}

static void
name_secinfo__parseSelf(name_secinfo_ *instance, PState *pstate)
{
    component_component4__parseSelf(&instance->component, pstate);
    if (pstate->pu.error) return;
}

static void
name_secinfo__unparseSelf(const name_secinfo_ *instance, UState *ustate)
{
    component_component4__unparseSelf(&instance->component, ustate);
    if (ustate->pu.error) return;
}

static void
secinfo_op_dispatch_nfsv4_ops__initERD(secinfo_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &secinfo_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    name_secinfo__initERD(&instance->name, (InfosetBase *)instance);
}

static void
secinfo_op_dispatch_nfsv4_ops__parseSelf(secinfo_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    name_secinfo__parseSelf(&instance->name, pstate);
    if (pstate->pu.error) return;
}

static void
secinfo_op_dispatch_nfsv4_ops__unparseSelf(const secinfo_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    name_secinfo__unparseSelf(&instance->name, ustate);
    if (ustate->pu.error) return;
}

static void
stateid_setattr__initERD(stateid_setattr_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_setattr_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_setattr__parseSelf(stateid_setattr_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_setattr__unparseSelf(const stateid_setattr_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
array_attrmask_fattr4_obj_attributes_setattr__initERD(obj_attributes_setattr_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_obj_attributes_setattr__parseSelf(obj_attributes_setattr_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_setattr__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_setattr_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_obj_attributes_setattr__unparseSelf(const obj_attributes_setattr_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_setattr__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_setattr_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_obj_attributes_setattr__getArraySize(const obj_attributes_setattr_ *instance)
{
    return instance->numargs;
}

static void
obj_attributes_setattr__initERD(obj_attributes_setattr_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &obj_attributes_setattr_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_obj_attributes_setattr__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
obj_attributes_setattr__parseSelf(obj_attributes_setattr_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_setattr__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
obj_attributes_setattr__unparseSelf(const obj_attributes_setattr_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_setattr__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
setattr_op_dispatch_nfsv4_ops__initERD(setattr_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &setattr_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    stateid_setattr__initERD(&instance->stateid, (InfosetBase *)instance);
    obj_attributes_setattr__initERD(&instance->obj_attributes, (InfosetBase *)instance);
}

static void
setattr_op_dispatch_nfsv4_ops__parseSelf(setattr_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    stateid_setattr__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    obj_attributes_setattr__parseSelf(&instance->obj_attributes, pstate);
    if (pstate->pu.error) return;
}

static void
setattr_op_dispatch_nfsv4_ops__unparseSelf(const setattr_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    stateid_setattr__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    obj_attributes_setattr__unparseSelf(&instance->obj_attributes, ustate);
    if (ustate->pu.error) return;
}

static void
setclientid_op_dispatch_nfsv4_ops__initERD(setclientid_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &setclientid_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
setclientid_op_dispatch_nfsv4_ops__parseSelf(setclientid_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
setclientid_op_dispatch_nfsv4_ops__unparseSelf(const setclientid_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
setclientid_confirm_op_dispatch_nfsv4_ops__initERD(setclientid_confirm_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &setclientid_confirm_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
setclientid_confirm_op_dispatch_nfsv4_ops__parseSelf(setclientid_confirm_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
setclientid_confirm_op_dispatch_nfsv4_ops__unparseSelf(const setclientid_confirm_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
array_attrmask_fattr4_obj_attributes_verify__initERD(obj_attributes_verify_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_obj_attributes_verify__parseSelf(obj_attributes_verify_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_verify__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_verify_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_obj_attributes_verify__unparseSelf(const obj_attributes_verify_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_verify__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_verify_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_obj_attributes_verify__getArraySize(const obj_attributes_verify_ *instance)
{
    return instance->numargs;
}

static void
obj_attributes_verify__initERD(obj_attributes_verify_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &obj_attributes_verify_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_obj_attributes_verify__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
obj_attributes_verify__parseSelf(obj_attributes_verify_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_verify__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
obj_attributes_verify__unparseSelf(const obj_attributes_verify_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_verify__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
verify_op_dispatch_nfsv4_ops__initERD(verify_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &verify_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    obj_attributes_verify__initERD(&instance->obj_attributes, (InfosetBase *)instance);
}

static void
verify_op_dispatch_nfsv4_ops__parseSelf(verify_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    obj_attributes_verify__parseSelf(&instance->obj_attributes, pstate);
    if (pstate->pu.error) return;
}

static void
verify_op_dispatch_nfsv4_ops__unparseSelf(const verify_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    obj_attributes_verify__unparseSelf(&instance->obj_attributes, ustate);
    if (ustate->pu.error) return;
}

static void
stateid_write__initERD(stateid_write_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_write_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_write__parseSelf(stateid_write_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_write__unparseSelf(const stateid_write_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
data_write__initERD(data_write_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &data_write_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
data_write__parseSelf(data_write_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
data_write__unparseSelf(const data_write_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
write_op_dispatch_nfsv4_ops__initERD(write_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &write_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    stateid_write__initERD(&instance->stateid, (InfosetBase *)instance);
    data_write__initERD(&instance->data, (InfosetBase *)instance);
}

static void
write_op_dispatch_nfsv4_ops__parseSelf(write_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    stateid_write__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->stable, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->stable <= 2, "stable", &pstate->pu);
    if (pstate->pu.error) return;
    data_write__parseSelf(&instance->data, pstate);
    if (pstate->pu.error) return;
}

static void
write_op_dispatch_nfsv4_ops__unparseSelf(const write_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    stateid_write__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->stable, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->stable <= 2, "stable", &ustate->pu);
    if (ustate->pu.error) return;
    data_write__unparseSelf(&instance->data, ustate);
    if (ustate->pu.error) return;
}

static void
release_lockowner_op_dispatch_nfsv4_ops__initERD(release_lockowner_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &release_lockowner_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
release_lockowner_op_dispatch_nfsv4_ops__parseSelf(release_lockowner_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
release_lockowner_op_dispatch_nfsv4_ops__unparseSelf(const release_lockowner_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
backchannel_ctl_op_dispatch_nfsv4_ops__initERD(backchannel_ctl_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &backchannel_ctl_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
backchannel_ctl_op_dispatch_nfsv4_ops__parseSelf(backchannel_ctl_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
backchannel_ctl_op_dispatch_nfsv4_ops__unparseSelf(const backchannel_ctl_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
bind_conn_to_session_op_dispatch_nfsv4_ops__initERD(bind_conn_to_session_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &bind_conn_to_session_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
bind_conn_to_session_op_dispatch_nfsv4_ops__parseSelf(bind_conn_to_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
bind_conn_to_session_op_dispatch_nfsv4_ops__unparseSelf(const bind_conn_to_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
co_ownerid_client_owner4__initERD(co_ownerid_client_owner4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &co_ownerid_client_owner4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
co_ownerid_client_owner4__parseSelf(co_ownerid_client_owner4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
co_ownerid_client_owner4__unparseSelf(const co_ownerid_client_owner4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
eia_clientowner_exchange_id__initERD(eia_clientowner_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eia_clientowner_exchange_id_ERD;
    instance->_base.parent = parent;
    instance->co_verifier.array = instance->_a_co_verifier;
    instance->co_verifier.lengthInBytes = sizeof(instance->_a_co_verifier);
    instance->co_verifier.dynamic = false;
    co_ownerid_client_owner4__initERD(&instance->co_ownerid, (InfosetBase *)instance);
}

static void
eia_clientowner_exchange_id__parseSelf(eia_clientowner_exchange_id_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->co_verifier, pstate);
    if (pstate->pu.error) return;
    co_ownerid_client_owner4__parseSelf(&instance->co_ownerid, pstate);
    if (pstate->pu.error) return;
}

static void
eia_clientowner_exchange_id__unparseSelf(const eia_clientowner_exchange_id_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->co_verifier, ustate);
    if (ustate->pu.error) return;
    co_ownerid_client_owner4__unparseSelf(&instance->co_ownerid, ustate);
    if (ustate->pu.error) return;
}

static void
spa_void_protect_dispatch_state_protect4_a__initERD(spa_void_protect_dispatch_state_protect4_a_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &spa_void_protect_dispatch_state_protect4_a_ERD;
    instance->_base.parent = parent;
}

static void
spa_void_protect_dispatch_state_protect4_a__parseSelf(spa_void_protect_dispatch_state_protect4_a_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
spa_void_protect_dispatch_state_protect4_a__unparseSelf(const spa_void_protect_dispatch_state_protect4_a_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
spa_mach_ops_protect_dispatch_state_protect4_a__initERD(spa_mach_ops_protect_dispatch_state_protect4_a_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &spa_mach_ops_protect_dispatch_state_protect4_a_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
spa_mach_ops_protect_dispatch_state_protect4_a__parseSelf(spa_mach_ops_protect_dispatch_state_protect4_a_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
spa_mach_ops_protect_dispatch_state_protect4_a__unparseSelf(const spa_mach_ops_protect_dispatch_state_protect4_a_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
spa_ssv_params_protect_dispatch_state_protect4_a__initERD(spa_ssv_params_protect_dispatch_state_protect4_a_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &spa_ssv_params_protect_dispatch_state_protect4_a_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
spa_ssv_params_protect_dispatch_state_protect4_a__parseSelf(spa_ssv_params_protect_dispatch_state_protect4_a_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
spa_ssv_params_protect_dispatch_state_protect4_a__unparseSelf(const spa_ssv_params_protect_dispatch_state_protect4_a_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
protect_dispatch_state_protect4_a__initERD(protect_dispatch_state_protect4_a_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &protect_dispatch_state_protect4_a_ERD;
    instance->_base.parent = parent;
}

static const Error *
protect_dispatch_state_protect4_a__initChoice(protect_dispatch_state_protect4_a_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((eia_state_protect_exchange_id_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        spa_void_protect_dispatch_state_protect4_a__initERD(&instance->spa_void, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        spa_mach_ops_protect_dispatch_state_protect4_a__initERD(&instance->spa_mach_ops, (InfosetBase *)instance);
        break;
    case 2:
        instance->_choice = 3;
        spa_ssv_params_protect_dispatch_state_protect4_a__initERD(&instance->spa_ssv_params, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
protect_dispatch_state_protect4_a__parseSelf(protect_dispatch_state_protect4_a_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        spa_void_protect_dispatch_state_protect4_a__parseSelf(&instance->spa_void, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        spa_mach_ops_protect_dispatch_state_protect4_a__parseSelf(&instance->spa_mach_ops, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        spa_ssv_params_protect_dispatch_state_protect4_a__parseSelf(&instance->spa_ssv_params, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
protect_dispatch_state_protect4_a__unparseSelf(const protect_dispatch_state_protect4_a_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        spa_void_protect_dispatch_state_protect4_a__unparseSelf(&instance->spa_void, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        spa_mach_ops_protect_dispatch_state_protect4_a__unparseSelf(&instance->spa_mach_ops, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        spa_ssv_params_protect_dispatch_state_protect4_a__unparseSelf(&instance->spa_ssv_params, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
eia_state_protect_exchange_id__initERD(eia_state_protect_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eia_state_protect_exchange_id_ERD;
    instance->_base.parent = parent;
    protect_dispatch_state_protect4_a__initERD(&instance->protect_dispatch, (InfosetBase *)instance);
}

static void
eia_state_protect_exchange_id__parseSelf(eia_state_protect_exchange_id_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    protect_dispatch_state_protect4_a__parseSelf(&instance->protect_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
eia_state_protect_exchange_id__unparseSelf(const eia_state_protect_exchange_id_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    protect_dispatch_state_protect4_a__unparseSelf(&instance->protect_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
nii_domain_nfs_impl_id4__initERD(nii_domain_nfs_impl_id4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nii_domain_nfs_impl_id4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
nii_domain_nfs_impl_id4__parseSelf(nii_domain_nfs_impl_id4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
nii_domain_nfs_impl_id4__unparseSelf(const nii_domain_nfs_impl_id4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
nii_name_nfs_impl_id4__initERD(nii_name_nfs_impl_id4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nii_name_nfs_impl_id4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
nii_name_nfs_impl_id4__parseSelf(nii_name_nfs_impl_id4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
nii_name_nfs_impl_id4__unparseSelf(const nii_name_nfs_impl_id4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
nii_date_nfs_impl_id4__initERD(nii_date_nfs_impl_id4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nii_date_nfs_impl_id4_ERD;
    instance->_base.parent = parent;
}

static void
nii_date_nfs_impl_id4__parseSelf(nii_date_nfs_impl_id4_ *instance, PState *pstate)
{
    parse_be_int64(&instance->seconds, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->nseconds, 32, pstate);
    if (pstate->pu.error) return;
}

static void
nii_date_nfs_impl_id4__unparseSelf(const nii_date_nfs_impl_id4_ *instance, UState *ustate)
{
    unparse_be_int64(instance->seconds, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->nseconds, 32, ustate);
    if (ustate->pu.error) return;
}

static void
eia_client_impl_id_exchange_id__initERD(eia_client_impl_id_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eia_client_impl_id_exchange_id_ERD;
    instance->_base.parent = parent;
    nii_domain_nfs_impl_id4__initERD(&instance->nii_domain, (InfosetBase *)instance);
    nii_name_nfs_impl_id4__initERD(&instance->nii_name, (InfosetBase *)instance);
    nii_date_nfs_impl_id4__initERD(&instance->nii_date, (InfosetBase *)instance);
}

static void
eia_client_impl_id_exchange_id__parseSelf(eia_client_impl_id_exchange_id_ *instance, PState *pstate)
{
    nii_domain_nfs_impl_id4__parseSelf(&instance->nii_domain, pstate);
    if (pstate->pu.error) return;
    nii_name_nfs_impl_id4__parseSelf(&instance->nii_name, pstate);
    if (pstate->pu.error) return;
    nii_date_nfs_impl_id4__parseSelf(&instance->nii_date, pstate);
    if (pstate->pu.error) return;
}

static void
eia_client_impl_id_exchange_id__unparseSelf(const eia_client_impl_id_exchange_id_ *instance, UState *ustate)
{
    nii_domain_nfs_impl_id4__unparseSelf(&instance->nii_domain, ustate);
    if (ustate->pu.error) return;
    nii_name_nfs_impl_id4__unparseSelf(&instance->nii_name, ustate);
    if (ustate->pu.error) return;
    nii_date_nfs_impl_id4__unparseSelf(&instance->nii_date, ustate);
    if (ustate->pu.error) return;
}

static void
exchange_id_op_dispatch_nfsv4_ops__initERD(exchange_id_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &exchange_id_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    eia_clientowner_exchange_id__initERD(&instance->eia_clientowner, (InfosetBase *)instance);
    eia_state_protect_exchange_id__initERD(&instance->eia_state_protect, (InfosetBase *)instance);
    eia_client_impl_id_exchange_id__initERD(&instance->eia_client_impl_id, (InfosetBase *)instance);
}

static void
exchange_id_op_dispatch_nfsv4_ops__parseSelf(exchange_id_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    eia_clientowner_exchange_id__parseSelf(&instance->eia_clientowner, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->eia_flags, 32, pstate);
    if (pstate->pu.error) return;
    eia_state_protect_exchange_id__parseSelf(&instance->eia_state_protect, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->exchval, 32, pstate);
    if (pstate->pu.error) return;
    eia_client_impl_id_exchange_id__parseSelf(&instance->eia_client_impl_id, pstate);
    if (pstate->pu.error) return;
}

static void
exchange_id_op_dispatch_nfsv4_ops__unparseSelf(const exchange_id_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    eia_clientowner_exchange_id__unparseSelf(&instance->eia_clientowner, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->eia_flags, 32, ustate);
    if (ustate->pu.error) return;
    eia_state_protect_exchange_id__unparseSelf(&instance->eia_state_protect, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->exchval, 32, ustate);
    if (ustate->pu.error) return;
    eia_client_impl_id_exchange_id__unparseSelf(&instance->eia_client_impl_id, ustate);
    if (ustate->pu.error) return;
}

static void
csa_fore_chan_attrs_create_session__initERD(csa_fore_chan_attrs_create_session_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &csa_fore_chan_attrs_create_session_ERD;
    instance->_base.parent = parent;
}

static void
csa_fore_chan_attrs_create_session__parseSelf(csa_fore_chan_attrs_create_session_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->ca_headerpadsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequestsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize_cached, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxoperations, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequests, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_rdma_ird, 32, pstate);
    if (pstate->pu.error) return;
}

static void
csa_fore_chan_attrs_create_session__unparseSelf(const csa_fore_chan_attrs_create_session_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->ca_headerpadsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequestsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize_cached, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxoperations, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequests, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_rdma_ird, 32, ustate);
    if (ustate->pu.error) return;
}

static void
csa_back_chan_attrs_create_session__initERD(csa_back_chan_attrs_create_session_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &csa_back_chan_attrs_create_session_ERD;
    instance->_base.parent = parent;
}

static void
csa_back_chan_attrs_create_session__parseSelf(csa_back_chan_attrs_create_session_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->ca_headerpadsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequestsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize_cached, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxoperations, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequests, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_rdma_ird, 32, pstate);
    if (pstate->pu.error) return;
}

static void
csa_back_chan_attrs_create_session__unparseSelf(const csa_back_chan_attrs_create_session_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->ca_headerpadsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequestsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize_cached, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxoperations, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequests, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_rdma_ird, 32, ustate);
    if (ustate->pu.error) return;
}

static void
auth_void_callback_dispatch_callback_sec_parms4__initERD(auth_void_callback_dispatch_callback_sec_parms4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &auth_void_callback_dispatch_callback_sec_parms4_ERD;
    instance->_base.parent = parent;
}

static void
auth_void_callback_dispatch_callback_sec_parms4__parseSelf(auth_void_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
auth_void_callback_dispatch_callback_sec_parms4__unparseSelf(const auth_void_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
machinename_authsys_parms__initERD(machinename_authsys_parms_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &machinename_authsys_parms_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
machinename_authsys_parms__parseSelf(machinename_authsys_parms_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
machinename_authsys_parms__unparseSelf(const machinename_authsys_parms_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
gids_authsys_parms__initERD(gids_authsys_parms_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gids_authsys_parms_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
gids_authsys_parms__parseSelf(gids_authsys_parms_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
gids_authsys_parms__unparseSelf(const gids_authsys_parms_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
cbsp_sys_cred_callback_dispatch_callback_sec_parms4__initERD(cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ERD;
    instance->_base.parent = parent;
    machinename_authsys_parms__initERD(&instance->machinename, (InfosetBase *)instance);
    gids_authsys_parms__initERD(&instance->gids, (InfosetBase *)instance);
}

static void
cbsp_sys_cred_callback_dispatch_callback_sec_parms4__parseSelf(cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->authlen, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->stamp, 32, pstate);
    if (pstate->pu.error) return;
    machinename_authsys_parms__parseSelf(&instance->machinename, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->uid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->gid, 32, pstate);
    if (pstate->pu.error) return;
    gids_authsys_parms__parseSelf(&instance->gids, pstate);
    if (pstate->pu.error) return;
}

static void
cbsp_sys_cred_callback_dispatch_callback_sec_parms4__unparseSelf(const cbsp_sys_cred_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->authlen, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->stamp, 32, ustate);
    if (ustate->pu.error) return;
    machinename_authsys_parms__unparseSelf(&instance->machinename, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->uid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->gid, 32, ustate);
    if (ustate->pu.error) return;
    gids_authsys_parms__unparseSelf(&instance->gids, ustate);
    if (ustate->pu.error) return;
}

static void
gcbp_handle_from_server_gss_cb_handles4__initERD(gcbp_handle_from_server_gss_cb_handles4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gcbp_handle_from_server_gss_cb_handles4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
gcbp_handle_from_server_gss_cb_handles4__parseSelf(gcbp_handle_from_server_gss_cb_handles4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
gcbp_handle_from_server_gss_cb_handles4__unparseSelf(const gcbp_handle_from_server_gss_cb_handles4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
gcbp_handle_from_client_gss_cb_handles4__initERD(gcbp_handle_from_client_gss_cb_handles4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gcbp_handle_from_client_gss_cb_handles4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
gcbp_handle_from_client_gss_cb_handles4__parseSelf(gcbp_handle_from_client_gss_cb_handles4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
gcbp_handle_from_client_gss_cb_handles4__unparseSelf(const gcbp_handle_from_client_gss_cb_handles4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
cbsp_gss_handles_callback_dispatch_callback_sec_parms4__initERD(cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ERD;
    instance->_base.parent = parent;
    gcbp_handle_from_server_gss_cb_handles4__initERD(&instance->gcbp_handle_from_server, (InfosetBase *)instance);
    gcbp_handle_from_client_gss_cb_handles4__initERD(&instance->gcbp_handle_from_client, (InfosetBase *)instance);
}

static void
cbsp_gss_handles_callback_dispatch_callback_sec_parms4__parseSelf(cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->gcbp_service, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->gcbp_service >= 1 && instance->gcbp_service <= 3, "gcbp_service", &pstate->pu);
    if (pstate->pu.error) return;
    gcbp_handle_from_server_gss_cb_handles4__parseSelf(&instance->gcbp_handle_from_server, pstate);
    if (pstate->pu.error) return;
    gcbp_handle_from_client_gss_cb_handles4__parseSelf(&instance->gcbp_handle_from_client, pstate);
    if (pstate->pu.error) return;
}

static void
cbsp_gss_handles_callback_dispatch_callback_sec_parms4__unparseSelf(const cbsp_gss_handles_callback_dispatch_callback_sec_parms4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->gcbp_service, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->gcbp_service >= 1 && instance->gcbp_service <= 3, "gcbp_service", &ustate->pu);
    if (ustate->pu.error) return;
    gcbp_handle_from_server_gss_cb_handles4__unparseSelf(&instance->gcbp_handle_from_server, ustate);
    if (ustate->pu.error) return;
    gcbp_handle_from_client_gss_cb_handles4__unparseSelf(&instance->gcbp_handle_from_client, ustate);
    if (ustate->pu.error) return;
}

static void
callback_dispatch_callback_sec_parms4__initERD(callback_dispatch_callback_sec_parms4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &callback_dispatch_callback_sec_parms4_ERD;
    instance->_base.parent = parent;
}

static const Error *
callback_dispatch_callback_sec_parms4__initChoice(callback_dispatch_callback_sec_parms4_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((csa_sec_parms_create_session_ *)instance->_base.parent)->mode;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        auth_void_callback_dispatch_callback_sec_parms4__initERD(&instance->auth_void, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        cbsp_sys_cred_callback_dispatch_callback_sec_parms4__initERD(&instance->cbsp_sys_cred, (InfosetBase *)instance);
        break;
    case 2:
        instance->_choice = 3;
        cbsp_gss_handles_callback_dispatch_callback_sec_parms4__initERD(&instance->cbsp_gss_handles, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
callback_dispatch_callback_sec_parms4__parseSelf(callback_dispatch_callback_sec_parms4_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        auth_void_callback_dispatch_callback_sec_parms4__parseSelf(&instance->auth_void, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        cbsp_sys_cred_callback_dispatch_callback_sec_parms4__parseSelf(&instance->cbsp_sys_cred, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        cbsp_gss_handles_callback_dispatch_callback_sec_parms4__parseSelf(&instance->cbsp_gss_handles, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
callback_dispatch_callback_sec_parms4__unparseSelf(const callback_dispatch_callback_sec_parms4_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        auth_void_callback_dispatch_callback_sec_parms4__unparseSelf(&instance->auth_void, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        cbsp_sys_cred_callback_dispatch_callback_sec_parms4__unparseSelf(&instance->cbsp_sys_cred, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        cbsp_gss_handles_callback_dispatch_callback_sec_parms4__unparseSelf(&instance->cbsp_gss_handles, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
csa_sec_parms_create_session__initERD(csa_sec_parms_create_session_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &csa_sec_parms_create_session_ERD;
    instance->_base.parent = parent;
    callback_dispatch_callback_sec_parms4__initERD(&instance->callback_dispatch, (InfosetBase *)instance);
}

static void
csa_sec_parms_create_session__parseSelf(csa_sec_parms_create_session_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    callback_dispatch_callback_sec_parms4__parseSelf(&instance->callback_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
csa_sec_parms_create_session__unparseSelf(const csa_sec_parms_create_session_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    callback_dispatch_callback_sec_parms4__unparseSelf(&instance->callback_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
create_session_op_dispatch_nfsv4_ops__initERD(create_session_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &create_session_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    csa_fore_chan_attrs_create_session__initERD(&instance->csa_fore_chan_attrs, (InfosetBase *)instance);
    csa_back_chan_attrs_create_session__initERD(&instance->csa_back_chan_attrs, (InfosetBase *)instance);
    csa_sec_parms_create_session__initERD(&instance->csa_sec_parms, (InfosetBase *)instance);
}

static void
create_session_op_dispatch_nfsv4_ops__parseSelf(create_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->csa_clientid, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->csa_sequence, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->csa_flags, 32, pstate);
    if (pstate->pu.error) return;
    csa_fore_chan_attrs_create_session__parseSelf(&instance->csa_fore_chan_attrs, pstate);
    if (pstate->pu.error) return;
    csa_back_chan_attrs_create_session__parseSelf(&instance->csa_back_chan_attrs, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->csa_cb_program, 32, pstate);
    if (pstate->pu.error) return;
    csa_sec_parms_create_session__parseSelf(&instance->csa_sec_parms, pstate);
    if (pstate->pu.error) return;
}

static void
create_session_op_dispatch_nfsv4_ops__unparseSelf(const create_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->csa_clientid, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->csa_sequence, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->csa_flags, 32, ustate);
    if (ustate->pu.error) return;
    csa_fore_chan_attrs_create_session__unparseSelf(&instance->csa_fore_chan_attrs, ustate);
    if (ustate->pu.error) return;
    csa_back_chan_attrs_create_session__unparseSelf(&instance->csa_back_chan_attrs, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->csa_cb_program, 32, ustate);
    if (ustate->pu.error) return;
    csa_sec_parms_create_session__unparseSelf(&instance->csa_sec_parms, ustate);
    if (ustate->pu.error) return;
}

static void
destroy_session_op_dispatch_nfsv4_ops__initERD(destroy_session_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &destroy_session_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    instance->dsa_sessionid.array = instance->_a_dsa_sessionid;
    instance->dsa_sessionid.lengthInBytes = sizeof(instance->_a_dsa_sessionid);
    instance->dsa_sessionid.dynamic = false;
}

static void
destroy_session_op_dispatch_nfsv4_ops__parseSelf(destroy_session_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->dsa_sessionid, pstate);
    if (pstate->pu.error) return;
}

static void
destroy_session_op_dispatch_nfsv4_ops__unparseSelf(const destroy_session_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->dsa_sessionid, ustate);
    if (ustate->pu.error) return;
}

static void
fsa_stateid_free_stateid__initERD(fsa_stateid_free_stateid_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &fsa_stateid_free_stateid_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
fsa_stateid_free_stateid__parseSelf(fsa_stateid_free_stateid_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
fsa_stateid_free_stateid__unparseSelf(const fsa_stateid_free_stateid_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
free_stateid_op_dispatch_nfsv4_ops__initERD(free_stateid_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &free_stateid_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    fsa_stateid_free_stateid__initERD(&instance->fsa_stateid, (InfosetBase *)instance);
}

static void
free_stateid_op_dispatch_nfsv4_ops__parseSelf(free_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    fsa_stateid_free_stateid__parseSelf(&instance->fsa_stateid, pstate);
    if (pstate->pu.error) return;
}

static void
free_stateid_op_dispatch_nfsv4_ops__unparseSelf(const free_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    fsa_stateid_free_stateid__unparseSelf(&instance->fsa_stateid, ustate);
    if (ustate->pu.error) return;
}

static void
get_dir_delegation_op_dispatch_nfsv4_ops__initERD(get_dir_delegation_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &get_dir_delegation_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
get_dir_delegation_op_dispatch_nfsv4_ops__parseSelf(get_dir_delegation_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
get_dir_delegation_op_dispatch_nfsv4_ops__unparseSelf(const get_dir_delegation_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
getdeviceinfo_op_dispatch_nfsv4_ops__initERD(getdeviceinfo_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getdeviceinfo_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
getdeviceinfo_op_dispatch_nfsv4_ops__parseSelf(getdeviceinfo_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
getdeviceinfo_op_dispatch_nfsv4_ops__unparseSelf(const getdeviceinfo_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
getdevicelist_op_dispatch_nfsv4_ops__initERD(getdevicelist_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getdevicelist_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
getdevicelist_op_dispatch_nfsv4_ops__parseSelf(getdevicelist_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
getdevicelist_op_dispatch_nfsv4_ops__unparseSelf(const getdevicelist_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
layoutcommit_op_dispatch_nfsv4_ops__initERD(layoutcommit_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layoutcommit_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
layoutcommit_op_dispatch_nfsv4_ops__parseSelf(layoutcommit_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
layoutcommit_op_dispatch_nfsv4_ops__unparseSelf(const layoutcommit_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
layoutget_op_dispatch_nfsv4_ops__initERD(layoutget_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layoutget_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
layoutget_op_dispatch_nfsv4_ops__parseSelf(layoutget_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
layoutget_op_dispatch_nfsv4_ops__unparseSelf(const layoutget_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
stateid_layoutreturn_file4__initERD(stateid_layoutreturn_file4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_layoutreturn_file4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_layoutreturn_file4__parseSelf(stateid_layoutreturn_file4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_layoutreturn_file4__unparseSelf(const stateid_layoutreturn_file4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
body_layoutreturn_file4__initERD(body_layoutreturn_file4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &body_layoutreturn_file4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
body_layoutreturn_file4__parseSelf(body_layoutreturn_file4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
body_layoutreturn_file4__unparseSelf(const body_layoutreturn_file4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
filelayout_layoutreturn4sw__initERD(filelayout_layoutreturn4sw_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &filelayout_layoutreturn4sw_ERD;
    instance->_base.parent = parent;
    stateid_layoutreturn_file4__initERD(&instance->stateid, (InfosetBase *)instance);
    body_layoutreturn_file4__initERD(&instance->body, (InfosetBase *)instance);
}

static void
filelayout_layoutreturn4sw__parseSelf(filelayout_layoutreturn4sw_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->offset, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->length, 64, pstate);
    if (pstate->pu.error) return;
    stateid_layoutreturn_file4__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    body_layoutreturn_file4__parseSelf(&instance->body, pstate);
    if (pstate->pu.error) return;
}

static void
filelayout_layoutreturn4sw__unparseSelf(const filelayout_layoutreturn4sw_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->offset, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->length, 64, ustate);
    if (ustate->pu.error) return;
    stateid_layoutreturn_file4__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    body_layoutreturn_file4__unparseSelf(&instance->body, ustate);
    if (ustate->pu.error) return;
}

static void
br2_layoutreturn4sw__initERD(br2_layoutreturn4sw_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &br2_layoutreturn4sw_ERD;
    instance->_base.parent = parent;
}

static void
br2_layoutreturn4sw__parseSelf(br2_layoutreturn4sw_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
br2_layoutreturn4sw__unparseSelf(const br2_layoutreturn4sw_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
br3_layoutreturn4sw__initERD(br3_layoutreturn4sw_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &br3_layoutreturn4sw_ERD;
    instance->_base.parent = parent;
}

static void
br3_layoutreturn4sw__parseSelf(br3_layoutreturn4sw_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
br3_layoutreturn4sw__unparseSelf(const br3_layoutreturn4sw_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
lora_layoutreturn_layoutreturn__initERD(lora_layoutreturn_layoutreturn_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lora_layoutreturn_layoutreturn_ERD;
    instance->_base.parent = parent;
    filelayout_layoutreturn4sw__initERD(&instance->filelayout, (InfosetBase *)instance);
    br2_layoutreturn4sw__initERD(&instance->br2, (InfosetBase *)instance);
    br3_layoutreturn4sw__initERD(&instance->br3, (InfosetBase *)instance);
}

static void
lora_layoutreturn_layoutreturn__parseSelf(lora_layoutreturn_layoutreturn_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->return_type, 32, pstate);
    if (pstate->pu.error) return;
    filelayout_layoutreturn4sw__parseSelf(&instance->filelayout, pstate);
    if (pstate->pu.error) return;
    br2_layoutreturn4sw__parseSelf(&instance->br2, pstate);
    if (pstate->pu.error) return;
    br3_layoutreturn4sw__parseSelf(&instance->br3, pstate);
    if (pstate->pu.error) return;
}

static void
lora_layoutreturn_layoutreturn__unparseSelf(const lora_layoutreturn_layoutreturn_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->return_type, 32, ustate);
    if (ustate->pu.error) return;
    filelayout_layoutreturn4sw__unparseSelf(&instance->filelayout, ustate);
    if (ustate->pu.error) return;
    br2_layoutreturn4sw__unparseSelf(&instance->br2, ustate);
    if (ustate->pu.error) return;
    br3_layoutreturn4sw__unparseSelf(&instance->br3, ustate);
    if (ustate->pu.error) return;
}

static void
layoutreturn_op_dispatch_nfsv4_ops__initERD(layoutreturn_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layoutreturn_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    lora_layoutreturn_layoutreturn__initERD(&instance->lora_layoutreturn, (InfosetBase *)instance);
}

static void
layoutreturn_op_dispatch_nfsv4_ops__parseSelf(layoutreturn_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_bool(&instance->lora_reclaim, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->lora_layout_type, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->lora_iomode, 32, pstate);
    if (pstate->pu.error) return;
    lora_layoutreturn_layoutreturn__parseSelf(&instance->lora_layoutreturn, pstate);
    if (pstate->pu.error) return;
}

static void
layoutreturn_op_dispatch_nfsv4_ops__unparseSelf(const layoutreturn_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_bool(instance->lora_reclaim, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->lora_layout_type, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->lora_iomode, 32, ustate);
    if (ustate->pu.error) return;
    lora_layoutreturn_layoutreturn__unparseSelf(&instance->lora_layoutreturn, ustate);
    if (ustate->pu.error) return;
}

static void
secinfo_no_name_op_dispatch_nfsv4_ops__initERD(secinfo_no_name_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &secinfo_no_name_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
secinfo_no_name_op_dispatch_nfsv4_ops__parseSelf(secinfo_no_name_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->args, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->args <= 1, "args", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
secinfo_no_name_op_dispatch_nfsv4_ops__unparseSelf(const secinfo_no_name_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->args, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->args <= 1, "args", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
sequence_op_dispatch_nfsv4_ops__initERD(sequence_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sequence_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    instance->sa_sessionid.array = instance->_a_sa_sessionid;
    instance->sa_sessionid.lengthInBytes = sizeof(instance->_a_sa_sessionid);
    instance->sa_sessionid.dynamic = false;
}

static void
sequence_op_dispatch_nfsv4_ops__parseSelf(sequence_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->sa_sessionid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sa_sequenceid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sa_slotid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sa_highest_slotid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->sa_cachethis, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
}

static void
sequence_op_dispatch_nfsv4_ops__unparseSelf(const sequence_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->sa_sessionid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sa_sequenceid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sa_slotid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sa_highest_slotid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->sa_cachethis, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
}

static void
set_ssv_op_dispatch_nfsv4_ops__initERD(set_ssv_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &set_ssv_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
set_ssv_op_dispatch_nfsv4_ops__parseSelf(set_ssv_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
set_ssv_op_dispatch_nfsv4_ops__unparseSelf(const set_ssv_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
ts_stateids_test_stateid__initERD(ts_stateids_test_stateid_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &ts_stateids_test_stateid_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
ts_stateids_test_stateid__parseSelf(ts_stateids_test_stateid_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
ts_stateids_test_stateid__unparseSelf(const ts_stateids_test_stateid_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__initERD(test_stateid_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 16; i++)
    {
        ts_stateids_test_stateid__initERD(&instance->ts_stateids[i], (InfosetBase *)instance);
    }
}

static void
array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__parseSelf(test_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    const size_t arraySize = array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__getArraySize(instance);
    validate_array_bounds("array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        ts_stateids_test_stateid__parseSelf(&instance->ts_stateids[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__unparseSelf(const test_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    const size_t arraySize = array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__getArraySize(instance);
    validate_array_bounds("array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        ts_stateids_test_stateid__unparseSelf(&instance->ts_stateids[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__getArraySize(const test_stateid_op_dispatch_nfsv4_ops_ *instance)
{
    return instance->numargs;
}

static void
test_stateid_op_dispatch_nfsv4_ops__initERD(test_stateid_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &test_stateid_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
    array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__initERD(instance, parent);
}

static void
test_stateid_op_dispatch_nfsv4_ops__parseSelf(test_stateid_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
test_stateid_op_dispatch_nfsv4_ops__unparseSelf(const test_stateid_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_ts_stateids_test_stateid_test_stateid_op_dispatch_nfsv4_ops__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
want_delegation_op_dispatch_nfsv4_ops__initERD(want_delegation_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &want_delegation_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
want_delegation_op_dispatch_nfsv4_ops__parseSelf(want_delegation_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
want_delegation_op_dispatch_nfsv4_ops__unparseSelf(const want_delegation_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
destroy_clientid_op_dispatch_nfsv4_ops__initERD(destroy_clientid_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &destroy_clientid_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
destroy_clientid_op_dispatch_nfsv4_ops__parseSelf(destroy_clientid_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->dca_clientid, 64, pstate);
    if (pstate->pu.error) return;
}

static void
destroy_clientid_op_dispatch_nfsv4_ops__unparseSelf(const destroy_clientid_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->dca_clientid, 64, ustate);
    if (ustate->pu.error) return;
}

static void
reclaim_complete_op_dispatch_nfsv4_ops__initERD(reclaim_complete_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reclaim_complete_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
reclaim_complete_op_dispatch_nfsv4_ops__parseSelf(reclaim_complete_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    parse_be_bool(&instance->rca_one_fs, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
}

static void
reclaim_complete_op_dispatch_nfsv4_ops__unparseSelf(const reclaim_complete_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    unparse_be_bool(instance->rca_one_fs, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
}

static void
allocate_op_dispatch_nfsv4_ops__initERD(allocate_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &allocate_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
allocate_op_dispatch_nfsv4_ops__parseSelf(allocate_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
allocate_op_dispatch_nfsv4_ops__unparseSelf(const allocate_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
copy_op_dispatch_nfsv4_ops__initERD(copy_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &copy_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
copy_op_dispatch_nfsv4_ops__parseSelf(copy_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
copy_op_dispatch_nfsv4_ops__unparseSelf(const copy_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
copy_notify_op_dispatch_nfsv4_ops__initERD(copy_notify_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &copy_notify_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
copy_notify_op_dispatch_nfsv4_ops__parseSelf(copy_notify_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
copy_notify_op_dispatch_nfsv4_ops__unparseSelf(const copy_notify_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
deallocate_op_dispatch_nfsv4_ops__initERD(deallocate_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &deallocate_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
deallocate_op_dispatch_nfsv4_ops__parseSelf(deallocate_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
deallocate_op_dispatch_nfsv4_ops__unparseSelf(const deallocate_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
io_advise_op_dispatch_nfsv4_ops__initERD(io_advise_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &io_advise_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
io_advise_op_dispatch_nfsv4_ops__parseSelf(io_advise_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
io_advise_op_dispatch_nfsv4_ops__unparseSelf(const io_advise_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
layouterror_op_dispatch_nfsv4_ops__initERD(layouterror_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layouterror_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
layouterror_op_dispatch_nfsv4_ops__parseSelf(layouterror_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
layouterror_op_dispatch_nfsv4_ops__unparseSelf(const layouterror_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
layoutstats_op_dispatch_nfsv4_ops__initERD(layoutstats_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layoutstats_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
layoutstats_op_dispatch_nfsv4_ops__parseSelf(layoutstats_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
layoutstats_op_dispatch_nfsv4_ops__unparseSelf(const layoutstats_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
offload_cancel_op_dispatch_nfsv4_ops__initERD(offload_cancel_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &offload_cancel_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
offload_cancel_op_dispatch_nfsv4_ops__parseSelf(offload_cancel_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
offload_cancel_op_dispatch_nfsv4_ops__unparseSelf(const offload_cancel_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
offload_status_op_dispatch_nfsv4_ops__initERD(offload_status_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &offload_status_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
offload_status_op_dispatch_nfsv4_ops__parseSelf(offload_status_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
offload_status_op_dispatch_nfsv4_ops__unparseSelf(const offload_status_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
read_plus_op_dispatch_nfsv4_ops__initERD(read_plus_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &read_plus_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
read_plus_op_dispatch_nfsv4_ops__parseSelf(read_plus_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
read_plus_op_dispatch_nfsv4_ops__unparseSelf(const read_plus_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
seek_op_dispatch_nfsv4_ops__initERD(seek_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &seek_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
seek_op_dispatch_nfsv4_ops__parseSelf(seek_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
seek_op_dispatch_nfsv4_ops__unparseSelf(const seek_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
write_same_op_dispatch_nfsv4_ops__initERD(write_same_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &write_same_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
write_same_op_dispatch_nfsv4_ops__parseSelf(write_same_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
write_same_op_dispatch_nfsv4_ops__unparseSelf(const write_same_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
clone_op_dispatch_nfsv4_ops__initERD(clone_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &clone_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
clone_op_dispatch_nfsv4_ops__parseSelf(clone_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
clone_op_dispatch_nfsv4_ops__unparseSelf(const clone_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
illegal_op_dispatch_nfsv4_ops__initERD(illegal_op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &illegal_op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static void
illegal_op_dispatch_nfsv4_ops__parseSelf(illegal_op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
illegal_op_dispatch_nfsv4_ops__unparseSelf(const illegal_op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
op_dispatch_nfsv4_ops__initERD(op_dispatch_nfsv4_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &op_dispatch_nfsv4_ops_ERD;
    instance->_base.parent = parent;
}

static const Error *
op_dispatch_nfsv4_ops__initChoice(op_dispatch_nfsv4_ops_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((nfscmd_compound_ *)instance->_base.parent)->opcode;
    switch (key)
    {
    case 3:
        instance->_choice = 1;
        access_op_dispatch_nfsv4_ops__initERD(&instance->access, (InfosetBase *)instance);
        break;
    case 4:
        instance->_choice = 2;
        close_op_dispatch_nfsv4_ops__initERD(&instance->close, (InfosetBase *)instance);
        break;
    case 5:
        instance->_choice = 3;
        commit_op_dispatch_nfsv4_ops__initERD(&instance->commit, (InfosetBase *)instance);
        break;
    case 6:
        instance->_choice = 4;
        create_op_dispatch_nfsv4_ops__initERD(&instance->create, (InfosetBase *)instance);
        break;
    case 7:
        instance->_choice = 5;
        delegpurge_op_dispatch_nfsv4_ops__initERD(&instance->delegpurge, (InfosetBase *)instance);
        break;
    case 8:
        instance->_choice = 6;
        delegreturn_op_dispatch_nfsv4_ops__initERD(&instance->delegreturn, (InfosetBase *)instance);
        break;
    case 9:
        instance->_choice = 7;
        getattr_op_dispatch_nfsv4_ops__initERD(&instance->getattr, (InfosetBase *)instance);
        break;
    case 10:
        instance->_choice = 8;
        getfh_op_dispatch_nfsv4_ops__initERD(&instance->getfh, (InfosetBase *)instance);
        break;
    case 11:
        instance->_choice = 9;
        link_op_dispatch_nfsv4_ops__initERD(&instance->link, (InfosetBase *)instance);
        break;
    case 12:
        instance->_choice = 10;
        lockt_op_dispatch_nfsv4_ops__initERD(&instance->lockt, (InfosetBase *)instance);
        break;
    case 13:
        instance->_choice = 11;
        locku_op_dispatch_nfsv4_ops__initERD(&instance->locku, (InfosetBase *)instance);
        break;
    case 14:
        instance->_choice = 12;
        lock_op_dispatch_nfsv4_ops__initERD(&instance->lock, (InfosetBase *)instance);
        break;
    case 15:
        instance->_choice = 13;
        lookup_op_dispatch_nfsv4_ops__initERD(&instance->lookup, (InfosetBase *)instance);
        break;
    case 16:
        instance->_choice = 14;
        lookupp_op_dispatch_nfsv4_ops__initERD(&instance->lookupp, (InfosetBase *)instance);
        break;
    case 17:
        instance->_choice = 15;
        nverify_op_dispatch_nfsv4_ops__initERD(&instance->nverify, (InfosetBase *)instance);
        break;
    case 18:
        instance->_choice = 16;
        open_op_dispatch_nfsv4_ops__initERD(&instance->open, (InfosetBase *)instance);
        break;
    case 19:
        instance->_choice = 17;
        openattr_op_dispatch_nfsv4_ops__initERD(&instance->openattr, (InfosetBase *)instance);
        break;
    case 20:
        instance->_choice = 18;
        open_confirm_op_dispatch_nfsv4_ops__initERD(&instance->open_confirm, (InfosetBase *)instance);
        break;
    case 21:
        instance->_choice = 19;
        open_downgrade_op_dispatch_nfsv4_ops__initERD(&instance->open_downgrade, (InfosetBase *)instance);
        break;
    case 22:
        instance->_choice = 20;
        putfh_op_dispatch_nfsv4_ops__initERD(&instance->putfh, (InfosetBase *)instance);
        break;
    case 23:
        instance->_choice = 21;
        putpubfh_op_dispatch_nfsv4_ops__initERD(&instance->putpubfh, (InfosetBase *)instance);
        break;
    case 24:
        instance->_choice = 22;
        putrootfh_op_dispatch_nfsv4_ops__initERD(&instance->putrootfh, (InfosetBase *)instance);
        break;
    case 25:
        instance->_choice = 23;
        read_op_dispatch_nfsv4_ops__initERD(&instance->read, (InfosetBase *)instance);
        break;
    case 26:
        instance->_choice = 24;
        readdir_op_dispatch_nfsv4_ops__initERD(&instance->readdir, (InfosetBase *)instance);
        break;
    case 27:
        instance->_choice = 25;
        readlink_op_dispatch_nfsv4_ops__initERD(&instance->readlink, (InfosetBase *)instance);
        break;
    case 28:
        instance->_choice = 26;
        remove_op_dispatch_nfsv4_ops__initERD(&instance->remove, (InfosetBase *)instance);
        break;
    case 29:
        instance->_choice = 27;
        rename_op_dispatch_nfsv4_ops__initERD(&instance->rename, (InfosetBase *)instance);
        break;
    case 30:
        instance->_choice = 28;
        renew_op_dispatch_nfsv4_ops__initERD(&instance->renew, (InfosetBase *)instance);
        break;
    case 31:
        instance->_choice = 29;
        restorefh_op_dispatch_nfsv4_ops__initERD(&instance->restorefh, (InfosetBase *)instance);
        break;
    case 32:
        instance->_choice = 30;
        savefh_op_dispatch_nfsv4_ops__initERD(&instance->savefh, (InfosetBase *)instance);
        break;
    case 33:
        instance->_choice = 31;
        secinfo_op_dispatch_nfsv4_ops__initERD(&instance->secinfo, (InfosetBase *)instance);
        break;
    case 34:
        instance->_choice = 32;
        setattr_op_dispatch_nfsv4_ops__initERD(&instance->setattr, (InfosetBase *)instance);
        break;
    case 35:
        instance->_choice = 33;
        setclientid_op_dispatch_nfsv4_ops__initERD(&instance->setclientid, (InfosetBase *)instance);
        break;
    case 36:
        instance->_choice = 34;
        setclientid_confirm_op_dispatch_nfsv4_ops__initERD(&instance->setclientid_confirm, (InfosetBase *)instance);
        break;
    case 37:
        instance->_choice = 35;
        verify_op_dispatch_nfsv4_ops__initERD(&instance->verify, (InfosetBase *)instance);
        break;
    case 38:
        instance->_choice = 36;
        write_op_dispatch_nfsv4_ops__initERD(&instance->write, (InfosetBase *)instance);
        break;
    case 39:
        instance->_choice = 37;
        release_lockowner_op_dispatch_nfsv4_ops__initERD(&instance->release_lockowner, (InfosetBase *)instance);
        break;
    case 40:
        instance->_choice = 38;
        backchannel_ctl_op_dispatch_nfsv4_ops__initERD(&instance->backchannel_ctl, (InfosetBase *)instance);
        break;
    case 41:
        instance->_choice = 39;
        bind_conn_to_session_op_dispatch_nfsv4_ops__initERD(&instance->bind_conn_to_session, (InfosetBase *)instance);
        break;
    case 42:
        instance->_choice = 40;
        exchange_id_op_dispatch_nfsv4_ops__initERD(&instance->exchange_id, (InfosetBase *)instance);
        break;
    case 43:
        instance->_choice = 41;
        create_session_op_dispatch_nfsv4_ops__initERD(&instance->create_session, (InfosetBase *)instance);
        break;
    case 44:
        instance->_choice = 42;
        destroy_session_op_dispatch_nfsv4_ops__initERD(&instance->destroy_session, (InfosetBase *)instance);
        break;
    case 45:
        instance->_choice = 43;
        free_stateid_op_dispatch_nfsv4_ops__initERD(&instance->free_stateid, (InfosetBase *)instance);
        break;
    case 46:
        instance->_choice = 44;
        get_dir_delegation_op_dispatch_nfsv4_ops__initERD(&instance->get_dir_delegation, (InfosetBase *)instance);
        break;
    case 47:
        instance->_choice = 45;
        getdeviceinfo_op_dispatch_nfsv4_ops__initERD(&instance->getdeviceinfo, (InfosetBase *)instance);
        break;
    case 48:
        instance->_choice = 46;
        getdevicelist_op_dispatch_nfsv4_ops__initERD(&instance->getdevicelist, (InfosetBase *)instance);
        break;
    case 49:
        instance->_choice = 47;
        layoutcommit_op_dispatch_nfsv4_ops__initERD(&instance->layoutcommit, (InfosetBase *)instance);
        break;
    case 50:
        instance->_choice = 48;
        layoutget_op_dispatch_nfsv4_ops__initERD(&instance->layoutget, (InfosetBase *)instance);
        break;
    case 51:
        instance->_choice = 49;
        layoutreturn_op_dispatch_nfsv4_ops__initERD(&instance->layoutreturn, (InfosetBase *)instance);
        break;
    case 52:
        instance->_choice = 50;
        secinfo_no_name_op_dispatch_nfsv4_ops__initERD(&instance->secinfo_no_name, (InfosetBase *)instance);
        break;
    case 53:
        instance->_choice = 51;
        sequence_op_dispatch_nfsv4_ops__initERD(&instance->sequence, (InfosetBase *)instance);
        break;
    case 54:
        instance->_choice = 52;
        set_ssv_op_dispatch_nfsv4_ops__initERD(&instance->set_ssv, (InfosetBase *)instance);
        break;
    case 55:
        instance->_choice = 53;
        test_stateid_op_dispatch_nfsv4_ops__initERD(&instance->test_stateid, (InfosetBase *)instance);
        break;
    case 56:
        instance->_choice = 54;
        want_delegation_op_dispatch_nfsv4_ops__initERD(&instance->want_delegation, (InfosetBase *)instance);
        break;
    case 57:
        instance->_choice = 55;
        destroy_clientid_op_dispatch_nfsv4_ops__initERD(&instance->destroy_clientid, (InfosetBase *)instance);
        break;
    case 58:
        instance->_choice = 56;
        reclaim_complete_op_dispatch_nfsv4_ops__initERD(&instance->reclaim_complete, (InfosetBase *)instance);
        break;
    case 59:
        instance->_choice = 57;
        allocate_op_dispatch_nfsv4_ops__initERD(&instance->allocate, (InfosetBase *)instance);
        break;
    case 60:
        instance->_choice = 58;
        copy_op_dispatch_nfsv4_ops__initERD(&instance->copy, (InfosetBase *)instance);
        break;
    case 61:
        instance->_choice = 59;
        copy_notify_op_dispatch_nfsv4_ops__initERD(&instance->copy_notify, (InfosetBase *)instance);
        break;
    case 62:
        instance->_choice = 60;
        deallocate_op_dispatch_nfsv4_ops__initERD(&instance->deallocate, (InfosetBase *)instance);
        break;
    case 63:
        instance->_choice = 61;
        io_advise_op_dispatch_nfsv4_ops__initERD(&instance->io_advise, (InfosetBase *)instance);
        break;
    case 64:
        instance->_choice = 62;
        layouterror_op_dispatch_nfsv4_ops__initERD(&instance->layouterror, (InfosetBase *)instance);
        break;
    case 65:
        instance->_choice = 63;
        layoutstats_op_dispatch_nfsv4_ops__initERD(&instance->layoutstats, (InfosetBase *)instance);
        break;
    case 66:
        instance->_choice = 64;
        offload_cancel_op_dispatch_nfsv4_ops__initERD(&instance->offload_cancel, (InfosetBase *)instance);
        break;
    case 67:
        instance->_choice = 65;
        offload_status_op_dispatch_nfsv4_ops__initERD(&instance->offload_status, (InfosetBase *)instance);
        break;
    case 68:
        instance->_choice = 66;
        read_plus_op_dispatch_nfsv4_ops__initERD(&instance->read_plus, (InfosetBase *)instance);
        break;
    case 69:
        instance->_choice = 67;
        seek_op_dispatch_nfsv4_ops__initERD(&instance->seek, (InfosetBase *)instance);
        break;
    case 70:
        instance->_choice = 68;
        write_same_op_dispatch_nfsv4_ops__initERD(&instance->write_same, (InfosetBase *)instance);
        break;
    case 71:
        instance->_choice = 69;
        clone_op_dispatch_nfsv4_ops__initERD(&instance->clone, (InfosetBase *)instance);
        break;
    case 10044:
        instance->_choice = 70;
        illegal_op_dispatch_nfsv4_ops__initERD(&instance->illegal, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
op_dispatch_nfsv4_ops__parseSelf(op_dispatch_nfsv4_ops_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        access_op_dispatch_nfsv4_ops__parseSelf(&instance->access, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        close_op_dispatch_nfsv4_ops__parseSelf(&instance->close, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        commit_op_dispatch_nfsv4_ops__parseSelf(&instance->commit, pstate);
        if (pstate->pu.error) return;
        break;
    case 4:
        create_op_dispatch_nfsv4_ops__parseSelf(&instance->create, pstate);
        if (pstate->pu.error) return;
        break;
    case 5:
        delegpurge_op_dispatch_nfsv4_ops__parseSelf(&instance->delegpurge, pstate);
        if (pstate->pu.error) return;
        break;
    case 6:
        delegreturn_op_dispatch_nfsv4_ops__parseSelf(&instance->delegreturn, pstate);
        if (pstate->pu.error) return;
        break;
    case 7:
        getattr_op_dispatch_nfsv4_ops__parseSelf(&instance->getattr, pstate);
        if (pstate->pu.error) return;
        break;
    case 8:
        getfh_op_dispatch_nfsv4_ops__parseSelf(&instance->getfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 9:
        link_op_dispatch_nfsv4_ops__parseSelf(&instance->link, pstate);
        if (pstate->pu.error) return;
        break;
    case 10:
        lockt_op_dispatch_nfsv4_ops__parseSelf(&instance->lockt, pstate);
        if (pstate->pu.error) return;
        break;
    case 11:
        locku_op_dispatch_nfsv4_ops__parseSelf(&instance->locku, pstate);
        if (pstate->pu.error) return;
        break;
    case 12:
        lock_op_dispatch_nfsv4_ops__parseSelf(&instance->lock, pstate);
        if (pstate->pu.error) return;
        break;
    case 13:
        lookup_op_dispatch_nfsv4_ops__parseSelf(&instance->lookup, pstate);
        if (pstate->pu.error) return;
        break;
    case 14:
        lookupp_op_dispatch_nfsv4_ops__parseSelf(&instance->lookupp, pstate);
        if (pstate->pu.error) return;
        break;
    case 15:
        nverify_op_dispatch_nfsv4_ops__parseSelf(&instance->nverify, pstate);
        if (pstate->pu.error) return;
        break;
    case 16:
        open_op_dispatch_nfsv4_ops__parseSelf(&instance->open, pstate);
        if (pstate->pu.error) return;
        break;
    case 17:
        openattr_op_dispatch_nfsv4_ops__parseSelf(&instance->openattr, pstate);
        if (pstate->pu.error) return;
        break;
    case 18:
        open_confirm_op_dispatch_nfsv4_ops__parseSelf(&instance->open_confirm, pstate);
        if (pstate->pu.error) return;
        break;
    case 19:
        open_downgrade_op_dispatch_nfsv4_ops__parseSelf(&instance->open_downgrade, pstate);
        if (pstate->pu.error) return;
        break;
    case 20:
        putfh_op_dispatch_nfsv4_ops__parseSelf(&instance->putfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 21:
        putpubfh_op_dispatch_nfsv4_ops__parseSelf(&instance->putpubfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 22:
        putrootfh_op_dispatch_nfsv4_ops__parseSelf(&instance->putrootfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 23:
        read_op_dispatch_nfsv4_ops__parseSelf(&instance->read, pstate);
        if (pstate->pu.error) return;
        break;
    case 24:
        readdir_op_dispatch_nfsv4_ops__parseSelf(&instance->readdir, pstate);
        if (pstate->pu.error) return;
        break;
    case 25:
        readlink_op_dispatch_nfsv4_ops__parseSelf(&instance->readlink, pstate);
        if (pstate->pu.error) return;
        break;
    case 26:
        remove_op_dispatch_nfsv4_ops__parseSelf(&instance->remove, pstate);
        if (pstate->pu.error) return;
        break;
    case 27:
        rename_op_dispatch_nfsv4_ops__parseSelf(&instance->rename, pstate);
        if (pstate->pu.error) return;
        break;
    case 28:
        renew_op_dispatch_nfsv4_ops__parseSelf(&instance->renew, pstate);
        if (pstate->pu.error) return;
        break;
    case 29:
        restorefh_op_dispatch_nfsv4_ops__parseSelf(&instance->restorefh, pstate);
        if (pstate->pu.error) return;
        break;
    case 30:
        savefh_op_dispatch_nfsv4_ops__parseSelf(&instance->savefh, pstate);
        if (pstate->pu.error) return;
        break;
    case 31:
        secinfo_op_dispatch_nfsv4_ops__parseSelf(&instance->secinfo, pstate);
        if (pstate->pu.error) return;
        break;
    case 32:
        setattr_op_dispatch_nfsv4_ops__parseSelf(&instance->setattr, pstate);
        if (pstate->pu.error) return;
        break;
    case 33:
        setclientid_op_dispatch_nfsv4_ops__parseSelf(&instance->setclientid, pstate);
        if (pstate->pu.error) return;
        break;
    case 34:
        setclientid_confirm_op_dispatch_nfsv4_ops__parseSelf(&instance->setclientid_confirm, pstate);
        if (pstate->pu.error) return;
        break;
    case 35:
        verify_op_dispatch_nfsv4_ops__parseSelf(&instance->verify, pstate);
        if (pstate->pu.error) return;
        break;
    case 36:
        write_op_dispatch_nfsv4_ops__parseSelf(&instance->write, pstate);
        if (pstate->pu.error) return;
        break;
    case 37:
        release_lockowner_op_dispatch_nfsv4_ops__parseSelf(&instance->release_lockowner, pstate);
        if (pstate->pu.error) return;
        break;
    case 38:
        backchannel_ctl_op_dispatch_nfsv4_ops__parseSelf(&instance->backchannel_ctl, pstate);
        if (pstate->pu.error) return;
        break;
    case 39:
        bind_conn_to_session_op_dispatch_nfsv4_ops__parseSelf(&instance->bind_conn_to_session, pstate);
        if (pstate->pu.error) return;
        break;
    case 40:
        exchange_id_op_dispatch_nfsv4_ops__parseSelf(&instance->exchange_id, pstate);
        if (pstate->pu.error) return;
        break;
    case 41:
        create_session_op_dispatch_nfsv4_ops__parseSelf(&instance->create_session, pstate);
        if (pstate->pu.error) return;
        break;
    case 42:
        destroy_session_op_dispatch_nfsv4_ops__parseSelf(&instance->destroy_session, pstate);
        if (pstate->pu.error) return;
        break;
    case 43:
        free_stateid_op_dispatch_nfsv4_ops__parseSelf(&instance->free_stateid, pstate);
        if (pstate->pu.error) return;
        break;
    case 44:
        get_dir_delegation_op_dispatch_nfsv4_ops__parseSelf(&instance->get_dir_delegation, pstate);
        if (pstate->pu.error) return;
        break;
    case 45:
        getdeviceinfo_op_dispatch_nfsv4_ops__parseSelf(&instance->getdeviceinfo, pstate);
        if (pstate->pu.error) return;
        break;
    case 46:
        getdevicelist_op_dispatch_nfsv4_ops__parseSelf(&instance->getdevicelist, pstate);
        if (pstate->pu.error) return;
        break;
    case 47:
        layoutcommit_op_dispatch_nfsv4_ops__parseSelf(&instance->layoutcommit, pstate);
        if (pstate->pu.error) return;
        break;
    case 48:
        layoutget_op_dispatch_nfsv4_ops__parseSelf(&instance->layoutget, pstate);
        if (pstate->pu.error) return;
        break;
    case 49:
        layoutreturn_op_dispatch_nfsv4_ops__parseSelf(&instance->layoutreturn, pstate);
        if (pstate->pu.error) return;
        break;
    case 50:
        secinfo_no_name_op_dispatch_nfsv4_ops__parseSelf(&instance->secinfo_no_name, pstate);
        if (pstate->pu.error) return;
        break;
    case 51:
        sequence_op_dispatch_nfsv4_ops__parseSelf(&instance->sequence, pstate);
        if (pstate->pu.error) return;
        break;
    case 52:
        set_ssv_op_dispatch_nfsv4_ops__parseSelf(&instance->set_ssv, pstate);
        if (pstate->pu.error) return;
        break;
    case 53:
        test_stateid_op_dispatch_nfsv4_ops__parseSelf(&instance->test_stateid, pstate);
        if (pstate->pu.error) return;
        break;
    case 54:
        want_delegation_op_dispatch_nfsv4_ops__parseSelf(&instance->want_delegation, pstate);
        if (pstate->pu.error) return;
        break;
    case 55:
        destroy_clientid_op_dispatch_nfsv4_ops__parseSelf(&instance->destroy_clientid, pstate);
        if (pstate->pu.error) return;
        break;
    case 56:
        reclaim_complete_op_dispatch_nfsv4_ops__parseSelf(&instance->reclaim_complete, pstate);
        if (pstate->pu.error) return;
        break;
    case 57:
        allocate_op_dispatch_nfsv4_ops__parseSelf(&instance->allocate, pstate);
        if (pstate->pu.error) return;
        break;
    case 58:
        copy_op_dispatch_nfsv4_ops__parseSelf(&instance->copy, pstate);
        if (pstate->pu.error) return;
        break;
    case 59:
        copy_notify_op_dispatch_nfsv4_ops__parseSelf(&instance->copy_notify, pstate);
        if (pstate->pu.error) return;
        break;
    case 60:
        deallocate_op_dispatch_nfsv4_ops__parseSelf(&instance->deallocate, pstate);
        if (pstate->pu.error) return;
        break;
    case 61:
        io_advise_op_dispatch_nfsv4_ops__parseSelf(&instance->io_advise, pstate);
        if (pstate->pu.error) return;
        break;
    case 62:
        layouterror_op_dispatch_nfsv4_ops__parseSelf(&instance->layouterror, pstate);
        if (pstate->pu.error) return;
        break;
    case 63:
        layoutstats_op_dispatch_nfsv4_ops__parseSelf(&instance->layoutstats, pstate);
        if (pstate->pu.error) return;
        break;
    case 64:
        offload_cancel_op_dispatch_nfsv4_ops__parseSelf(&instance->offload_cancel, pstate);
        if (pstate->pu.error) return;
        break;
    case 65:
        offload_status_op_dispatch_nfsv4_ops__parseSelf(&instance->offload_status, pstate);
        if (pstate->pu.error) return;
        break;
    case 66:
        read_plus_op_dispatch_nfsv4_ops__parseSelf(&instance->read_plus, pstate);
        if (pstate->pu.error) return;
        break;
    case 67:
        seek_op_dispatch_nfsv4_ops__parseSelf(&instance->seek, pstate);
        if (pstate->pu.error) return;
        break;
    case 68:
        write_same_op_dispatch_nfsv4_ops__parseSelf(&instance->write_same, pstate);
        if (pstate->pu.error) return;
        break;
    case 69:
        clone_op_dispatch_nfsv4_ops__parseSelf(&instance->clone, pstate);
        if (pstate->pu.error) return;
        break;
    case 70:
        illegal_op_dispatch_nfsv4_ops__parseSelf(&instance->illegal, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
op_dispatch_nfsv4_ops__unparseSelf(const op_dispatch_nfsv4_ops_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        access_op_dispatch_nfsv4_ops__unparseSelf(&instance->access, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        close_op_dispatch_nfsv4_ops__unparseSelf(&instance->close, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        commit_op_dispatch_nfsv4_ops__unparseSelf(&instance->commit, ustate);
        if (ustate->pu.error) return;
        break;
    case 4:
        create_op_dispatch_nfsv4_ops__unparseSelf(&instance->create, ustate);
        if (ustate->pu.error) return;
        break;
    case 5:
        delegpurge_op_dispatch_nfsv4_ops__unparseSelf(&instance->delegpurge, ustate);
        if (ustate->pu.error) return;
        break;
    case 6:
        delegreturn_op_dispatch_nfsv4_ops__unparseSelf(&instance->delegreturn, ustate);
        if (ustate->pu.error) return;
        break;
    case 7:
        getattr_op_dispatch_nfsv4_ops__unparseSelf(&instance->getattr, ustate);
        if (ustate->pu.error) return;
        break;
    case 8:
        getfh_op_dispatch_nfsv4_ops__unparseSelf(&instance->getfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 9:
        link_op_dispatch_nfsv4_ops__unparseSelf(&instance->link, ustate);
        if (ustate->pu.error) return;
        break;
    case 10:
        lockt_op_dispatch_nfsv4_ops__unparseSelf(&instance->lockt, ustate);
        if (ustate->pu.error) return;
        break;
    case 11:
        locku_op_dispatch_nfsv4_ops__unparseSelf(&instance->locku, ustate);
        if (ustate->pu.error) return;
        break;
    case 12:
        lock_op_dispatch_nfsv4_ops__unparseSelf(&instance->lock, ustate);
        if (ustate->pu.error) return;
        break;
    case 13:
        lookup_op_dispatch_nfsv4_ops__unparseSelf(&instance->lookup, ustate);
        if (ustate->pu.error) return;
        break;
    case 14:
        lookupp_op_dispatch_nfsv4_ops__unparseSelf(&instance->lookupp, ustate);
        if (ustate->pu.error) return;
        break;
    case 15:
        nverify_op_dispatch_nfsv4_ops__unparseSelf(&instance->nverify, ustate);
        if (ustate->pu.error) return;
        break;
    case 16:
        open_op_dispatch_nfsv4_ops__unparseSelf(&instance->open, ustate);
        if (ustate->pu.error) return;
        break;
    case 17:
        openattr_op_dispatch_nfsv4_ops__unparseSelf(&instance->openattr, ustate);
        if (ustate->pu.error) return;
        break;
    case 18:
        open_confirm_op_dispatch_nfsv4_ops__unparseSelf(&instance->open_confirm, ustate);
        if (ustate->pu.error) return;
        break;
    case 19:
        open_downgrade_op_dispatch_nfsv4_ops__unparseSelf(&instance->open_downgrade, ustate);
        if (ustate->pu.error) return;
        break;
    case 20:
        putfh_op_dispatch_nfsv4_ops__unparseSelf(&instance->putfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 21:
        putpubfh_op_dispatch_nfsv4_ops__unparseSelf(&instance->putpubfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 22:
        putrootfh_op_dispatch_nfsv4_ops__unparseSelf(&instance->putrootfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 23:
        read_op_dispatch_nfsv4_ops__unparseSelf(&instance->read, ustate);
        if (ustate->pu.error) return;
        break;
    case 24:
        readdir_op_dispatch_nfsv4_ops__unparseSelf(&instance->readdir, ustate);
        if (ustate->pu.error) return;
        break;
    case 25:
        readlink_op_dispatch_nfsv4_ops__unparseSelf(&instance->readlink, ustate);
        if (ustate->pu.error) return;
        break;
    case 26:
        remove_op_dispatch_nfsv4_ops__unparseSelf(&instance->remove, ustate);
        if (ustate->pu.error) return;
        break;
    case 27:
        rename_op_dispatch_nfsv4_ops__unparseSelf(&instance->rename, ustate);
        if (ustate->pu.error) return;
        break;
    case 28:
        renew_op_dispatch_nfsv4_ops__unparseSelf(&instance->renew, ustate);
        if (ustate->pu.error) return;
        break;
    case 29:
        restorefh_op_dispatch_nfsv4_ops__unparseSelf(&instance->restorefh, ustate);
        if (ustate->pu.error) return;
        break;
    case 30:
        savefh_op_dispatch_nfsv4_ops__unparseSelf(&instance->savefh, ustate);
        if (ustate->pu.error) return;
        break;
    case 31:
        secinfo_op_dispatch_nfsv4_ops__unparseSelf(&instance->secinfo, ustate);
        if (ustate->pu.error) return;
        break;
    case 32:
        setattr_op_dispatch_nfsv4_ops__unparseSelf(&instance->setattr, ustate);
        if (ustate->pu.error) return;
        break;
    case 33:
        setclientid_op_dispatch_nfsv4_ops__unparseSelf(&instance->setclientid, ustate);
        if (ustate->pu.error) return;
        break;
    case 34:
        setclientid_confirm_op_dispatch_nfsv4_ops__unparseSelf(&instance->setclientid_confirm, ustate);
        if (ustate->pu.error) return;
        break;
    case 35:
        verify_op_dispatch_nfsv4_ops__unparseSelf(&instance->verify, ustate);
        if (ustate->pu.error) return;
        break;
    case 36:
        write_op_dispatch_nfsv4_ops__unparseSelf(&instance->write, ustate);
        if (ustate->pu.error) return;
        break;
    case 37:
        release_lockowner_op_dispatch_nfsv4_ops__unparseSelf(&instance->release_lockowner, ustate);
        if (ustate->pu.error) return;
        break;
    case 38:
        backchannel_ctl_op_dispatch_nfsv4_ops__unparseSelf(&instance->backchannel_ctl, ustate);
        if (ustate->pu.error) return;
        break;
    case 39:
        bind_conn_to_session_op_dispatch_nfsv4_ops__unparseSelf(&instance->bind_conn_to_session, ustate);
        if (ustate->pu.error) return;
        break;
    case 40:
        exchange_id_op_dispatch_nfsv4_ops__unparseSelf(&instance->exchange_id, ustate);
        if (ustate->pu.error) return;
        break;
    case 41:
        create_session_op_dispatch_nfsv4_ops__unparseSelf(&instance->create_session, ustate);
        if (ustate->pu.error) return;
        break;
    case 42:
        destroy_session_op_dispatch_nfsv4_ops__unparseSelf(&instance->destroy_session, ustate);
        if (ustate->pu.error) return;
        break;
    case 43:
        free_stateid_op_dispatch_nfsv4_ops__unparseSelf(&instance->free_stateid, ustate);
        if (ustate->pu.error) return;
        break;
    case 44:
        get_dir_delegation_op_dispatch_nfsv4_ops__unparseSelf(&instance->get_dir_delegation, ustate);
        if (ustate->pu.error) return;
        break;
    case 45:
        getdeviceinfo_op_dispatch_nfsv4_ops__unparseSelf(&instance->getdeviceinfo, ustate);
        if (ustate->pu.error) return;
        break;
    case 46:
        getdevicelist_op_dispatch_nfsv4_ops__unparseSelf(&instance->getdevicelist, ustate);
        if (ustate->pu.error) return;
        break;
    case 47:
        layoutcommit_op_dispatch_nfsv4_ops__unparseSelf(&instance->layoutcommit, ustate);
        if (ustate->pu.error) return;
        break;
    case 48:
        layoutget_op_dispatch_nfsv4_ops__unparseSelf(&instance->layoutget, ustate);
        if (ustate->pu.error) return;
        break;
    case 49:
        layoutreturn_op_dispatch_nfsv4_ops__unparseSelf(&instance->layoutreturn, ustate);
        if (ustate->pu.error) return;
        break;
    case 50:
        secinfo_no_name_op_dispatch_nfsv4_ops__unparseSelf(&instance->secinfo_no_name, ustate);
        if (ustate->pu.error) return;
        break;
    case 51:
        sequence_op_dispatch_nfsv4_ops__unparseSelf(&instance->sequence, ustate);
        if (ustate->pu.error) return;
        break;
    case 52:
        set_ssv_op_dispatch_nfsv4_ops__unparseSelf(&instance->set_ssv, ustate);
        if (ustate->pu.error) return;
        break;
    case 53:
        test_stateid_op_dispatch_nfsv4_ops__unparseSelf(&instance->test_stateid, ustate);
        if (ustate->pu.error) return;
        break;
    case 54:
        want_delegation_op_dispatch_nfsv4_ops__unparseSelf(&instance->want_delegation, ustate);
        if (ustate->pu.error) return;
        break;
    case 55:
        destroy_clientid_op_dispatch_nfsv4_ops__unparseSelf(&instance->destroy_clientid, ustate);
        if (ustate->pu.error) return;
        break;
    case 56:
        reclaim_complete_op_dispatch_nfsv4_ops__unparseSelf(&instance->reclaim_complete, ustate);
        if (ustate->pu.error) return;
        break;
    case 57:
        allocate_op_dispatch_nfsv4_ops__unparseSelf(&instance->allocate, ustate);
        if (ustate->pu.error) return;
        break;
    case 58:
        copy_op_dispatch_nfsv4_ops__unparseSelf(&instance->copy, ustate);
        if (ustate->pu.error) return;
        break;
    case 59:
        copy_notify_op_dispatch_nfsv4_ops__unparseSelf(&instance->copy_notify, ustate);
        if (ustate->pu.error) return;
        break;
    case 60:
        deallocate_op_dispatch_nfsv4_ops__unparseSelf(&instance->deallocate, ustate);
        if (ustate->pu.error) return;
        break;
    case 61:
        io_advise_op_dispatch_nfsv4_ops__unparseSelf(&instance->io_advise, ustate);
        if (ustate->pu.error) return;
        break;
    case 62:
        layouterror_op_dispatch_nfsv4_ops__unparseSelf(&instance->layouterror, ustate);
        if (ustate->pu.error) return;
        break;
    case 63:
        layoutstats_op_dispatch_nfsv4_ops__unparseSelf(&instance->layoutstats, ustate);
        if (ustate->pu.error) return;
        break;
    case 64:
        offload_cancel_op_dispatch_nfsv4_ops__unparseSelf(&instance->offload_cancel, ustate);
        if (ustate->pu.error) return;
        break;
    case 65:
        offload_status_op_dispatch_nfsv4_ops__unparseSelf(&instance->offload_status, ustate);
        if (ustate->pu.error) return;
        break;
    case 66:
        read_plus_op_dispatch_nfsv4_ops__unparseSelf(&instance->read_plus, ustate);
        if (ustate->pu.error) return;
        break;
    case 67:
        seek_op_dispatch_nfsv4_ops__unparseSelf(&instance->seek, ustate);
        if (ustate->pu.error) return;
        break;
    case 68:
        write_same_op_dispatch_nfsv4_ops__unparseSelf(&instance->write_same, ustate);
        if (ustate->pu.error) return;
        break;
    case 69:
        clone_op_dispatch_nfsv4_ops__unparseSelf(&instance->clone, ustate);
        if (ustate->pu.error) return;
        break;
    case 70:
        illegal_op_dispatch_nfsv4_ops__unparseSelf(&instance->illegal, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
nfscmd_compound__initERD(nfscmd_compound_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nfscmd_compound_ERD;
    instance->_base.parent = parent;
    op_dispatch_nfsv4_ops__initERD(&instance->op_dispatch, (InfosetBase *)instance);
}

static void
nfscmd_compound__parseSelf(nfscmd_compound_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->opcode, 32, pstate);
    if (pstate->pu.error) return;
    op_dispatch_nfsv4_ops__parseSelf(&instance->op_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
nfscmd_compound__unparseSelf(const nfscmd_compound_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opcode, 32, ustate);
    if (ustate->pu.error) return;
    op_dispatch_nfsv4_ops__unparseSelf(&instance->op_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
array_nfscmd_compound_compound_nfsv4__initERD(compound_nfsv4_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 16; i++)
    {
        nfscmd_compound__initERD(&instance->nfscmd[i], (InfosetBase *)instance);
    }
}

static void
array_nfscmd_compound_compound_nfsv4__parseSelf(compound_nfsv4_ *instance, PState *pstate)
{
    const size_t arraySize = array_nfscmd_compound_compound_nfsv4__getArraySize(instance);
    validate_array_bounds("array_nfscmd_compound_compound_nfsv4_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        nfscmd_compound__parseSelf(&instance->nfscmd[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_nfscmd_compound_compound_nfsv4__unparseSelf(const compound_nfsv4_ *instance, UState *ustate)
{
    const size_t arraySize = array_nfscmd_compound_compound_nfsv4__getArraySize(instance);
    validate_array_bounds("array_nfscmd_compound_compound_nfsv4_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        nfscmd_compound__unparseSelf(&instance->nfscmd[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_nfscmd_compound_compound_nfsv4__getArraySize(const compound_nfsv4_ *instance)
{
    return instance->numargs;
}

static void
compound_nfsv4__initERD(compound_nfsv4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &compound_nfsv4_ERD;
    instance->_base.parent = parent;
    tag_compound__initERD(&instance->tag, (InfosetBase *)instance);
    array_nfscmd_compound_compound_nfsv4__initERD(instance, parent);
}

static void
compound_nfsv4__parseSelf(compound_nfsv4_ *instance, PState *pstate)
{
    tag_compound__parseSelf(&instance->tag, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->minorversion, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_nfscmd_compound_compound_nfsv4__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
compound_nfsv4__unparseSelf(const compound_nfsv4_ *instance, UState *ustate)
{
    tag_compound__unparseSelf(&instance->tag, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->minorversion, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_nfscmd_compound_compound_nfsv4__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
nfsv4_call_dispatch_call_body__initERD(nfsv4_call_dispatch_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nfsv4_call_dispatch_call_body_ERD;
    instance->_base.parent = parent;
}

static const Error *
nfsv4_call_dispatch_call_body__initChoice(nfsv4_call_dispatch_call_body_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((call_body_entry_dispatch_entry_point_ *)instance->_base.parent->parent)->proc;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        null_nfsv4__initERD(&instance->null, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        compound_nfsv4__initERD(&instance->compound, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
nfsv4_call_dispatch_call_body__parseSelf(nfsv4_call_dispatch_call_body_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        null_nfsv4__parseSelf(&instance->null, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        compound_nfsv4__parseSelf(&instance->compound, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
nfsv4_call_dispatch_call_body__unparseSelf(const nfsv4_call_dispatch_call_body_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        null_nfsv4__unparseSelf(&instance->null, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        compound_nfsv4__unparseSelf(&instance->compound, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
call_dispatch_call_body__initERD(call_dispatch_call_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &call_dispatch_call_body_ERD;
    instance->_base.parent = parent;
}

static const Error *
call_dispatch_call_body__initChoice(call_dispatch_call_body_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((call_body_entry_dispatch_entry_point_ *)instance->_base.parent)->vers;
    switch (key)
    {
    case 3:
        instance->_choice = 1;
        v3_dispatch_call_dispatch_call_body__initERD(&instance->v3_dispatch, (InfosetBase *)instance);
        break;
    case 4:
        instance->_choice = 2;
        nfsv4_call_dispatch_call_body__initERD(&instance->nfsv4, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
call_dispatch_call_body__parseSelf(call_dispatch_call_body_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        v3_dispatch_call_dispatch_call_body__parseSelf(&instance->v3_dispatch, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        nfsv4_call_dispatch_call_body__parseSelf(&instance->nfsv4, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
call_dispatch_call_body__unparseSelf(const call_dispatch_call_body_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        v3_dispatch_call_dispatch_call_body__unparseSelf(&instance->v3_dispatch, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        nfsv4_call_dispatch_call_body__unparseSelf(&instance->nfsv4, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
call_body_entry_dispatch_entry_point__initERD(call_body_entry_dispatch_entry_point_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &call_body_entry_dispatch_entry_point_ERD;
    instance->_base.parent = parent;
    cred_call_body__initERD(&instance->cred, (InfosetBase *)instance);
    verf_call_body__initERD(&instance->verf, (InfosetBase *)instance);
    call_dispatch_call_body__initERD(&instance->call_dispatch, (InfosetBase *)instance);
}

static void
call_body_entry_dispatch_entry_point__parseSelf(call_body_entry_dispatch_entry_point_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->rpcvers, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->rpcvers >= 2 && instance->rpcvers <= 2, "rpcvers", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->prog, 32, pstate);
    if (pstate->pu.error) return;
    int64_t enums_prog[] = {100000, 100003, 100005};
    validate_integer_enumeration(instance->prog, 3, enums_prog, "prog", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->vers, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->vers >= 3 && instance->vers <= 4, "vers", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->proc, 32, pstate);
    if (pstate->pu.error) return;
    cred_call_body__parseSelf(&instance->cred, pstate);
    if (pstate->pu.error) return;
    verf_call_body__parseSelf(&instance->verf, pstate);
    if (pstate->pu.error) return;
    call_dispatch_call_body__parseSelf(&instance->call_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
call_body_entry_dispatch_entry_point__unparseSelf(const call_body_entry_dispatch_entry_point_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->rpcvers, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->rpcvers >= 2 && instance->rpcvers <= 2, "rpcvers", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->prog, 32, ustate);
    if (ustate->pu.error) return;
    int64_t enums_prog[] = {100000, 100003, 100005};
    validate_integer_enumeration(instance->prog, 3, enums_prog, "prog", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->vers, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->vers >= 3 && instance->vers <= 4, "vers", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->proc, 32, ustate);
    if (ustate->pu.error) return;
    cred_call_body__unparseSelf(&instance->cred, ustate);
    if (ustate->pu.error) return;
    verf_call_body__unparseSelf(&instance->verf, ustate);
    if (ustate->pu.error) return;
    call_dispatch_call_body__unparseSelf(&instance->call_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
verf_accept_reply__initERD(verf_accept_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &verf_accept_reply_ERD;
    instance->_base.parent = parent;
    auth_dispatch_opaque_auth__initERD(&instance->auth_dispatch, (InfosetBase *)instance);
}

static void
verf_accept_reply__parseSelf(verf_accept_reply_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->auth_type, 32, pstate);
    if (pstate->pu.error) return;
    auth_dispatch_opaque_auth__parseSelf(&instance->auth_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
verf_accept_reply__unparseSelf(const verf_accept_reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->auth_type, 32, ustate);
    if (ustate->pu.error) return;
    auth_dispatch_opaque_auth__unparseSelf(&instance->auth_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
tag_nfsv4reply__initERD(tag_nfsv4reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &tag_nfsv4reply_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
tag_nfsv4reply__parseSelf(tag_nfsv4reply_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
tag_nfsv4reply__unparseSelf(const tag_nfsv4reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
access_op_dispatch_v4reply_ops__initERD(access_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &access_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
access_op_dispatch_v4reply_ops__parseSelf(access_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->supported, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->access, 32, pstate);
    if (pstate->pu.error) return;
}

static void
access_op_dispatch_v4reply_ops__unparseSelf(const access_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->supported, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->access, 32, ustate);
    if (ustate->pu.error) return;
}

static void
close_op_dispatch_v4reply_ops__initERD(close_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &close_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    open_stateid_close__initERD(&instance->open_stateid, (InfosetBase *)instance);
}

static void
close_op_dispatch_v4reply_ops__parseSelf(close_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    open_stateid_close__parseSelf(&instance->open_stateid, pstate);
    if (pstate->pu.error) return;
}

static void
close_op_dispatch_v4reply_ops__unparseSelf(const close_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    open_stateid_close__unparseSelf(&instance->open_stateid, ustate);
    if (ustate->pu.error) return;
}

static void
array_attrmask_fattr4_obj_attributes_getattr__initERD(obj_attributes_getattr_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_attrmask_fattr4_obj_attributes_getattr__parseSelf(obj_attributes_getattr_ *instance, PState *pstate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_getattr__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_getattr_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->attrmask[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_attrmask_fattr4_obj_attributes_getattr__unparseSelf(const obj_attributes_getattr_ *instance, UState *ustate)
{
    const size_t arraySize = array_attrmask_fattr4_obj_attributes_getattr__getArraySize(instance);
    validate_array_bounds("array_attrmask_fattr4_obj_attributes_getattr_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->attrmask[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_attrmask_fattr4_obj_attributes_getattr__getArraySize(const obj_attributes_getattr_ *instance)
{
    return instance->numargs;
}

static void
obj_attributes_getattr__initERD(obj_attributes_getattr_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &obj_attributes_getattr_ERD;
    instance->_base.parent = parent;
    array_attrmask_fattr4_obj_attributes_getattr__initERD(instance, parent);
    attr_vals_fattr4__initERD(&instance->attr_vals, (InfosetBase *)instance);
}

static void
obj_attributes_getattr__parseSelf(obj_attributes_getattr_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_getattr__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    attr_vals_fattr4__parseSelf(&instance->attr_vals, pstate);
    if (pstate->pu.error) return;
}

static void
obj_attributes_getattr__unparseSelf(const obj_attributes_getattr_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_attrmask_fattr4_obj_attributes_getattr__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    attr_vals_fattr4__unparseSelf(&instance->attr_vals, ustate);
    if (ustate->pu.error) return;
}

static void
getattr_op_dispatch_v4reply_ops__initERD(getattr_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getattr_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    obj_attributes_getattr__initERD(&instance->obj_attributes, (InfosetBase *)instance);
}

static void
getattr_op_dispatch_v4reply_ops__parseSelf(getattr_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    obj_attributes_getattr__parseSelf(&instance->obj_attributes, pstate);
    if (pstate->pu.error) return;
}

static void
getattr_op_dispatch_v4reply_ops__unparseSelf(const getattr_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    obj_attributes_getattr__unparseSelf(&instance->obj_attributes, ustate);
    if (ustate->pu.error) return;
}

static void
nfs_fh4_getfh__initERD(nfs_fh4_getfh_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nfs_fh4_getfh_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
nfs_fh4_getfh__parseSelf(nfs_fh4_getfh_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
nfs_fh4_getfh__unparseSelf(const nfs_fh4_getfh_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
getfh_op_dispatch_v4reply_ops__initERD(getfh_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &getfh_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    nfs_fh4_getfh__initERD(&instance->nfs_fh4, (InfosetBase *)instance);
}

static void
getfh_op_dispatch_v4reply_ops__parseSelf(getfh_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    nfs_fh4_getfh__parseSelf(&instance->nfs_fh4, pstate);
    if (pstate->pu.error) return;
}

static void
getfh_op_dispatch_v4reply_ops__unparseSelf(const getfh_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    nfs_fh4_getfh__unparseSelf(&instance->nfs_fh4, ustate);
    if (ustate->pu.error) return;
}

static void
lookup_op_dispatch_v4reply_ops__initERD(lookup_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &lookup_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
lookup_op_dispatch_v4reply_ops__parseSelf(lookup_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
lookup_op_dispatch_v4reply_ops__unparseSelf(const lookup_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
stateid_open4resok__initERD(stateid_open4resok_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_open4resok_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_open4resok__parseSelf(stateid_open4resok_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_open4resok__unparseSelf(const stateid_open4resok_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
cinfo_open4resok__initERD(cinfo_open4resok_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &cinfo_open4resok_ERD;
    instance->_base.parent = parent;
}

static void
cinfo_open4resok__parseSelf(cinfo_open4resok_ *instance, PState *pstate)
{
    parse_be_bool(&instance->atomic, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->before, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->after, 64, pstate);
    if (pstate->pu.error) return;
}

static void
cinfo_open4resok__unparseSelf(const cinfo_open4resok_ *instance, UState *ustate)
{
    unparse_be_bool(instance->atomic, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->before, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->after, 64, ustate);
    if (ustate->pu.error) return;
}

static void
array_bitmap_bitmap4_attrset_open4resok__initERD(attrset_open4resok_ *instance, InfosetBase *parent)
{
    UNUSED(instance);
    UNUSED(parent);
}

static void
array_bitmap_bitmap4_attrset_open4resok__parseSelf(attrset_open4resok_ *instance, PState *pstate)
{
    const size_t arraySize = array_bitmap_bitmap4_attrset_open4resok__getArraySize(instance);
    validate_array_bounds("array_bitmap_bitmap4_attrset_open4resok_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_be_uint32(&instance->bitmap[i], 32, pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_bitmap_bitmap4_attrset_open4resok__unparseSelf(const attrset_open4resok_ *instance, UState *ustate)
{
    const size_t arraySize = array_bitmap_bitmap4_attrset_open4resok__getArraySize(instance);
    validate_array_bounds("array_bitmap_bitmap4_attrset_open4resok_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_be_uint32(instance->bitmap[i], 32, ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_bitmap_bitmap4_attrset_open4resok__getArraySize(const attrset_open4resok_ *instance)
{
    return instance->numargs;
}

static void
attrset_open4resok__initERD(attrset_open4resok_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &attrset_open4resok_ERD;
    instance->_base.parent = parent;
    array_bitmap_bitmap4_attrset_open4resok__initERD(instance, parent);
}

static void
attrset_open4resok__parseSelf(attrset_open4resok_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_bitmap_bitmap4_attrset_open4resok__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
attrset_open4resok__unparseSelf(const attrset_open4resok_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_bitmap_bitmap4_attrset_open4resok__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
stateid_open_read_delegation4__initERD(stateid_open_read_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_open_read_delegation4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_open_read_delegation4__parseSelf(stateid_open_read_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_open_read_delegation4__unparseSelf(const stateid_open_read_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
who_nfsace4__initERD(who_nfsace4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &who_nfsace4_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
who_nfsace4__parseSelf(who_nfsace4_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
who_nfsace4__unparseSelf(const who_nfsace4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
permissions_open_read_delegation4__initERD(permissions_open_read_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &permissions_open_read_delegation4_ERD;
    instance->_base.parent = parent;
    who_nfsace4__initERD(&instance->who, (InfosetBase *)instance);
}

static void
permissions_open_read_delegation4__parseSelf(permissions_open_read_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->type, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->flag, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->access_mask, 32, pstate);
    if (pstate->pu.error) return;
    who_nfsace4__parseSelf(&instance->who, pstate);
    if (pstate->pu.error) return;
}

static void
permissions_open_read_delegation4__unparseSelf(const permissions_open_read_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->type, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->flag, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->access_mask, 32, ustate);
    if (ustate->pu.error) return;
    who_nfsace4__unparseSelf(&instance->who, ustate);
    if (ustate->pu.error) return;
}

static void
read_open_delegation4__initERD(read_open_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &read_open_delegation4_ERD;
    instance->_base.parent = parent;
    stateid_open_read_delegation4__initERD(&instance->stateid, (InfosetBase *)instance);
    permissions_open_read_delegation4__initERD(&instance->permissions, (InfosetBase *)instance);
}

static void
read_open_delegation4__parseSelf(read_open_delegation4_ *instance, PState *pstate)
{
    stateid_open_read_delegation4__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->recall, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    permissions_open_read_delegation4__parseSelf(&instance->permissions, pstate);
    if (pstate->pu.error) return;
}

static void
read_open_delegation4__unparseSelf(const read_open_delegation4_ *instance, UState *ustate)
{
    stateid_open_read_delegation4__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->recall, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    permissions_open_read_delegation4__unparseSelf(&instance->permissions, ustate);
    if (ustate->pu.error) return;
}

static void
stateid_open_write_delegation4__initERD(stateid_open_write_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &stateid_open_write_delegation4_ERD;
    instance->_base.parent = parent;
    instance->other.array = instance->_a_other;
    instance->other.lengthInBytes = sizeof(instance->_a_other);
    instance->other.dynamic = false;
}

static void
stateid_open_write_delegation4__parseSelf(stateid_open_write_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->seqid, 32, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->other, pstate);
    if (pstate->pu.error) return;
}

static void
stateid_open_write_delegation4__unparseSelf(const stateid_open_write_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->seqid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->other, ustate);
    if (ustate->pu.error) return;
}

static void
mod_blocks_nfs_space_limit4__initERD(mod_blocks_nfs_space_limit4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &mod_blocks_nfs_space_limit4_ERD;
    instance->_base.parent = parent;
}

static void
mod_blocks_nfs_space_limit4__parseSelf(mod_blocks_nfs_space_limit4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->num_blocks, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->bytes_per_block, 32, pstate);
    if (pstate->pu.error) return;
}

static void
mod_blocks_nfs_space_limit4__unparseSelf(const mod_blocks_nfs_space_limit4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->num_blocks, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->bytes_per_block, 32, ustate);
    if (ustate->pu.error) return;
}

static void
space_limit_open_write_delegation4__initERD(space_limit_open_write_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &space_limit_open_write_delegation4_ERD;
    instance->_base.parent = parent;
    mod_blocks_nfs_space_limit4__initERD(&instance->mod_blocks, (InfosetBase *)instance);
}

static void
space_limit_open_write_delegation4__parseSelf(space_limit_open_write_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->limitby, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint64(&instance->filesize, 64, pstate);
    if (pstate->pu.error) return;
    mod_blocks_nfs_space_limit4__parseSelf(&instance->mod_blocks, pstate);
    if (pstate->pu.error) return;
}

static void
space_limit_open_write_delegation4__unparseSelf(const space_limit_open_write_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->limitby, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint64(instance->filesize, 64, ustate);
    if (ustate->pu.error) return;
    mod_blocks_nfs_space_limit4__unparseSelf(&instance->mod_blocks, ustate);
    if (ustate->pu.error) return;
}

static void
permissions_open_write_delegation4__initERD(permissions_open_write_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &permissions_open_write_delegation4_ERD;
    instance->_base.parent = parent;
    who_nfsace4__initERD(&instance->who, (InfosetBase *)instance);
}

static void
permissions_open_write_delegation4__parseSelf(permissions_open_write_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->type, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->flag, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->access_mask, 32, pstate);
    if (pstate->pu.error) return;
    who_nfsace4__parseSelf(&instance->who, pstate);
    if (pstate->pu.error) return;
}

static void
permissions_open_write_delegation4__unparseSelf(const permissions_open_write_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->type, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->flag, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->access_mask, 32, ustate);
    if (ustate->pu.error) return;
    who_nfsace4__unparseSelf(&instance->who, ustate);
    if (ustate->pu.error) return;
}

static void
write_open_delegation4__initERD(write_open_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &write_open_delegation4_ERD;
    instance->_base.parent = parent;
    stateid_open_write_delegation4__initERD(&instance->stateid, (InfosetBase *)instance);
    space_limit_open_write_delegation4__initERD(&instance->space_limit, (InfosetBase *)instance);
    permissions_open_write_delegation4__initERD(&instance->permissions, (InfosetBase *)instance);
}

static void
write_open_delegation4__parseSelf(write_open_delegation4_ *instance, PState *pstate)
{
    stateid_open_write_delegation4__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->recall, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    space_limit_open_write_delegation4__parseSelf(&instance->space_limit, pstate);
    if (pstate->pu.error) return;
    permissions_open_write_delegation4__parseSelf(&instance->permissions, pstate);
    if (pstate->pu.error) return;
}

static void
write_open_delegation4__unparseSelf(const write_open_delegation4_ *instance, UState *ustate)
{
    stateid_open_write_delegation4__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->recall, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    space_limit_open_write_delegation4__unparseSelf(&instance->space_limit, ustate);
    if (ustate->pu.error) return;
    permissions_open_write_delegation4__unparseSelf(&instance->permissions, ustate);
    if (ustate->pu.error) return;
}

static void
ext_open_delegation4__initERD(ext_open_delegation4_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &ext_open_delegation4_ERD;
    instance->_base.parent = parent;
}

static void
ext_open_delegation4__parseSelf(ext_open_delegation4_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->why, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->server_push, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
    parse_be_bool(&instance->server_signal, 32, 1, 0, pstate);
    if (pstate->pu.error) return;
}

static void
ext_open_delegation4__unparseSelf(const ext_open_delegation4_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->why, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->server_push, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
    unparse_be_bool(instance->server_signal, 32, 1, 0, ustate);
    if (ustate->pu.error) return;
}

static void
delegation_open4resok__initERD(delegation_open4resok_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &delegation_open4resok_ERD;
    instance->_base.parent = parent;
    read_open_delegation4__initERD(&instance->read, (InfosetBase *)instance);
    write_open_delegation4__initERD(&instance->write, (InfosetBase *)instance);
    ext_open_delegation4__initERD(&instance->ext, (InfosetBase *)instance);
}

static void
delegation_open4resok__parseSelf(delegation_open4resok_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->delegation_type, 32, pstate);
    if (pstate->pu.error) return;
    read_open_delegation4__parseSelf(&instance->read, pstate);
    if (pstate->pu.error) return;
    write_open_delegation4__parseSelf(&instance->write, pstate);
    if (pstate->pu.error) return;
    ext_open_delegation4__parseSelf(&instance->ext, pstate);
    if (pstate->pu.error) return;
}

static void
delegation_open4resok__unparseSelf(const delegation_open4resok_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->delegation_type, 32, ustate);
    if (ustate->pu.error) return;
    read_open_delegation4__unparseSelf(&instance->read, ustate);
    if (ustate->pu.error) return;
    write_open_delegation4__unparseSelf(&instance->write, ustate);
    if (ustate->pu.error) return;
    ext_open_delegation4__unparseSelf(&instance->ext, ustate);
    if (ustate->pu.error) return;
}

static void
resok4_open__initERD(resok4_open_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &resok4_open_ERD;
    instance->_base.parent = parent;
    stateid_open4resok__initERD(&instance->stateid, (InfosetBase *)instance);
    cinfo_open4resok__initERD(&instance->cinfo, (InfosetBase *)instance);
    attrset_open4resok__initERD(&instance->attrset, (InfosetBase *)instance);
    delegation_open4resok__initERD(&instance->delegation, (InfosetBase *)instance);
}

static void
resok4_open__parseSelf(resok4_open_ *instance, PState *pstate)
{
    stateid_open4resok__parseSelf(&instance->stateid, pstate);
    if (pstate->pu.error) return;
    cinfo_open4resok__parseSelf(&instance->cinfo, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->rflags, 32, pstate);
    if (pstate->pu.error) return;
    attrset_open4resok__parseSelf(&instance->attrset, pstate);
    if (pstate->pu.error) return;
    delegation_open4resok__parseSelf(&instance->delegation, pstate);
    if (pstate->pu.error) return;
}

static void
resok4_open__unparseSelf(const resok4_open_ *instance, UState *ustate)
{
    stateid_open4resok__unparseSelf(&instance->stateid, ustate);
    if (ustate->pu.error) return;
    cinfo_open4resok__unparseSelf(&instance->cinfo, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->rflags, 32, ustate);
    if (ustate->pu.error) return;
    attrset_open4resok__unparseSelf(&instance->attrset, ustate);
    if (ustate->pu.error) return;
    delegation_open4resok__unparseSelf(&instance->delegation, ustate);
    if (ustate->pu.error) return;
}

static void
open_op_dispatch_v4reply_ops__initERD(open_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &open_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    resok4_open__initERD(&instance->resok4, (InfosetBase *)instance);
}

static void
open_op_dispatch_v4reply_ops__parseSelf(open_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    resok4_open__parseSelf(&instance->resok4, pstate);
    if (pstate->pu.error) return;
}

static void
open_op_dispatch_v4reply_ops__unparseSelf(const open_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    resok4_open__unparseSelf(&instance->resok4, ustate);
    if (ustate->pu.error) return;
}

static void
putfh_op_dispatch_v4reply_ops__initERD(putfh_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putfh_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
putfh_op_dispatch_v4reply_ops__parseSelf(putfh_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
putfh_op_dispatch_v4reply_ops__unparseSelf(const putfh_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
putpubfh_op_dispatch_v4reply_ops__initERD(putpubfh_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putpubfh_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
putpubfh_op_dispatch_v4reply_ops__parseSelf(putpubfh_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
putpubfh_op_dispatch_v4reply_ops__unparseSelf(const putpubfh_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
putrootfh_op_dispatch_v4reply_ops__initERD(putrootfh_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &putrootfh_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
putrootfh_op_dispatch_v4reply_ops__parseSelf(putrootfh_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
putrootfh_op_dispatch_v4reply_ops__unparseSelf(const putrootfh_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
data_read__initERD(data_read_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &data_read_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
data_read__parseSelf(data_read_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
data_read__unparseSelf(const data_read_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
read_op_dispatch_v4reply_ops__initERD(read_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &read_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    data_read__initERD(&instance->data, (InfosetBase *)instance);
}

static void
read_op_dispatch_v4reply_ops__parseSelf(read_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->eof, 32, pstate);
    if (pstate->pu.error) return;
    data_read__parseSelf(&instance->data, pstate);
    if (pstate->pu.error) return;
}

static void
read_op_dispatch_v4reply_ops__unparseSelf(const read_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->eof, 32, ustate);
    if (ustate->pu.error) return;
    data_read__unparseSelf(&instance->data, ustate);
    if (ustate->pu.error) return;
}

static void
readdir_op_dispatch_v4reply_ops__initERD(readdir_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &readdir_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
readdir_op_dispatch_v4reply_ops__parseSelf(readdir_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
readdir_op_dispatch_v4reply_ops__unparseSelf(const readdir_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
write_op_dispatch_v4reply_ops__initERD(write_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &write_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    instance->writeverf.array = instance->_a_writeverf;
    instance->writeverf.lengthInBytes = sizeof(instance->_a_writeverf);
    instance->writeverf.dynamic = false;
}

static void
write_op_dispatch_v4reply_ops__parseSelf(write_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->count, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->committed, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->committed <= 2, "committed", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->writeverf, pstate);
    if (pstate->pu.error) return;
}

static void
write_op_dispatch_v4reply_ops__unparseSelf(const write_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->count, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->committed, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->committed <= 2, "committed", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->writeverf, ustate);
    if (ustate->pu.error) return;
}

static void
eir_state_protect_exchange_id__initERD(eir_state_protect_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eir_state_protect_exchange_id_ERD;
    instance->_base.parent = parent;
    protect_dispatch_state_protect4_a__initERD(&instance->protect_dispatch, (InfosetBase *)instance);
}

static void
eir_state_protect_exchange_id__parseSelf(eir_state_protect_exchange_id_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->mode, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &pstate->pu);
    if (pstate->pu.error) return;
    protect_dispatch_state_protect4_a__parseSelf(&instance->protect_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
eir_state_protect_exchange_id__unparseSelf(const eir_state_protect_exchange_id_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->mode, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mode <= 2, "mode", &ustate->pu);
    if (ustate->pu.error) return;
    protect_dispatch_state_protect4_a__unparseSelf(&instance->protect_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
eir_server_owner_exchange_id__initERD(eir_server_owner_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eir_server_owner_exchange_id_ERD;
    instance->_base.parent = parent;
    instance->so_major_id.array = instance->_a_so_major_id;
    instance->so_major_id.lengthInBytes = sizeof(instance->_a_so_major_id);
    instance->so_major_id.dynamic = false;
}

static void
eir_server_owner_exchange_id__parseSelf(eir_server_owner_exchange_id_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->so_minor_id, 64, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->so_major_id, pstate);
    if (pstate->pu.error) return;
}

static void
eir_server_owner_exchange_id__unparseSelf(const eir_server_owner_exchange_id_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->so_minor_id, 64, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->so_major_id, ustate);
    if (ustate->pu.error) return;
}

static void
eir_server_scope_exchange_id__initERD(eir_server_scope_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eir_server_scope_exchange_id_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
eir_server_scope_exchange_id__parseSelf(eir_server_scope_exchange_id_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
eir_server_scope_exchange_id__unparseSelf(const eir_server_scope_exchange_id_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
eir_server_impl_id_exchange_id__initERD(eir_server_impl_id_exchange_id_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &eir_server_impl_id_exchange_id_ERD;
    instance->_base.parent = parent;
    nii_domain_nfs_impl_id4__initERD(&instance->nii_domain, (InfosetBase *)instance);
    nii_name_nfs_impl_id4__initERD(&instance->nii_name, (InfosetBase *)instance);
    nii_date_nfs_impl_id4__initERD(&instance->nii_date, (InfosetBase *)instance);
}

static void
eir_server_impl_id_exchange_id__parseSelf(eir_server_impl_id_exchange_id_ *instance, PState *pstate)
{
    nii_domain_nfs_impl_id4__parseSelf(&instance->nii_domain, pstate);
    if (pstate->pu.error) return;
    nii_name_nfs_impl_id4__parseSelf(&instance->nii_name, pstate);
    if (pstate->pu.error) return;
    nii_date_nfs_impl_id4__parseSelf(&instance->nii_date, pstate);
    if (pstate->pu.error) return;
}

static void
eir_server_impl_id_exchange_id__unparseSelf(const eir_server_impl_id_exchange_id_ *instance, UState *ustate)
{
    nii_domain_nfs_impl_id4__unparseSelf(&instance->nii_domain, ustate);
    if (ustate->pu.error) return;
    nii_name_nfs_impl_id4__unparseSelf(&instance->nii_name, ustate);
    if (ustate->pu.error) return;
    nii_date_nfs_impl_id4__unparseSelf(&instance->nii_date, ustate);
    if (ustate->pu.error) return;
}

static void
exchange_id_op_dispatch_v4reply_ops__initERD(exchange_id_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &exchange_id_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    eir_state_protect_exchange_id__initERD(&instance->eir_state_protect, (InfosetBase *)instance);
    eir_server_owner_exchange_id__initERD(&instance->eir_server_owner, (InfosetBase *)instance);
    eir_server_scope_exchange_id__initERD(&instance->eir_server_scope, (InfosetBase *)instance);
    eir_server_impl_id_exchange_id__initERD(&instance->eir_server_impl_id, (InfosetBase *)instance);
}

static void
exchange_id_op_dispatch_v4reply_ops__parseSelf(exchange_id_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint64(&instance->eir_clientid, 64, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->eir_sequenceid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->eir_flags, 32, pstate);
    if (pstate->pu.error) return;
    eir_state_protect_exchange_id__parseSelf(&instance->eir_state_protect, pstate);
    if (pstate->pu.error) return;
    eir_server_owner_exchange_id__parseSelf(&instance->eir_server_owner, pstate);
    if (pstate->pu.error) return;
    eir_server_scope_exchange_id__parseSelf(&instance->eir_server_scope, pstate);
    if (pstate->pu.error) return;
    eir_server_impl_id_exchange_id__parseSelf(&instance->eir_server_impl_id, pstate);
    if (pstate->pu.error) return;
}

static void
exchange_id_op_dispatch_v4reply_ops__unparseSelf(const exchange_id_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint64(instance->eir_clientid, 64, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->eir_sequenceid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->eir_flags, 32, ustate);
    if (ustate->pu.error) return;
    eir_state_protect_exchange_id__unparseSelf(&instance->eir_state_protect, ustate);
    if (ustate->pu.error) return;
    eir_server_owner_exchange_id__unparseSelf(&instance->eir_server_owner, ustate);
    if (ustate->pu.error) return;
    eir_server_scope_exchange_id__unparseSelf(&instance->eir_server_scope, ustate);
    if (ustate->pu.error) return;
    eir_server_impl_id_exchange_id__unparseSelf(&instance->eir_server_impl_id, ustate);
    if (ustate->pu.error) return;
}

static void
csr_fore_chan_attrs_create_session__initERD(csr_fore_chan_attrs_create_session_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &csr_fore_chan_attrs_create_session_ERD;
    instance->_base.parent = parent;
}

static void
csr_fore_chan_attrs_create_session__parseSelf(csr_fore_chan_attrs_create_session_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->ca_headerpadsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequestsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize_cached, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxoperations, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequests, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_rdma_ird, 32, pstate);
    if (pstate->pu.error) return;
}

static void
csr_fore_chan_attrs_create_session__unparseSelf(const csr_fore_chan_attrs_create_session_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->ca_headerpadsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequestsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize_cached, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxoperations, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequests, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_rdma_ird, 32, ustate);
    if (ustate->pu.error) return;
}

static void
csr_back_chan_attrs_create_session__initERD(csr_back_chan_attrs_create_session_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &csr_back_chan_attrs_create_session_ERD;
    instance->_base.parent = parent;
}

static void
csr_back_chan_attrs_create_session__parseSelf(csr_back_chan_attrs_create_session_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->ca_headerpadsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequestsize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxresponsesize_cached, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxoperations, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_maxrequests, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->ca_rdma_ird, 32, pstate);
    if (pstate->pu.error) return;
}

static void
csr_back_chan_attrs_create_session__unparseSelf(const csr_back_chan_attrs_create_session_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->ca_headerpadsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequestsize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxresponsesize_cached, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxoperations, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_maxrequests, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->ca_rdma_ird, 32, ustate);
    if (ustate->pu.error) return;
}

static void
create_session_op_dispatch_v4reply_ops__initERD(create_session_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &create_session_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    instance->csr_sessionid.array = instance->_a_csr_sessionid;
    instance->csr_sessionid.lengthInBytes = sizeof(instance->_a_csr_sessionid);
    instance->csr_sessionid.dynamic = false;
    csr_fore_chan_attrs_create_session__initERD(&instance->csr_fore_chan_attrs, (InfosetBase *)instance);
    csr_back_chan_attrs_create_session__initERD(&instance->csr_back_chan_attrs, (InfosetBase *)instance);
}

static void
create_session_op_dispatch_v4reply_ops__parseSelf(create_session_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->csr_sessionid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->csr_sequence, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->csr_flags, 32, pstate);
    if (pstate->pu.error) return;
    csr_fore_chan_attrs_create_session__parseSelf(&instance->csr_fore_chan_attrs, pstate);
    if (pstate->pu.error) return;
    csr_back_chan_attrs_create_session__parseSelf(&instance->csr_back_chan_attrs, pstate);
    if (pstate->pu.error) return;
}

static void
create_session_op_dispatch_v4reply_ops__unparseSelf(const create_session_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->csr_sessionid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->csr_sequence, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->csr_flags, 32, ustate);
    if (ustate->pu.error) return;
    csr_fore_chan_attrs_create_session__unparseSelf(&instance->csr_fore_chan_attrs, ustate);
    if (ustate->pu.error) return;
    csr_back_chan_attrs_create_session__unparseSelf(&instance->csr_back_chan_attrs, ustate);
    if (ustate->pu.error) return;
}

static void
destroy_session_op_dispatch_v4reply_ops__initERD(destroy_session_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &destroy_session_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
destroy_session_op_dispatch_v4reply_ops__parseSelf(destroy_session_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
destroy_session_op_dispatch_v4reply_ops__unparseSelf(const destroy_session_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
layoutreturn_op_dispatch_v4reply_ops__initERD(layoutreturn_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &layoutreturn_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
layoutreturn_op_dispatch_v4reply_ops__parseSelf(layoutreturn_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->state_present, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->lrs_stateid, 32, pstate);
    if (pstate->pu.error) return;
}

static void
layoutreturn_op_dispatch_v4reply_ops__unparseSelf(const layoutreturn_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->state_present, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->lrs_stateid, 32, ustate);
    if (ustate->pu.error) return;
}

static void
oid_rpcsec_gss_info__initERD(oid_rpcsec_gss_info_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &oid_rpcsec_gss_info_ERD;
    instance->_base.parent = parent;
    instance->opaque.dynamic = true;
}

static void
oid_rpcsec_gss_info__parseSelf(oid_rpcsec_gss_info_ *instance, PState *pstate)
{
    uint32_t _l_opaque;
    parse_be_uint32(&_l_opaque, 32, pstate);
    if (pstate->pu.error) return;
    alloc_hexBinary(&instance->opaque, _l_opaque, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->opaque, pstate);
    if (pstate->pu.error) return;
    // Align to closest alignment
    parse_align_to(32, pstate);
    if (pstate->pu.error) return;
}

static void
oid_rpcsec_gss_info__unparseSelf(const oid_rpcsec_gss_info_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opaque.lengthInBytes, 32, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->opaque, ustate);
    if (ustate->pu.error) return;
    // Align to closest alignment
    unparse_align_to(32, '\0', ustate);
    if (ustate->pu.error) return;
}

static void
gss_info_secinfo4_switch__initERD(gss_info_secinfo4_switch_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gss_info_secinfo4_switch_ERD;
    instance->_base.parent = parent;
    oid_rpcsec_gss_info__initERD(&instance->oid, (InfosetBase *)instance);
}

static void
gss_info_secinfo4_switch__parseSelf(gss_info_secinfo4_switch_ *instance, PState *pstate)
{
    oid_rpcsec_gss_info__parseSelf(&instance->oid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->qop, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->service, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->service >= 1 && instance->service <= 3, "service", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
gss_info_secinfo4_switch__unparseSelf(const gss_info_secinfo4_switch_ *instance, UState *ustate)
{
    oid_rpcsec_gss_info__unparseSelf(&instance->oid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->qop, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->service, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->service >= 1 && instance->service <= 3, "service", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
sec_type_secinfo_no_name__initERD(sec_type_secinfo_no_name_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sec_type_secinfo_no_name_ERD;
    instance->_base.parent = parent;
    gss_info_secinfo4_switch__initERD(&instance->gss_info, (InfosetBase *)instance);
}

static void
sec_type_secinfo_no_name__parseSelf(sec_type_secinfo_no_name_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->flavor, 32, pstate);
    if (pstate->pu.error) return;
    gss_info_secinfo4_switch__parseSelf(&instance->gss_info, pstate);
    if (pstate->pu.error) return;
}

static void
sec_type_secinfo_no_name__unparseSelf(const sec_type_secinfo_no_name_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->flavor, 32, ustate);
    if (ustate->pu.error) return;
    gss_info_secinfo4_switch__unparseSelf(&instance->gss_info, ustate);
    if (ustate->pu.error) return;
}

static void
array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__initERD(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 16; i++)
    {
        sec_type_secinfo_no_name__initERD(&instance->sec_type[i], (InfosetBase *)instance);
    }
}

static void
array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    const size_t arraySize = array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__getArraySize(instance);
    validate_array_bounds("array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sec_type_secinfo_no_name__parseSelf(&instance->sec_type[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    const size_t arraySize = array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__getArraySize(instance);
    validate_array_bounds("array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sec_type_secinfo_no_name__unparseSelf(&instance->sec_type[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__getArraySize(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance)
{
    return instance->flavor_num;
}

static void
secinfo_no_name_op_dispatch_v4reply_ops__initERD(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &secinfo_no_name_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__initERD(instance, parent);
}

static void
secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(secinfo_no_name_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->flavor_num, 32, pstate);
    if (pstate->pu.error) return;
    array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(const secinfo_no_name_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->flavor_num, 32, ustate);
    if (ustate->pu.error) return;
    array_sec_type_secinfo_no_name_secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
sequence_op_dispatch_v4reply_ops__initERD(sequence_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sequence_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
    instance->sr_sessionid.array = instance->_a_sr_sessionid;
    instance->sr_sessionid.lengthInBytes = sizeof(instance->_a_sr_sessionid);
    instance->sr_sessionid.dynamic = false;
}

static void
sequence_op_dispatch_v4reply_ops__parseSelf(sequence_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->sr_sessionid, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sr_sequenceid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sr_slotid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sr_highest_slotid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sr_target_highest_slotid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->sr_status_flags, 32, pstate);
    if (pstate->pu.error) return;
}

static void
sequence_op_dispatch_v4reply_ops__unparseSelf(const sequence_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->sr_sessionid, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sr_sequenceid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sr_slotid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sr_highest_slotid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sr_target_highest_slotid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->sr_status_flags, 32, ustate);
    if (ustate->pu.error) return;
}

static void
destroy_clientid_op_dispatch_v4reply_ops__initERD(destroy_clientid_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &destroy_clientid_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
destroy_clientid_op_dispatch_v4reply_ops__parseSelf(destroy_clientid_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
destroy_clientid_op_dispatch_v4reply_ops__unparseSelf(const destroy_clientid_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
reclaim_complete_op_dispatch_v4reply_ops__initERD(reclaim_complete_op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reclaim_complete_op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static void
reclaim_complete_op_dispatch_v4reply_ops__parseSelf(reclaim_complete_op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(pstate);
}

static void
reclaim_complete_op_dispatch_v4reply_ops__unparseSelf(const reclaim_complete_op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    // Empty struct, but need to prevent compiler warnings
    UNUSED(instance);
    UNUSED(ustate);
}

static void
op_dispatch_v4reply_ops__initERD(op_dispatch_v4reply_ops_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &op_dispatch_v4reply_ops_ERD;
    instance->_base.parent = parent;
}

static const Error *
op_dispatch_v4reply_ops__initChoice(op_dispatch_v4reply_ops_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((nfscmd_nfsv4reply_ *)instance->_base.parent)->opcode;
    switch (key)
    {
    case 3:
        instance->_choice = 1;
        access_op_dispatch_v4reply_ops__initERD(&instance->access, (InfosetBase *)instance);
        break;
    case 4:
        instance->_choice = 2;
        close_op_dispatch_v4reply_ops__initERD(&instance->close, (InfosetBase *)instance);
        break;
    case 9:
        instance->_choice = 3;
        getattr_op_dispatch_v4reply_ops__initERD(&instance->getattr, (InfosetBase *)instance);
        break;
    case 10:
        instance->_choice = 4;
        getfh_op_dispatch_v4reply_ops__initERD(&instance->getfh, (InfosetBase *)instance);
        break;
    case 15:
        instance->_choice = 5;
        lookup_op_dispatch_v4reply_ops__initERD(&instance->lookup, (InfosetBase *)instance);
        break;
    case 18:
        instance->_choice = 6;
        open_op_dispatch_v4reply_ops__initERD(&instance->open, (InfosetBase *)instance);
        break;
    case 22:
        instance->_choice = 7;
        putfh_op_dispatch_v4reply_ops__initERD(&instance->putfh, (InfosetBase *)instance);
        break;
    case 23:
        instance->_choice = 8;
        putpubfh_op_dispatch_v4reply_ops__initERD(&instance->putpubfh, (InfosetBase *)instance);
        break;
    case 24:
        instance->_choice = 9;
        putrootfh_op_dispatch_v4reply_ops__initERD(&instance->putrootfh, (InfosetBase *)instance);
        break;
    case 25:
        instance->_choice = 10;
        read_op_dispatch_v4reply_ops__initERD(&instance->read, (InfosetBase *)instance);
        break;
    case 26:
        instance->_choice = 11;
        readdir_op_dispatch_v4reply_ops__initERD(&instance->readdir, (InfosetBase *)instance);
        break;
    case 38:
        instance->_choice = 12;
        write_op_dispatch_v4reply_ops__initERD(&instance->write, (InfosetBase *)instance);
        break;
    case 42:
        instance->_choice = 13;
        exchange_id_op_dispatch_v4reply_ops__initERD(&instance->exchange_id, (InfosetBase *)instance);
        break;
    case 43:
        instance->_choice = 14;
        create_session_op_dispatch_v4reply_ops__initERD(&instance->create_session, (InfosetBase *)instance);
        break;
    case 44:
        instance->_choice = 15;
        destroy_session_op_dispatch_v4reply_ops__initERD(&instance->destroy_session, (InfosetBase *)instance);
        break;
    case 51:
        instance->_choice = 16;
        layoutreturn_op_dispatch_v4reply_ops__initERD(&instance->layoutreturn, (InfosetBase *)instance);
        break;
    case 52:
        instance->_choice = 17;
        secinfo_no_name_op_dispatch_v4reply_ops__initERD(&instance->secinfo_no_name, (InfosetBase *)instance);
        break;
    case 53:
        instance->_choice = 18;
        sequence_op_dispatch_v4reply_ops__initERD(&instance->sequence, (InfosetBase *)instance);
        break;
    case 57:
        instance->_choice = 19;
        destroy_clientid_op_dispatch_v4reply_ops__initERD(&instance->destroy_clientid, (InfosetBase *)instance);
        break;
    case 58:
        instance->_choice = 20;
        reclaim_complete_op_dispatch_v4reply_ops__initERD(&instance->reclaim_complete, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
op_dispatch_v4reply_ops__parseSelf(op_dispatch_v4reply_ops_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        access_op_dispatch_v4reply_ops__parseSelf(&instance->access, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        close_op_dispatch_v4reply_ops__parseSelf(&instance->close, pstate);
        if (pstate->pu.error) return;
        break;
    case 3:
        getattr_op_dispatch_v4reply_ops__parseSelf(&instance->getattr, pstate);
        if (pstate->pu.error) return;
        break;
    case 4:
        getfh_op_dispatch_v4reply_ops__parseSelf(&instance->getfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 5:
        lookup_op_dispatch_v4reply_ops__parseSelf(&instance->lookup, pstate);
        if (pstate->pu.error) return;
        break;
    case 6:
        open_op_dispatch_v4reply_ops__parseSelf(&instance->open, pstate);
        if (pstate->pu.error) return;
        break;
    case 7:
        putfh_op_dispatch_v4reply_ops__parseSelf(&instance->putfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 8:
        putpubfh_op_dispatch_v4reply_ops__parseSelf(&instance->putpubfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 9:
        putrootfh_op_dispatch_v4reply_ops__parseSelf(&instance->putrootfh, pstate);
        if (pstate->pu.error) return;
        break;
    case 10:
        read_op_dispatch_v4reply_ops__parseSelf(&instance->read, pstate);
        if (pstate->pu.error) return;
        break;
    case 11:
        readdir_op_dispatch_v4reply_ops__parseSelf(&instance->readdir, pstate);
        if (pstate->pu.error) return;
        break;
    case 12:
        write_op_dispatch_v4reply_ops__parseSelf(&instance->write, pstate);
        if (pstate->pu.error) return;
        break;
    case 13:
        exchange_id_op_dispatch_v4reply_ops__parseSelf(&instance->exchange_id, pstate);
        if (pstate->pu.error) return;
        break;
    case 14:
        create_session_op_dispatch_v4reply_ops__parseSelf(&instance->create_session, pstate);
        if (pstate->pu.error) return;
        break;
    case 15:
        destroy_session_op_dispatch_v4reply_ops__parseSelf(&instance->destroy_session, pstate);
        if (pstate->pu.error) return;
        break;
    case 16:
        layoutreturn_op_dispatch_v4reply_ops__parseSelf(&instance->layoutreturn, pstate);
        if (pstate->pu.error) return;
        break;
    case 17:
        secinfo_no_name_op_dispatch_v4reply_ops__parseSelf(&instance->secinfo_no_name, pstate);
        if (pstate->pu.error) return;
        break;
    case 18:
        sequence_op_dispatch_v4reply_ops__parseSelf(&instance->sequence, pstate);
        if (pstate->pu.error) return;
        break;
    case 19:
        destroy_clientid_op_dispatch_v4reply_ops__parseSelf(&instance->destroy_clientid, pstate);
        if (pstate->pu.error) return;
        break;
    case 20:
        reclaim_complete_op_dispatch_v4reply_ops__parseSelf(&instance->reclaim_complete, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
op_dispatch_v4reply_ops__unparseSelf(const op_dispatch_v4reply_ops_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        access_op_dispatch_v4reply_ops__unparseSelf(&instance->access, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        close_op_dispatch_v4reply_ops__unparseSelf(&instance->close, ustate);
        if (ustate->pu.error) return;
        break;
    case 3:
        getattr_op_dispatch_v4reply_ops__unparseSelf(&instance->getattr, ustate);
        if (ustate->pu.error) return;
        break;
    case 4:
        getfh_op_dispatch_v4reply_ops__unparseSelf(&instance->getfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 5:
        lookup_op_dispatch_v4reply_ops__unparseSelf(&instance->lookup, ustate);
        if (ustate->pu.error) return;
        break;
    case 6:
        open_op_dispatch_v4reply_ops__unparseSelf(&instance->open, ustate);
        if (ustate->pu.error) return;
        break;
    case 7:
        putfh_op_dispatch_v4reply_ops__unparseSelf(&instance->putfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 8:
        putpubfh_op_dispatch_v4reply_ops__unparseSelf(&instance->putpubfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 9:
        putrootfh_op_dispatch_v4reply_ops__unparseSelf(&instance->putrootfh, ustate);
        if (ustate->pu.error) return;
        break;
    case 10:
        read_op_dispatch_v4reply_ops__unparseSelf(&instance->read, ustate);
        if (ustate->pu.error) return;
        break;
    case 11:
        readdir_op_dispatch_v4reply_ops__unparseSelf(&instance->readdir, ustate);
        if (ustate->pu.error) return;
        break;
    case 12:
        write_op_dispatch_v4reply_ops__unparseSelf(&instance->write, ustate);
        if (ustate->pu.error) return;
        break;
    case 13:
        exchange_id_op_dispatch_v4reply_ops__unparseSelf(&instance->exchange_id, ustate);
        if (ustate->pu.error) return;
        break;
    case 14:
        create_session_op_dispatch_v4reply_ops__unparseSelf(&instance->create_session, ustate);
        if (ustate->pu.error) return;
        break;
    case 15:
        destroy_session_op_dispatch_v4reply_ops__unparseSelf(&instance->destroy_session, ustate);
        if (ustate->pu.error) return;
        break;
    case 16:
        layoutreturn_op_dispatch_v4reply_ops__unparseSelf(&instance->layoutreturn, ustate);
        if (ustate->pu.error) return;
        break;
    case 17:
        secinfo_no_name_op_dispatch_v4reply_ops__unparseSelf(&instance->secinfo_no_name, ustate);
        if (ustate->pu.error) return;
        break;
    case 18:
        sequence_op_dispatch_v4reply_ops__unparseSelf(&instance->sequence, ustate);
        if (ustate->pu.error) return;
        break;
    case 19:
        destroy_clientid_op_dispatch_v4reply_ops__unparseSelf(&instance->destroy_clientid, ustate);
        if (ustate->pu.error) return;
        break;
    case 20:
        reclaim_complete_op_dispatch_v4reply_ops__unparseSelf(&instance->reclaim_complete, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
nfscmd_nfsv4reply__initERD(nfscmd_nfsv4reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nfscmd_nfsv4reply_ERD;
    instance->_base.parent = parent;
    op_dispatch_v4reply_ops__initERD(&instance->op_dispatch, (InfosetBase *)instance);
}

static void
nfscmd_nfsv4reply__parseSelf(nfscmd_nfsv4reply_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->opcode, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->status, 32, pstate);
    if (pstate->pu.error) return;
    op_dispatch_v4reply_ops__parseSelf(&instance->op_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
nfscmd_nfsv4reply__unparseSelf(const nfscmd_nfsv4reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->opcode, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->status, 32, ustate);
    if (ustate->pu.error) return;
    op_dispatch_v4reply_ops__unparseSelf(&instance->op_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__initERD(nfsv4_accept_dispatch_accept_reply_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 16; i++)
    {
        nfscmd_nfsv4reply__initERD(&instance->nfscmd[i], (InfosetBase *)instance);
    }
}

static void
array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__parseSelf(nfsv4_accept_dispatch_accept_reply_ *instance, PState *pstate)
{
    const size_t arraySize = array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__getArraySize(instance);
    validate_array_bounds("array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply_", arraySize, 0, 16, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        nfscmd_nfsv4reply__parseSelf(&instance->nfscmd[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__unparseSelf(const nfsv4_accept_dispatch_accept_reply_ *instance, UState *ustate)
{
    const size_t arraySize = array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__getArraySize(instance);
    validate_array_bounds("array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply_", arraySize, 0, 16, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        nfscmd_nfsv4reply__unparseSelf(&instance->nfscmd[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__getArraySize(const nfsv4_accept_dispatch_accept_reply_ *instance)
{
    return instance->numargs;
}

static void
nfsv4_accept_dispatch_accept_reply__initERD(nfsv4_accept_dispatch_accept_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &nfsv4_accept_dispatch_accept_reply_ERD;
    instance->_base.parent = parent;
    tag_nfsv4reply__initERD(&instance->tag, (InfosetBase *)instance);
    array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__initERD(instance, parent);
}

static void
nfsv4_accept_dispatch_accept_reply__parseSelf(nfsv4_accept_dispatch_accept_reply_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->status, 32, pstate);
    if (pstate->pu.error) return;
    tag_nfsv4reply__parseSelf(&instance->tag, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->numargs, 32, pstate);
    if (pstate->pu.error) return;
    array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
nfsv4_accept_dispatch_accept_reply__unparseSelf(const nfsv4_accept_dispatch_accept_reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->status, 32, ustate);
    if (ustate->pu.error) return;
    tag_nfsv4reply__unparseSelf(&instance->tag, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->numargs, 32, ustate);
    if (ustate->pu.error) return;
    array_nfscmd_nfsv4reply_nfsv4_accept_dispatch_accept_reply__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
accept_dispatch_accept_reply__initERD(accept_dispatch_accept_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &accept_dispatch_accept_reply_ERD;
    instance->_base.parent = parent;
}

static const Error *
accept_dispatch_accept_reply__initChoice(accept_dispatch_accept_reply_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((RqstRply_ *)get_infoset(false))->Request.entry_dispatch.call_body.vers;
    switch (key)
    {
    case 4:
        instance->_choice = 1;
        nfsv4_accept_dispatch_accept_reply__initERD(&instance->nfsv4, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
accept_dispatch_accept_reply__parseSelf(accept_dispatch_accept_reply_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        nfsv4_accept_dispatch_accept_reply__parseSelf(&instance->nfsv4, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
accept_dispatch_accept_reply__unparseSelf(const accept_dispatch_accept_reply_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        nfsv4_accept_dispatch_accept_reply__unparseSelf(&instance->nfsv4, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
accept_reply_reply_dispatch_reply_body__initERD(accept_reply_reply_dispatch_reply_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &accept_reply_reply_dispatch_reply_body_ERD;
    instance->_base.parent = parent;
    verf_accept_reply__initERD(&instance->verf, (InfosetBase *)instance);
    accept_dispatch_accept_reply__initERD(&instance->accept_dispatch, (InfosetBase *)instance);
}

static void
accept_reply_reply_dispatch_reply_body__parseSelf(accept_reply_reply_dispatch_reply_body_ *instance, PState *pstate)
{
    verf_accept_reply__parseSelf(&instance->verf, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->accept_status, 32, pstate);
    if (pstate->pu.error) return;
    accept_dispatch_accept_reply__parseSelf(&instance->accept_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
accept_reply_reply_dispatch_reply_body__unparseSelf(const accept_reply_reply_dispatch_reply_body_ *instance, UState *ustate)
{
    verf_accept_reply__unparseSelf(&instance->verf, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->accept_status, 32, ustate);
    if (ustate->pu.error) return;
    accept_dispatch_accept_reply__unparseSelf(&instance->accept_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
rpc_mismatch_reject_dispatch_reject_reply__initERD(rpc_mismatch_reject_dispatch_reject_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &rpc_mismatch_reject_dispatch_reject_reply_ERD;
    instance->_base.parent = parent;
}

static void
rpc_mismatch_reject_dispatch_reject_reply__parseSelf(rpc_mismatch_reject_dispatch_reject_reply_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->low, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->high, 32, pstate);
    if (pstate->pu.error) return;
}

static void
rpc_mismatch_reject_dispatch_reject_reply__unparseSelf(const rpc_mismatch_reject_dispatch_reject_reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->low, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->high, 32, ustate);
    if (ustate->pu.error) return;
}

static void
auth_error_reject_dispatch_reject_reply__initERD(auth_error_reject_dispatch_reject_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &auth_error_reject_dispatch_reject_reply_ERD;
    instance->_base.parent = parent;
}

static void
auth_error_reject_dispatch_reject_reply__parseSelf(auth_error_reject_dispatch_reject_reply_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->stat, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->stat <= 14, "stat", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
auth_error_reject_dispatch_reject_reply__unparseSelf(const auth_error_reject_dispatch_reject_reply_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->stat, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->stat <= 14, "stat", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
reject_dispatch_reject_reply__initERD(reject_dispatch_reject_reply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reject_dispatch_reject_reply_ERD;
    instance->_base.parent = parent;
}

static const Error *
reject_dispatch_reject_reply__initChoice(reject_dispatch_reject_reply_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((reject_reply_reply_dispatch_reply_body_ *)instance->_base.parent)->reject_status;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        rpc_mismatch_reject_dispatch_reject_reply__initERD(&instance->rpc_mismatch, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        auth_error_reject_dispatch_reject_reply__initERD(&instance->auth_error, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
reject_dispatch_reject_reply__parseSelf(reject_dispatch_reject_reply_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        rpc_mismatch_reject_dispatch_reject_reply__parseSelf(&instance->rpc_mismatch, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        auth_error_reject_dispatch_reject_reply__parseSelf(&instance->auth_error, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
reject_dispatch_reject_reply__unparseSelf(const reject_dispatch_reject_reply_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        rpc_mismatch_reject_dispatch_reject_reply__unparseSelf(&instance->rpc_mismatch, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        auth_error_reject_dispatch_reject_reply__unparseSelf(&instance->auth_error, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
reject_reply_reply_dispatch_reply_body__initERD(reject_reply_reply_dispatch_reply_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reject_reply_reply_dispatch_reply_body_ERD;
    instance->_base.parent = parent;
    reject_dispatch_reject_reply__initERD(&instance->reject_dispatch, (InfosetBase *)instance);
}

static void
reject_reply_reply_dispatch_reply_body__parseSelf(reject_reply_reply_dispatch_reply_body_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->reject_status, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->reject_status <= 1, "reject_status", &pstate->pu);
    if (pstate->pu.error) return;
    reject_dispatch_reject_reply__parseSelf(&instance->reject_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
reject_reply_reply_dispatch_reply_body__unparseSelf(const reject_reply_reply_dispatch_reply_body_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->reject_status, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->reject_status <= 1, "reject_status", &ustate->pu);
    if (ustate->pu.error) return;
    reject_dispatch_reject_reply__unparseSelf(&instance->reject_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
reply_dispatch_reply_body__initERD(reply_dispatch_reply_body_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reply_dispatch_reply_body_ERD;
    instance->_base.parent = parent;
}

static const Error *
reply_dispatch_reply_body__initChoice(reply_dispatch_reply_body_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((reply_body_entry_dispatch_entry_point_ *)instance->_base.parent)->status;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        accept_reply_reply_dispatch_reply_body__initERD(&instance->accept_reply, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        reject_reply_reply_dispatch_reply_body__initERD(&instance->reject_reply, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
reply_dispatch_reply_body__parseSelf(reply_dispatch_reply_body_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        accept_reply_reply_dispatch_reply_body__parseSelf(&instance->accept_reply, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        reject_reply_reply_dispatch_reply_body__parseSelf(&instance->reject_reply, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
reply_dispatch_reply_body__unparseSelf(const reply_dispatch_reply_body_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        accept_reply_reply_dispatch_reply_body__unparseSelf(&instance->accept_reply, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        reject_reply_reply_dispatch_reply_body__unparseSelf(&instance->reject_reply, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
reply_body_entry_dispatch_entry_point__initERD(reply_body_entry_dispatch_entry_point_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &reply_body_entry_dispatch_entry_point_ERD;
    instance->_base.parent = parent;
    reply_dispatch_reply_body__initERD(&instance->reply_dispatch, (InfosetBase *)instance);
}

static void
reply_body_entry_dispatch_entry_point__parseSelf(reply_body_entry_dispatch_entry_point_ *instance, PState *pstate)
{
    parse_be_uint32(&instance->status, 32, pstate);
    if (pstate->pu.error) return;
    reply_dispatch_reply_body__parseSelf(&instance->reply_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
reply_body_entry_dispatch_entry_point__unparseSelf(const reply_body_entry_dispatch_entry_point_ *instance, UState *ustate)
{
    unparse_be_uint32(instance->status, 32, ustate);
    if (ustate->pu.error) return;
    reply_dispatch_reply_body__unparseSelf(&instance->reply_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
entry_dispatch_entry_point__initERD(entry_dispatch_entry_point_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &entry_dispatch_entry_point_ERD;
    instance->_base.parent = parent;
}

static const Error *
entry_dispatch_entry_point__initChoice(entry_dispatch_entry_point_ *instance)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    int64_t key = ((Request_RqstRply_ *)instance->_base.parent)->mtype;
    switch (key)
    {
    case 0:
        instance->_choice = 1;
        call_body_entry_dispatch_entry_point__initERD(&instance->call_body, (InfosetBase *)instance);
        break;
    case 1:
        instance->_choice = 2;
        reply_body_entry_dispatch_entry_point__initERD(&instance->reply_body, (InfosetBase *)instance);
        break;
    default:
        error.arg.d64 = key;
        return &error;
    }

    return NULL;
}

static void
entry_dispatch_entry_point__parseSelf(entry_dispatch_entry_point_ *instance, PState *pstate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    pstate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (pstate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        call_body_entry_dispatch_entry_point__parseSelf(&instance->call_body, pstate);
        if (pstate->pu.error) return;
        break;
    case 2:
        reply_body_entry_dispatch_entry_point__parseSelf(&instance->reply_body, pstate);
        if (pstate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        pstate->pu.error = &error;
        return;
    }
}

static void
entry_dispatch_entry_point__unparseSelf(const entry_dispatch_entry_point_ *instance, UState *ustate)
{
    static Error error = {ERR_CHOICE_KEY, {0}};

    ustate->pu.error = instance->_base.erd->initChoice(&instance->_base);
    if (ustate->pu.error) return;

    switch (instance->_choice)
    {
    case 1:
        call_body_entry_dispatch_entry_point__unparseSelf(&instance->call_body, ustate);
        if (ustate->pu.error) return;
        break;
    case 2:
        reply_body_entry_dispatch_entry_point__unparseSelf(&instance->reply_body, ustate);
        if (ustate->pu.error) return;
        break;
    default:
        // Should never happen because initChoice would return an error first
        error.arg.d64 = (int64_t)instance->_choice;
        ustate->pu.error = &error;
        return;
    }
}

static void
Request_RqstRply__initERD(Request_RqstRply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &Request_RqstRply_ERD;
    instance->_base.parent = parent;
    recfragment_entry_point__initERD(&instance->recfragment, (InfosetBase *)instance);
    entry_dispatch_entry_point__initERD(&instance->entry_dispatch, (InfosetBase *)instance);
}

static void
Request_RqstRply__parseSelf(Request_RqstRply_ *instance, PState *pstate)
{
    recfragment_entry_point__parseSelf(&instance->recfragment, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->xid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->mtype, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mtype <= 1, "mtype", &pstate->pu);
    if (pstate->pu.error) return;
    entry_dispatch_entry_point__parseSelf(&instance->entry_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
Request_RqstRply__unparseSelf(const Request_RqstRply_ *instance, UState *ustate)
{
    recfragment_entry_point__unparseSelf(&instance->recfragment, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->xid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->mtype, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mtype <= 1, "mtype", &ustate->pu);
    if (ustate->pu.error) return;
    entry_dispatch_entry_point__unparseSelf(&instance->entry_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
Reply_RqstRply__initERD(Reply_RqstRply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &Reply_RqstRply_ERD;
    instance->_base.parent = parent;
    recfragment_entry_point__initERD(&instance->recfragment, (InfosetBase *)instance);
    entry_dispatch_entry_point__initERD(&instance->entry_dispatch, (InfosetBase *)instance);
}

static void
Reply_RqstRply__parseSelf(Reply_RqstRply_ *instance, PState *pstate)
{
    recfragment_entry_point__parseSelf(&instance->recfragment, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->xid, 32, pstate);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->mtype, 32, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->mtype <= 1, "mtype", &pstate->pu);
    if (pstate->pu.error) return;
    entry_dispatch_entry_point__parseSelf(&instance->entry_dispatch, pstate);
    if (pstate->pu.error) return;
}

static void
Reply_RqstRply__unparseSelf(const Reply_RqstRply_ *instance, UState *ustate)
{
    recfragment_entry_point__unparseSelf(&instance->recfragment, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->xid, 32, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->mtype, 32, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->mtype <= 1, "mtype", &ustate->pu);
    if (ustate->pu.error) return;
    entry_dispatch_entry_point__unparseSelf(&instance->entry_dispatch, ustate);
    if (ustate->pu.error) return;
}

static void
RqstRply__initERD(RqstRply_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &RqstRply_ERD;
    instance->_base.parent = parent;
    Request_RqstRply__initERD(&instance->Request, (InfosetBase *)instance);
    Reply_RqstRply__initERD(&instance->Reply, (InfosetBase *)instance);
}

static void
RqstRply__parseSelf(RqstRply_ *instance, PState *pstate)
{
    Request_RqstRply__parseSelf(&instance->Request, pstate);
    if (pstate->pu.error) return;
    Reply_RqstRply__parseSelf(&instance->Reply, pstate);
    if (pstate->pu.error) return;
}

static void
RqstRply__unparseSelf(const RqstRply_ *instance, UState *ustate)
{
    Request_RqstRply__unparseSelf(&instance->Request, ustate);
    if (ustate->pu.error) return;
    Reply_RqstRply__unparseSelf(&instance->Reply, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static RqstRply_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        RqstRply__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
