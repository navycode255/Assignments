<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Multiple Divs Show</title>
    <link rel="stylesheet" href="new-style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <script defer src="Javascript/script.js"></script>
</head>
<body>
    <div class="parent-div">
        <div class="sidebar-child"> 
            <div class="sidebar-menu-profile">
                <div class="user-profile">
                    <img src="images/user-profile.png" style="width:100%">
                </div>
                <div class="user-profile-title">
                    <h3>KevinKweli</h3>
                    <h5>Tax Collector</h5>
                </div>
            </div>
            <div class="sisdebar-menu-list">
                <ul>
                    <li><i class="fa fa-user-plus"></i><a href="./">Add Machinga</a></li>
                    <li><i class="fa fa-clipboard"></i><a href="./">Generate Report</a></li>
                </ul>
            </div>
        </div>
        <div class="main-child">
           <div class="search_main-child box-shadow">
               <button class="search-btn"><i class="fa fa-search"></i></button>
                <input type="text" placeholder="Search" name="search" class="search-input">
            </div>
            <div class="fourth box-shadow"></div>
            <div class="second box-shadow"></div>
            <div class="first">
                <div class="content-div">
                    <h3>Dar es Salaam</h3>
                    <div class="content-div_cards">
                        <div class="card-child">
                            <label>KN</label>
                            <h5>Kinondoni</h5>
                            <div class="card-child-div">
                                <div class="div-status">
                                    <img src="images/user.png" width="15%">
                                    <p>121,0000</p>
                                </div>
                                <h6>Idadi ya wanaodaiwa</h6>
                            </div>
                        </div>
                        <div class="card-child">
                            <label>IL</label>
                            <h5>Ilala</h5>
                            <div class="card-child-div">
                                <div class="div-status">
                                    <img src="images/user.png" width="15%">
                                    <p>269,2340</p>
                                </div>
                                <h6>Idadi ya wanaodaiwa</h6>
                            </div>
                        </div>
                        <div class="card-child">
                            <label>UB</label>
                            <h5>Ubungo</h5>
                            <div class="card-child-div">
                                <div class="div-status">
                                    <img src="images/user.png" width="15%">
                                    <p>38,0120</p>
                                </div>
                                <h6>Idadi ya wanaodaiwa</h6>
                            </div>
                        </div>
                        <div class="card-child">
                            <label>KGM</label>
                            <h5>Kigamboni</h5>
                            <div class="card-child-div">
                                <div class="div-status">
                                    <img src="images/user.png" width="15%">
                                    <p>12,0000</p>
                                </div>
                                <h6>Idadi ya wanaodaiwa</h6>
                            </div>
                        </div>
                        <div class="card-child">
                            <label>TMK</label>
                            <h5>Temeke</h5>
                            <div class="card-child-div">
                                <div class="div-status">
                                    <img src="images/user.png" width="15%">
                                    <p>66,0800</p>
                                </div>
                                <h6>Idadi ya wanaodaiwa</h6>
                            </div>
                        </div>
                    </div>
                    <h3>Machinga</h3>
                    <div class="content-list-table">
                        <table>
                              <tr>
                                <th>View</th>
                                <th>First Name</th>
                                <th>Last Name</th>
                                <th>Region</th>
                                <th>Payment Date</th>
                                <th>Expire Date</th>
                                <th>Status</th>
                                <th>History</th>
                              </tr>
                              <tr>
                                <td>view</td>
                                <td>Alfreds Futterkiste</td>
                                <td>Maria Anders</td>
                                <td>Dar Es Salaam</td>
                                <td>12-May-2021</td>
                                <td>13-May-2022</td>
                                <td>paid</td>
                                <td><button data-modal-target="#modal">Payments</button></td>
                              </tr>
                              <tr>
                                <td>view</td>
                                <td>Centro comercial Moctezuma</td>
                                <td>Francisco Chang</td>
                                <td>Dar Es Salaam</td>
                                <td>2-Sept-2021</td>
                                <td>3-Sept-2022</td>
                                <td>paid</td>
                                <td><button data-modal-target="#modal">Payments</button></td>
                              </tr>
                              <tr>
                                <td>view</td>
                                <td>Centro comercial Moctezuma</td>
                                <td>Francisco Chang</td>
                                <td>Dar Es Salaam</td>
                                <td>2-Sept-2021</td>
                                <td>3-Sept-2022</td>
                                <td>paid</td>
                                <td><button data-modal-target="#modal">Payments</button></td>
                              </tr>
                        </table>
                        <div class="modal" id="modal">
                            <div class="modal-header">
                                <img src="images/coatOfArmy.png" alt="Coat Of Army">
                                <div class="title">JAMHURI YA MUUNGANO WA TANZANIA <br> 
                                    <p>KITAMBULISHO CHA MJASIRIAMALI MDOGO</p> </div>
                                <img src="images/tzFlag.png" alt="tzFlag">
                                <!-- <button data-close-button  class="close-button">&times;</button> -->
                            </div>
                            <div class="modal-body">
                                <h3>NAMBA YA KADI</h3>
                                <h1>T00 - 928 - 001</h1>
                                <div class="issued-date"><span>Issued Date:</span> 12-Sep-2021</div>
                                <div class="expire-date"><span>Expire Date:</span> 15-Oct-2022</div>
                            </div>
                        </div>
                    <div id="overlay"></div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</body>
</html>    
