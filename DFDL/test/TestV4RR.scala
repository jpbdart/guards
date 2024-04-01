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

object TestV4RR {
  val testDir = "/"
  lazy val runner: Runner = Runner(testDir, "TestV4RR.tdml", TDMLImplementation.Daffodil)
  lazy val runnerC: Runner = Runner(testDir, "TestV4RR.tdml", TDMLImplementation.DaffodilC)

  @AfterClass def shutDown(): Unit = {
    runner.reset()
    runnerC.reset()
  }
}

class TestV4RR {
  import TestV4RR._

  @Test def exchange_id_RR(): Unit      = { runner.runOneTest("exchange_id_RR") }
  @Test def create_session_RR(): Unit   = { runner.runOneTest("create_session_RR") }
  @Test def reclaim_complete_RR(): Unit = { runner.runOneTest("reclaim_complete_RR") }
  @Test def secinfo_RR(): Unit          = { runner.runOneTest("secinfo_RR") }
  @Test def getattr_RR(): Unit          = { runner.runOneTest("getattr_RR") }
  @Test def access_RR(): Unit           = { runner.runOneTest("access_RR") }
  @Test def lookup_RR(): Unit           = { runner.runOneTest("lookup_RR") }
  @Test def open_RR(): Unit             = { runner.runOneTest("open_RR") }
  @Test def write_RR(): Unit            = { runner.runOneTest("write_RR") }
  @Test def read_RR(): Unit             = { runner.runOneTest("read_RR") }
  @Test def layoutreturn_RR(): Unit     = { runner.runOneTest("layoutreturn_RR") }
  @Test def dest_session_RR(): Unit     = { runner.runOneTest("dest_session_RR") }
  @Test def dest_client_RR(): Unit      = { runner.runOneTest("dest_client_RR") }
  @Test def close_RR(): Unit            = { runner.runOneTest("close_RR") }

}
