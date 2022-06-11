import React, { useEffect, useState } from 'react'
import styles from "../styles/Home.module.css";
import Image from "next/image";
import sales from "../public/assets/sale.svg";
import whyshopwithus from "../public/assets/whyshopwithus.svg";
import mobilegh from "../public/assets/MobileGithubImage.jpg"
import { useUser } from '@auth0/nextjs-auth0';
import Shoplanding from "../public/assets/Shoplanding.svg"
import paylesswithus from "../public/assets/paylesswithus.svg";
import Link from 'next/link';



const Homecontainer = () => {
    const { user, error, isLoading } = useUser();
    const [win, setwin] = useState();
    const [creds, setcreds] = useState("");
    const [creds2, setcreds2] = useState({ email: "" });






    const addusertoDB = () => {
        fetch(`${process.env.NEXT_PUBLIC_APP_URL}/api/products/addtodolisttodb`, {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(creds2)
        })
            .then(res => res.json())
            .then(data => {
                console.log(data);
            }
            )
            .catch(err => console.log(err));

        // console.log(creds);
    }

    const searchuserinDB = () => {

        fetch(`${process.env.NEXT_PUBLIC_APP_URL}/api/user/getoneuser`, {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(
                creds2
            )
        })
            .then(res => res.json())
            .then(data => {
                if (data.sucess === "nosucess") {
                    console.log("User not found");
                    addusertoDB();
                }
            })
            .catch(err => console.log(err));

    }


    useEffect(() => {

        if (user) {
            console.log(user);
            localStorage.setItem("useremail", user.email);

            const useremail = localStorage.getItem("useremail");
            setcreds(useremail);
            creds2.email = useremail;

            searchuserinDB();
        }

    }, [user]);

    useEffect(() => {
        // window is accessible here.
        console.log("window.innerHeight", window.innerHeight);
        setwin(window.innerHeight);
    }, []);







    return (<>




        <div className={styles.imagediv1}>
            <Image src={mobilegh} width={700} height={700} alt="wear" className={styles.image1} />
        </div>

        <div className={styles.imagediv2}>
            <div className="row">
                <div className="col-lg-6 col-sm-12"><Image src={Shoplanding} width={650} height={650} alt="wear" className={styles.image1} /></div>

                <div className="col-lg-6 col-sm-12"> <div className={styles.imagediv2_textdiv}>
                    <h3>Study at  Beach ? 🌊</h3>
                    <p>Welcome to Seach, a place where you can study even if you are enjoying out there on the beach !! </p>
                    <Link href={`/todolist/${creds}`} passHref  ><button className={`btn btn-warning ${styles.explorebtn}`}>To-Do List</button></Link>


                </div></div>
            </div>


        </div>

        <hr className={styles.hrbar} />


        <div className={styles.imagediv2}>

            <div className={`row ${styles.rowdesktop}`}>

                <div className="col-lg-6 col-sm-12">
                    <div className={styles.imagediv2_textdiv} style={{ paddingLeft: "10rem" }}>
                        <h3>Why choose Seach ? </h3>
                        <p> We have so many stuffs just for you , starting from the never ending list of Hackathons all the way to Lofi music, and even a study tracker so that you never miss out anything when you are chilling out there !!  </p>
                        <button className={`btn btn-warning ${styles.explorebtn}`}>Hackathons</button>


                    </div>

                </div>

                <div className="col-lg-6 col-sm-12">
                    <Image src={whyshopwithus} width={800} height={800} alt="wear" className={styles.image1} />
                </div>


            </div>

            <div className={`row ${styles.rowmobile}`}>

                <div className="col-lg-6 col-sm-12">
                    <Image src={whyshopwithus} width={800} height={800} alt="wear" className={styles.image1} />
                </div>

                <div className="col-lg-6 col-sm-12">
                    <div className={styles.imagediv2_textdiv}>
                        <h3>Why shop with us ?</h3>
                        <p>We at ShopCoders offer you official merchandise from all the coding event. These are mostly left out/ not gave-away. We tied up with 50+ official code companies like Github, Digital Ocean to bring you the best of the swags at an affordable price !! </p>


                    </div>

                </div>
            </div>


        </div>


        <hr className={styles.hrbar} />


        <div className={styles.imagediv2} style={{ marginTop: "2rem", marginBottom: "2rem" }}>
            <div className="row">
                <div className="col-lg-6 col-sm-12"><Image src={paylesswithus} width={750} height={750} alt="wear" className={styles.image1} /></div>

                <div className="col-lg-6 col-sm-12"> <div className={styles.imagediv2_textdiv} style={{ paddingLeft: "10rem" }}>
                    <h3>No hidden charges !!</h3>
                    <p>We at Seach want you to have the most premium features and the best experience using it.<br />
                        We won&apos;t charge you anything extra for it, rather you&apos;ll get more benefits if you are a student !!
                    </p>

                    {user ? <button className={`btn btn-warning ${styles.explorebtn}`}>Logout</button> : <button className={`btn btn-warning ${styles.explorebtn}`}>Login now !!</button>}


                </div></div>
            </div>


        </div>


    </>

    )
}

export default Homecontainer