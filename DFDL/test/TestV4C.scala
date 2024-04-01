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

object TestV4C {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV4.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV4.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV4C {
  import TestV4C._

// c_exchange_id_rqst does not generate alignment code after nii_name element, hence fails
  @Test def c_exchange_id_rqst(): Unit      = { runnerC.runOneTest("exchange_id_rqst") }
  @Test def c_create_session_rqst(): Unit   = { runnerC.runOneTest("create_session_rqst") }
  @Test def c_reclaim_complete_rqst(): Unit = { runnerC.runOneTest("reclaim_complete_rqst") }
  @Test def c_secinfo_rqst(): Unit          = { runnerC.runOneTest("secinfo_rqst") }
  @Test def c_getattr_rqst(): Unit          = { runnerC.runOneTest("getattr_rqst") }
  @Test def c_getattr2_rqst(): Unit         = { runnerC.runOneTest("getattr2_rqst") }
  @Test def c_getattr3_rqst(): Unit         = { runnerC.runOneTest("getattr3_rqst") }
  @Test def c_getattr4_rqst(): Unit         = { runnerC.runOneTest("getattr4_rqst") }
  @Test def c_access_rqst(): Unit           = { runnerC.runOneTest("access_rqst") }
  @Test def c_lookup_rqst(): Unit           = { runnerC.runOneTest("lookup_rqst") }
  @Test def c_open_rqst(): Unit             = { runnerC.runOneTest("open_rqst") }
  @Test def c_read_rqst(): Unit             = { runnerC.runOneTest("read_rqst") }
  @Test def c_layoutreturn_rqst(): Unit     = { runnerC.runOneTest("layoutreturn_rqst") }
  @Test def c_write_rqst(): Unit            = { runnerC.runOneTest("write_rqst") }
  @Test def c_dest_session_rqst(): Unit     = { runnerC.runOneTest("dest_session_rqst") }
  @Test def c_dest_client_rqst(): Unit      = { runnerC.runOneTest("dest_client_rqst") }
  @Test def c_close_rqst(): Unit            = { runnerC.runOneTest("close_rqst") }
  @Test def compound_open_rqst(): Unit      = { runnerC.runOneTest("compound_open_rqst") }
  @Test def delegreturn_rqst(): Unit        = { runnerC.runOneTest("delegreturn_rqst") }
  @Test def setclient_rqst(): Unit          = { runnerC.runOneTest("setclient_rqst") }
  @Test def setclient_confirm_rqst(): Unit  = { runnerC.runOneTest("setclient_confirm_rqst") }

}
