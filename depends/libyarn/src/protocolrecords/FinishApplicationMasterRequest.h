/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef FINISHAPPLICATIONMASTERREQUEST_H_
#define FINISHAPPLICATIONMASTERREQUEST_H_

#include <iostream>

#include "YARN_yarn_service_protos.pb.h"

#include "records/FinalApplicationStatus.h"

using std::string;
using namespace hadoop::yarn;

namespace libyarn {

/*
message FinishApplicationMasterRequestProto {
  optional string diagnostics = 1;
  optional string tracking_url = 2;
  optional FinalApplicationStatusProto final_application_status = 3;
}
*/

class FinishApplicationMasterRequest {
public:
	FinishApplicationMasterRequest();
	FinishApplicationMasterRequest(const FinishApplicationMasterRequestProto &proto);
	virtual ~FinishApplicationMasterRequest();

	FinishApplicationMasterRequestProto& getProto();

	void setDiagnostics(string &diagnostics);
	string getDiagnostics();

	void setTrackingUrl(string &url);
	string getTrackingUrl();

	void setFinalApplicationStatus(FinalApplicationStatus finalState);
	FinalApplicationStatus getFinalApplicationStatus();

private:
	FinishApplicationMasterRequestProto requestProto;
};

} /* namespace libyarn */

#endif /* FINISHAPPLICATIONMASTERREQUEST_H_ */
