/*
 * Copyright 2024 J.Peter Brady
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package edu.dartmouth

import org.apache.daffodil.lib.api.TDMLImplementation
import org.apache.daffodil.tdml.Runner
import org.junit.AfterClass
import org.junit.Test

object TestV3C {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV3.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV3.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV3C {
  import TestV3C._

  @Test def c_onc_progversion_error(): Unit = { runnerC.runOneTest("onc_progversion_error") }
  @Test def c_onc_rpcversion_error(): Unit  = { runnerC.runOneTest("onc_rpcversion_error") }
  @Test def c_onc_program_error(): Unit     = { runnerC.runOneTest("onc_program_error") }
  @Test def c_portmap_mount_call(): Unit    = { runnerC.runOneTest("portmap_mount_call") }
  @Test def c_portmap_mount_rply(): Unit    = { runnerC.runOneTest("portmap_mount_rply") }
  @Test def c_mountd_null_call(): Unit      = { runnerC.runOneTest("mountd_null_call") }
  @Test def c_mountd_mnt_call(): Unit       = { runnerC.runOneTest("mountd_mnt_call") }
  @Test def c_mountd_umnt_call(): Unit      = { runnerC.runOneTest("mountd_umnt_call") }
  @Test def c_mountd_umnt_error(): Unit     = { runnerC.runOneTest("mountd_umnt_error") }
  @Test def c_mountd_dump_call(): Unit      = { runnerC.runOneTest("mountd_dump_call") }
  @Test def c_mountd_umntall_call(): Unit   = { runnerC.runOneTest("mountd_umntall_call") }
  @Test def c_mountd_export_call(): Unit    = { runnerC.runOneTest("mountd_export_call") }
  @Test def c_nfs_create_call(): Unit       = { runnerC.runOneTest("nfs_create_call") }
  @Test def c_nfs_fsinfo_call(): Unit       = { runnerC.runOneTest("nfs_fsinfo_call") }
  @Test def c_nfs_fsstat_call(): Unit       = { runnerC.runOneTest("nfs_fsstat_call") }
  @Test def c_nfs_getattr_call(): Unit      = { runnerC.runOneTest("nfs_getattr_call") }
  @Test def c_nfs_lookup1_call(): Unit      = { runnerC.runOneTest("nfs_lookup1_call") }
  @Test def c_nfs_lookup2_call(): Unit      = { runnerC.runOneTest("nfs_lookup2_call") }
  @Test def c_nfs_pathconf_call(): Unit     = { runnerC.runOneTest("nfs_pathconf_call") }
  @Test def c_nfs_access_call(): Unit       = { runnerC.runOneTest("nfs_access_call") }
  @Test def c_nfs_link_call(): Unit         = { runnerC.runOneTest("nfs_link_call") }
  @Test def c_nfs_mkdir_call(): Unit        = { runnerC.runOneTest("nfs_mkdir_call") }
  @Test def c_nfs_readdir_call(): Unit      = { runnerC.runOneTest("nfs_readdir_call") }
  @Test def c_nfs_readdirplus_call(): Unit  = { runnerC.runOneTest("nfs_readdirplus_call") }
  @Test def c_nfs_read_call(): Unit         = { runnerC.runOneTest("nfs_read_call") }
  @Test def c_nfs_readlink_call(): Unit     = { runnerC.runOneTest("nfs_readlink_call") }
  @Test def c_nfs_remove_call(): Unit       = { runnerC.runOneTest("nfs_remove_call") }
  @Test def c_nfs_rename_call(): Unit       = { runnerC.runOneTest("nfs_rename_call") }
  @Test def c_nfs_rmdir_call(): Unit        = { runnerC.runOneTest("nfs_rmdir_call") }
  @Test def c_nfs_symlink_call(): Unit      = { runnerC.runOneTest("nfs_symlink_call") }
  @Test def c_nfs_write_call(): Unit        = { runnerC.runOneTest("nfs_write_call") }

}
