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

object TestV4RRC {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV4RR.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV4RR.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV4RRC {
  import TestV4RRC._

  @Test def c_exchange_id_RR(): Unit      = { runnerC.runOneTest("exchange_id_RR") }
  @Test def c_create_session_RR(): Unit   = { runnerC.runOneTest("create_session_RR") }
  @Test def c_reclaim_complete_RR(): Unit = { runnerC.runOneTest("reclaim_complete_RR") }
@Test def c_secinfo_RR(): Unit          = { runnerC.runOneTest("secinfo_RR") }
  @Test def c_getattr_RR(): Unit          = { runnerC.runOneTest("getattr_RR") }
  @Test def c_access_RR(): Unit           = { runnerC.runOneTest("access_RR") }
  @Test def c_lookup_RR(): Unit           = { runnerC.runOneTest("lookup_RR") }
@Test def c_open_RR(): Unit             = { runnerC.runOneTest("open_RR") }
  @Test def c_write_RR(): Unit            = { runnerC.runOneTest("write_RR") }
  @Test def c_read_RR(): Unit             = { runnerC.runOneTest("read_RR") }
@Test def c_layoutreturn_RR(): Unit     = { runnerC.runOneTest("layoutreturn_RR") }
  @Test def c_dest_session_RR(): Unit     = { runnerC.runOneTest("dest_session_RR") }
  @Test def c_dest_client_RR(): Unit      = { runnerC.runOneTest("dest_client_RR") }
  @Test def c_close_RR(): Unit            = { runnerC.runOneTest("close_RR") }

}
