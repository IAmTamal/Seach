import React, { useContext, useState } from 'react'
import styles from "../styles/Navbar.module.css"
import Link from 'next/link'
import { AiOutlineUser } from "react-icons/ai";
import { handleLogout, useUser } from "@auth0/nextjs-auth0";
import Image from "next/image";
import Router from 'next/router'

const Navbar = () => {

    const [showdropdown, setshowdropdown] = useState(false);
    const { user, error, isLoading } = useUser();


    const handleLogin = async (e) => {
        await Router.push("/api/auth/login");
    }

    const handleLogout = async (e) => {
        await Router.push("/api/auth/logout");
    }





    return (
        <nav className="navbar navbar-expand-lg navbar-light ">
            <div className={`container-fluid ${styles.navbarparent}`}>
                <Link href="/" passHref>

                    <p className={styles.brand}>
                        Seach
                    </p>

                </Link>

                <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                    <span className="navbar-toggler-icon"></span>
                </button>
                <div className="collapse navbar-collapse" id="navbarSupportedContent">
                    <ul className={`navbar-nav ms-auto mb-2 mb-lg-0 ${styles.navbarul}`}>
                        <Link href={"/"} passHref>
                            <li className={`nav-item ${styles.navlinks}`}>
                                Home
                            </li>

                        </Link>

                        <Link href={"/about"} passHref>
                            <li className={`nav-item ${styles.navlinks}`}>
                                About us
                            </li>

                        </Link>

                        <Link href={"/hackathons"} passHref>
                            <li className={`nav-item ${styles.navlinks}`} >
                                Hackathons
                            </li>

                        </Link>

                        <Link href={"/explore"} passHref>
                            <li className={`nav-item ${styles.navlinks}`} >
                                Explore
                            </li>

                        </Link>







                        <li className={`nav-item ${styles.navlinks}`}>

                            {user ? (
                                <Image src={user.picture} alt="user" height={35} width={35} className={styles.userimage} onClick={(e) => handleLogout(e)} />
                            ) : (
                                <AiOutlineUser fontSize={"1.5rem"} onClick={(e) => handleLogin(e)} />
                            )}


                        </li>

                    </ul>

                </div>
            </div>
        </nav>
    )
}

export default Navbar