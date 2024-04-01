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

object TestV3RR {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV3RR.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV3RR.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV3RR {
  import TestV3RR._

  @Test def portmap_mount_RR(): Unit = { runner.runOneTest("portmap_mount_RR") }
  @Test def mountd_null_RR(): Unit   = { runner.runOneTest("mountd_null_RR") }
  @Test def mountd_mnt_RR(): Unit    = { runner.runOneTest("mountd_mnt_RR") }

}
