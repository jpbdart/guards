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

object TestV4 {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV4.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV4.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV4 {
  import TestV4._

  @Test def exchange_id_rqst(): Unit      = { runner.runOneTest("exchange_id_rqst") }
  @Test def create_session_rqst(): Unit   = { runner.runOneTest("create_session_rqst") }
  @Test def reclaim_complete_rqst(): Unit = { runner.runOneTest("reclaim_complete_rqst") }
  @Test def secinfo_rqst(): Unit          = { runner.runOneTest("secinfo_rqst") }
  @Test def getattr_rqst(): Unit          = { runner.runOneTest("getattr_rqst") }
  @Test def getattr2_rqst(): Unit         = { runner.runOneTest("getattr2_rqst") }
  @Test def getattr3_rqst(): Unit         = { runner.runOneTest("getattr3_rqst") }
  @Test def getattr4_rqst(): Unit         = { runner.runOneTest("getattr4_rqst") }
  @Test def access_rqst(): Unit           = { runner.runOneTest("access_rqst") }
  @Test def lookup_rqst(): Unit           = { runner.runOneTest("lookup_rqst") }
  @Test def open_rqst(): Unit             = { runner.runOneTest("open_rqst") }
  @Test def read_rqst(): Unit             = { runner.runOneTest("read_rqst") }
  @Test def layoutreturn_rqst(): Unit     = { runner.runOneTest("layoutreturn_rqst") }
  @Test def write_rqst(): Unit            = { runner.runOneTest("write_rqst") }
  @Test def dest_session_rqst(): Unit     = { runner.runOneTest("dest_session_rqst") }
  @Test def dest_client_rqst(): Unit      = { runner.runOneTest("dest_client_rqst") }
  @Test def close_rqst(): Unit            = { runner.runOneTest("close_rqst") }
  @Test def compound_open_rqst(): Unit    = { runner.runOneTest("compound_open_rqst") }
  @Test def delegreturn_rqst(): Unit      = { runner.runOneTest("delegreturn_rqst") }
  @Test def setclient_rqst(): Unit        = { runner.runOneTest("setclient_rqst") }
  @Test def setclient_confirm_rqst(): Unit= { runner.runOneTest("setclient_confirm_rqst") }

}
