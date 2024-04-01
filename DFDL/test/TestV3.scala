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

object TestV3 {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV3.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV3.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV3 {
  import TestV3._

  @Test def onc_progversion_error(): Unit = { runner.runOneTest("onc_progversion_error") }
  @Test def onc_rpcversion_error(): Unit  = { runner.runOneTest("onc_rpcversion_error") }
  @Test def onc_program_error(): Unit     = { runner.runOneTest("onc_program_error") }
  @Test def portmap_mount_call(): Unit    = { runner.runOneTest("portmap_mount_call") }
  @Test def portmap_mount_rply(): Unit    = { runner.runOneTest("portmap_mount_rply") }
  @Test def mountd_null_call(): Unit      = { runner.runOneTest("mountd_null_call") }
  @Test def mountd_mnt_call(): Unit       = { runner.runOneTest("mountd_mnt_call") }
  @Test def mountd_umnt_call(): Unit      = { runner.runOneTest("mountd_umnt_call") }
  @Test def mountd_umnt_error(): Unit     = { runner.runOneTest("mountd_umnt_error") }
  @Test def mountd_dump_call(): Unit      = { runner.runOneTest("mountd_dump_call") }
  @Test def mountd_umntall_call(): Unit   = { runner.runOneTest("mountd_umntall_call") }
  @Test def mountd_export_call(): Unit    = { runner.runOneTest("mountd_export_call") }
  @Test def nfs_create_call(): Unit       = { runner.runOneTest("nfs_create_call") }
  @Test def nfs_fsinfo_call(): Unit       = { runner.runOneTest("nfs_fsinfo_call") }
  @Test def nfs_fsstat_call(): Unit       = { runner.runOneTest("nfs_fsstat_call") }
  @Test def nfs_getattr_call(): Unit      = { runner.runOneTest("nfs_getattr_call") }
  @Test def nfs_lookup1_call(): Unit      = { runner.runOneTest("nfs_lookup1_call") }
  @Test def nfs_lookup2_call(): Unit      = { runner.runOneTest("nfs_lookup2_call") }
  @Test def nfs_pathconf_call(): Unit     = { runner.runOneTest("nfs_pathconf_call") }
  @Test def nfs_access_call(): Unit       = { runner.runOneTest("nfs_access_call") }
  @Test def nfs_link_call(): Unit         = { runner.runOneTest("nfs_link_call") }
  @Test def nfs_mkdir_call(): Unit        = { runner.runOneTest("nfs_mkdir_call") }
  @Test def nfs_readdir_call(): Unit      = { runner.runOneTest("nfs_readdir_call") }
  @Test def nfs_readdirplus_call(): Unit  = { runner.runOneTest("nfs_readdirplus_call") }
  @Test def nfs_read_call(): Unit         = { runner.runOneTest("nfs_read_call") }
  @Test def nfs_readlink_call(): Unit     = { runner.runOneTest("nfs_readlink_call") }
  @Test def nfs_remove_call(): Unit       = { runner.runOneTest("nfs_remove_call") }
  @Test def nfs_rename_call(): Unit       = { runner.runOneTest("nfs_rename_call") }
  @Test def nfs_rmdir_call(): Unit        = { runner.runOneTest("nfs_rmdir_call") }
  @Test def nfs_symlink_call(): Unit      = { runner.runOneTest("nfs_symlink_call") }
  @Test def nfs_write_call(): Unit        = { runner.runOneTest("nfs_write_call") }

}
